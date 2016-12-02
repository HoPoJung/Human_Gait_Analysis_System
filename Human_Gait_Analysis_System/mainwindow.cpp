#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serial = new QSerialPort(this);
    recordFSRClock = new QTimer();
    status = new QLabel;
    ui->statusBar->addWidget(status);
    recordFSRClock->setInterval(1000);

    connect(serial, static_cast<void (QSerialPort::*)(QSerialPort::SerialPortError)>(&QSerialPort::error), this, &MainWindow::handleError);
    connect(recordFSRClock, SIGNAL(timeout()), this, SLOT(readyToRecordData()));
    connect(recordFSRClock, SIGNAL(timeout()), this, SLOT(updateView()));
    settings.name = "/dev/ttyACM0";
    settings.baudRate = QSerialPort::Baud9600;
    settings.dataBits = QSerialPort::Data8;
    settings.parity = QSerialPort::NoParity;
    settings.stopBit = QSerialPort::OneStop;
    settings.flowControl = QSerialPort::NoFlowControl;


    initActionsConnect();

}

void MainWindow::updateView()
{
    bool sensorConnectedAndHasData = sensors->leftAnkle->getConnectionStatus() == SENSOR_CONNECTION_CONNECTED && sensors->leftAnkle->hasImuData();

    if(sensorConnectedAndHasData){
        sensors->d = sensors->leftAnkle->getCurrentData();
        updateUserInterface(&sensors->d);
        qDebug() << "Hello";
    }
}

void MainWindow::updateUserInterface(ImuData *d)
{
    ui->lcdNumber_leftAnkle->display(d->r[0]);
}

void MainWindow::readData(){
    QByteArray data;
    while(serial->canReadLine()){
        data = serial->readAll();
        data = data.trimmed();
    }
    QString myData(data);
    QRegExp rx("[,]");
    QStringList FSRData = myData.split(",", QString::SkipEmptyParts);
    if(FSRData.size() != 0)
        qDebug() << FSRData;
}

void MainWindow::readyToRecordData()
{
    char* startByte = "a";
    //QByteArray startRecord = startByte;
    //qDebug() << "a";
    serial->write(startByte);
}

void MainWindow::openSerialPort()
{
    serial->setPortName(settings.name);
    serial->setBaudRate(settings.baudRate);
    serial->setDataBits(settings.dataBits);
    serial->setParity(settings.parity);
    serial->setStopBits(settings.stopBit);
    serial->setFlowControl(settings.flowControl);

    if(serial->open(QIODevice::ReadWrite)){
       recordFSRClock->start();
       connect(serial, &QSerialPort::readyRead, this, &MainWindow::readData);
    }

    else{
        QMessageBox::critical(this, tr("Error"), serial->errorString());
        status->setText("Open error");
    }
    manager = LpmsSensorManagerFactory();
    sensors->leftAnkle = manager->addSensor(DEVICE_LPMS_B, "00:06:66:A0:BA:EC");
    while(1){
        if(sensors->leftAnkle->getConnectionStatus() == SENSOR_CONNECTION_CONNECTED && sensors->leftAnkle->hasImuData()){
            status->setText("IMU left ankle is connected.");
            break;
        }
    }

}

void MainWindow::closeSerialPort(){
    if(serial->isOpen())
        serial->close();
    status->setText("Disconnected");
}

void MainWindow::handleError(QSerialPort::SerialPortError error)
{
    if(error == QSerialPort::ResourceError){
        QMessageBox::critical(this, tr("Critical Error"), serial->errorString());
        closeSerialPort();
    }
}

void MainWindow::initActionsConnect()
{
    connect(ui->actionConnect, &QAction::triggered, this, &MainWindow::openSerialPort);
}

MainWindow::~MainWindow()
{
    delete ui;
}



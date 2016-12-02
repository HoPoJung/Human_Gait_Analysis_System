#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore/QtGlobal>
#include <QtSerialPort/QSerialPort>
#include <QLabel>
#include <QString>
#include <QMessageBox>
#include <QDebug>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    struct SerialSettings {
        QString name;
        qint32 baudRate;
        QString stringBaudRate;
        QSerialPort::DataBits dataBits;
        QSerialPort::Parity parity;
        QString stringParity;
        QSerialPort::StopBits stopBit;
        QString stringStopBits;
        QSerialPort::FlowControl flowControl;
        QString StringFlowControl;
        bool localEchoEnabled;
    };

    ~MainWindow();

private slots:
    void openSerialPort();
    void closeSerialPort();
    void readData();
    void readyToRecordData();

    void handleError(QSerialPort::SerialPortError error);

private:
    void initActionsConnect();

private:
    Ui::MainWindow *ui;
    QLabel *status;
    QSerialPort *serial;
    SerialSettings settings;
    QTimer *recordFSRClock;
};

#endif // MAINWINDOW_H

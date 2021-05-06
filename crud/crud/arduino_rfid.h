#ifndef ARDUINO_RFID_H
#define ARDUINO_RFID_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

class arduino_rfid
{
    QSerialPort *serial=new QSerialPort();
    static const quint16 arduino_uno_vendor_id=9025;
    static const quint16 arduino_uno_product_id=67;
    QString arduino_port_name;
    bool arduino_is_available;
    QByteArray data;
public:
    arduino_rfid();
    int connect_arduino();
    int close_arduino();
    int write_to_arduino(const char *);
    QByteArray read_from_arduino();
    QSerialPort *getserial(){return serial;}
    QString getarduino_port_name(){return arduino_port_name;}
};

#endif // ARDUINO_RFID_H

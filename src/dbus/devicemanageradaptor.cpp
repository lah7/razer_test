/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp devicemanager.xml -a devicemanageradaptor.h:devicemanageradaptor.cpp -c DeviceManagerAdaptor
 *
 * qdbusxml2cpp is Copyright (C) 2019 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "devicemanageradaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class DeviceManagerAdaptor
 */

DeviceManagerAdaptor::DeviceManagerAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

DeviceManagerAdaptor::~DeviceManagerAdaptor()
{
    // destructor
}

QList<QDBusObjectPath> DeviceManagerAdaptor::devices() const
{
    // get the value of property Devices
    return qvariant_cast<QList<QDBusObjectPath>>(parent()->property("Devices"));
}

QString DeviceManagerAdaptor::version() const
{
    // get the value of property Version
    return qvariant_cast<QString>(parent()->property("Version"));
}

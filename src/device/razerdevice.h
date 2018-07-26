/*
 * <one line to give the program's name and a brief idea of what it does.>
 * Copyright (C) 2018  Luca Weiss <luca@z3ntu.xyz>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef RAZERDEVICE_H
#define RAZERDEVICE_H

#include <hidapi.h>

#include <QObject>
#include <QString>
#include <QVector>
#include <QHash>

#include "../razerreport.h"

enum RazerDeviceQuirks {

};

/**
 * @todo write docs
 */
class RazerDevice : public QObject
{
    Q_OBJECT
public:
    RazerDevice(QString dev_path, ushort vendor_id, ushort product_id, QString name, QString type, QString pclass, QVector<RazerLedId> ledIds, QVector<RazerDeviceQuirks> quirks);
    virtual ~RazerDevice();
    bool openDeviceHandle();
    int sendReport(razer_report request_report, razer_report *response_report);

    virtual bool initializeLeds() = 0;
    virtual bool getBrightness(RazerLedId led, uchar *brightness) = 0;

public Q_SLOTS:
    QVector<RazerLedId> getLedIds();


    virtual QString getSerial();
    virtual QString getFirmwareVersion();

    virtual bool setNone(RazerLedId led) = 0;
    virtual bool setStatic(RazerLedId led, uchar red, uchar green, uchar blue) = 0;
    virtual bool setBreathing(RazerLedId led, uchar red, uchar green, uchar blue) = 0;
    virtual bool setBlinking(RazerLedId led, uchar red, uchar green, uchar blue) = 0;
    virtual bool setSpectrum(RazerLedId led) = 0;
    virtual bool setWave(RazerLedId led) = 0;
    // etc

    virtual bool setBrightness(RazerLedId led, uchar brightness) = 0;
    uchar getBrightness(RazerLedId led);

    QVector<int> getLedIds2();
    RazerLedId getLedIds3();

protected:
    hid_device *handle;

    QString dev_path;
    ushort vendor_id;
    ushort product_id;
    QString name;
    QString type;
    QString pclass;
    QVector<RazerLedId> ledIds;
    QVector<RazerDeviceQuirks> quirks;

    QHash<RazerLedId, RazerLED*> leds;
};

#endif // RAZERDEVICE_H

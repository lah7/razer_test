/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp razerled.xml -a razerledadaptor.h:razerledadaptor.cpp -c RazerLEDAdaptor
 *
 * qdbusxml2cpp is Copyright (C) 2019 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "razerledadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class RazerLEDAdaptor
 */

RazerLEDAdaptor::RazerLEDAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

RazerLEDAdaptor::~RazerLEDAdaptor()
{
    // destructor
}

QList<RGB> RazerLEDAdaptor::currentColors() const
{
    // get the value of property CurrentColors
    return qvariant_cast<QList<RGB>>(parent()->property("CurrentColors"));
}

RazerEffect RazerLEDAdaptor::currentEffect() const
{
    // get the value of property CurrentEffect
    return qvariant_cast<RazerEffect>(parent()->property("CurrentEffect"));
}

RazerLedId RazerLEDAdaptor::ledId() const
{
    // get the value of property LedId
    return qvariant_cast<RazerLedId>(parent()->property("LedId"));
}

uchar RazerLEDAdaptor::getBrightness()
{
    // handle method call io.github.openrazer1.Led.getBrightness
    uchar out0;
    QMetaObject::invokeMethod(parent(), "getBrightness", Q_RETURN_ARG(uchar, out0));
    return out0;
}

bool RazerLEDAdaptor::setBlinking(razer_test::RGB color)
{
    // handle method call io.github.openrazer1.Led.setBlinking
    bool out0;
    QMetaObject::invokeMethod(parent(), "setBlinking", Q_RETURN_ARG(bool, out0), Q_ARG(razer_test::RGB, color));
    return out0;
}

bool RazerLEDAdaptor::setBreathing(razer_test::RGB color)
{
    // handle method call io.github.openrazer1.Led.setBreathing
    bool out0;
    QMetaObject::invokeMethod(parent(), "setBreathing", Q_RETURN_ARG(bool, out0), Q_ARG(razer_test::RGB, color));
    return out0;
}

bool RazerLEDAdaptor::setBreathingDual(razer_test::RGB color, razer_test::RGB color2)
{
    // handle method call io.github.openrazer1.Led.setBreathingDual
    bool out0;
    QMetaObject::invokeMethod(parent(), "setBreathingDual", Q_RETURN_ARG(bool, out0), Q_ARG(razer_test::RGB, color), Q_ARG(razer_test::RGB, color2));
    return out0;
}

bool RazerLEDAdaptor::setBreathingRandom()
{
    // handle method call io.github.openrazer1.Led.setBreathingRandom
    bool out0;
    QMetaObject::invokeMethod(parent(), "setBreathingRandom", Q_RETURN_ARG(bool, out0));
    return out0;
}

bool RazerLEDAdaptor::setBrightness(uchar brightness)
{
    // handle method call io.github.openrazer1.Led.setBrightness
    bool out0;
    QMetaObject::invokeMethod(parent(), "setBrightness", Q_RETURN_ARG(bool, out0), Q_ARG(uchar, brightness));
    return out0;
}

bool RazerLEDAdaptor::setOff()
{
    // handle method call io.github.openrazer1.Led.setOff
    bool out0;
    QMetaObject::invokeMethod(parent(), "setOff", Q_RETURN_ARG(bool, out0));
    return out0;
}

bool RazerLEDAdaptor::setReactive(razer_test::ReactiveSpeed speed, razer_test::RGB color)
{
    // handle method call io.github.openrazer1.Led.setReactive
    bool out0;
    QMetaObject::invokeMethod(parent(), "setReactive", Q_RETURN_ARG(bool, out0), Q_ARG(razer_test::ReactiveSpeed, speed), Q_ARG(razer_test::RGB, color));
    return out0;
}

bool RazerLEDAdaptor::setSpectrum()
{
    // handle method call io.github.openrazer1.Led.setSpectrum
    bool out0;
    QMetaObject::invokeMethod(parent(), "setSpectrum", Q_RETURN_ARG(bool, out0));
    return out0;
}

bool RazerLEDAdaptor::setStatic(razer_test::RGB color)
{
    // handle method call io.github.openrazer1.Led.setStatic
    bool out0;
    QMetaObject::invokeMethod(parent(), "setStatic", Q_RETURN_ARG(bool, out0), Q_ARG(razer_test::RGB, color));
    return out0;
}

bool RazerLEDAdaptor::setWave(razer_test::WaveDirection direction)
{
    // handle method call io.github.openrazer1.Led.setWave
    bool out0;
    QMetaObject::invokeMethod(parent(), "setWave", Q_RETURN_ARG(bool, out0), Q_ARG(razer_test::WaveDirection, direction));
    return out0;
}

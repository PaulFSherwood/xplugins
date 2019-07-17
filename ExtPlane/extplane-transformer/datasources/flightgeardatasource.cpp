#include "flightgeardatasource.h"
#include <QDebug>
#include <QThread>
#include "../extplane-server/datarefs/floatdataref.h"

FlightGearDataSource::FlightGearDataSource() : DataSource() {
    connect(&tcpClient, &BasicTcpClient::connectedChanged,
            this, &FlightGearDataSource::connectedChanged);
    connect(&tcpClient, &BasicTcpClient::receivedLine,
            this, &FlightGearDataSource::readLine);
    connect(&tcpClient, &BasicTcpClient::networkErrorChanged,
            this, &FlightGearDataSource::networkErrorChanged);

    // Fill the mappings of X-Plane <-> FlightGear data refs.
    refMap.insert("sim/cockpit2/gauges/indicators/heading_electric_deg_mag_pilot", "/instrumentation/magnetic-compass/indicated-heading-deg");
    refMap.insert("sim/cockpit2/gauges/indicators/airspeed_kts_pilot", "/instrumentation/airspeed-indicator/indicated-speed-kt");
    refMap.insert("sim/cockpit2/gauges/indicators/pitch_vacuum_deg_pilot", "/instrumentation/attitude-indicator/indicated-pitch-deg");
    refMap.insert("sim/cockpit2/gauges/indicators/roll_vacuum_deg_pilot", "/instrumentation/attitude-indicator/indicated-roll-deg");
    refMap.insert("sim/flightmodel/misc/h_ind", "/instrumentation/altimeter/indicated-altitude-ft");
    refMap.insert("sim/flightmodel/position/vh_ind", "/instrumentation/vertical-speed-indicator/indicated-speed-fpm");
    refMap.insert("sim/cockpit2/gauges/indicators/slip_deg", "/instrumentation/slip-skid-ball/indicated-slip-skid");
    // Please add more here


    // These are updated for every frame, so they should be polled at some
    // interval. Subscribing causes Error:Tied properties cannot register listeners
    // todo: implement polling mechanism
    // refMap.insert("sim/cockpit2/gauges/actuators/barometer_setting_in_hg_pilot", "/instrumentation/altimeter/setting-inhg");


    tcpClient.setLineEnding("\r\n");
    setHelpText("Start FlightGear with --telnet=5401 to allow access to it's properties. \nSee http://wiki.flightgear.org/Telnet_usage for more info. \nTrying to connect to it..");
}

void FlightGearDataSource::connectToSource() {
    setNetworkError(QString());
    tcpClient.setHostName("localhost");
    tcpClient.setPort(5401);
    tcpClient.startConnection();
}

DataRef *FlightGearDataSource::subscribeRef(QString &name)
{
    if(refMap.contains(name)) {
        QString fgRef = refMap.value(name);
        FloatDataRef *newRef = new FloatDataRef(this, name, nullptr);
        floatRefs.append(newRef);
        tcpClient.writeLine("subscribe " + fgRef);
        return newRef;
    }
    return nullptr;
}

void FlightGearDataSource::unsubscribeRef(DataRef *ref)
{
    qDebug() << Q_FUNC_INFO << ref->name();
    tcpClient.writeLine("unsubscribe " + refMap.value(ref->name()));
    if(ref->type() == extplaneRefTypeFloat)
        floatRefs.removeOne(qobject_cast<FloatDataRef*> (ref));
    ref->deleteLater();
}

void FlightGearDataSource::updateDataRef(DataRef *ref)
{}

void FlightGearDataSource::changeDataRef(DataRef *ref)
{}

void FlightGearDataSource::keyStroke(int keyid)
{}

void FlightGearDataSource::buttonPress(int buttonid)
{}

void FlightGearDataSource::buttonRelease(int buttonid)
{}

void FlightGearDataSource::command(QString &name, extplaneCommandType type)
{}

bool FlightGearDataSource::loadSituation(QString sitFileLocation)
{}

void FlightGearDataSource::addFMSEntryLatLon(QString fmsEntryLine)
{}

void FlightGearDataSource::clearAllFmsEntries()
{}

void FlightGearDataSource::setDestinationFmsEntry(int index)
{}

void FlightGearDataSource::connectedChanged(bool connected)
{
    if(connected) {
        setNetworkError(QString());
        setHelpText(QString("Connected to FlightGear at %1:%2").arg(tcpClient.hostName()).arg(tcpClient.port()));
        tcpClient.writeLine("data");
    }
}

void FlightGearDataSource::readLine(QString line)
{
    if(line.contains("=")) {
        QStringList splitted = line.split('=');
        QString fgRef = splitted[0];
        QString valueStr = splitted[1];
        for(FloatDataRef *ref : floatRefs) {
            if(refMap.value(ref->name()) == fgRef) {
                ref->updateValue(valueStr.toFloat());
            }
        }
    } else {
        qDebug() << Q_FUNC_INFO << "Unknown:" << line;
    }

}

void FlightGearDataSource::networkErrorChanged(QString errstring)
{
    setNetworkError(errstring);
}

#include "switch.h"
#include <QString>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include "../widgets/numberinputlineedit.h"
#include "extplaneclient.h"
#include "../util/console.h"
#include <QGraphicsSceneMouseEvent>

REGISTER_WITH_PANEL_ITEM_FACTORY(Switch,"switches/generic");

Switch::Switch(ExtPlanePanel *panel, ExtPlaneConnection *conn) : PanelItem(panel, PanelItemTypeSwitch, PanelItemShapeRectangular),
        _client(this, typeName(), conn) {
            _client.createClient();
            conn->registerClient(&_client);
            connect(&_client, SIGNAL(refChanged(QString,double)), this, SLOT(valueChanged(QString,double)));
            connect(&_client, SIGNAL(refChanged(QString,QString)),this, SLOT(valueChanged(QString,QString)));
            _value = false;
            _label = "Switch";
            _positionValue1 = "0";
            _positionValue2 = "1";
            _switchPosition = 1;
            _dataref = 0;
            setSize(100,30);
}

void Switch::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    setupPainter(painter);

    painter->setBrush(Qt::gray);
    painter->setPen(Qt::gray);
    //////////
    /// START
    ///
    /// setBackgroundBrush(QBrush(QImage(":/images/pedestal.png")));
    double circleSize = height()/3;
    // painter->drawEllipse(0, height()/2-circleSize/2, circleSize, circleSize);

    // painter->save();

    switchWidth = height()/3;
    painter->translate(switchWidth/2, height()/2);
    // QPolygon p;
    // p << QPoint(-switchWidth/4, 0) << QPoint(switchWidth/4, 0)
    //   << QPoint(switchWidth/2, height()/2) << QPoint(-switchWidth/2, height()/2);
    // DEBUG << "Current Value: " << _value << " || position: " << _switchPosition << endl;
    if(_value)
        painter->scale(1,-1);
    if(_value) {
        // painter->setBrush(QBrush(QImage(":/images/FuelSwitch.png")));
        painter->drawImage(QRect(-16, height()/4-circleSize, circleSize, circleSize),
                           QImage(":/images/FuelSwitch.png"));
    } else {
        // painter->setBrush(QBrush(QImage(":/images/FuelSwitch.png").mirrored(true, false)));
                       // LEFT/RIGHT,    UP/DOWN,      WIDTH,      HIGHT
        painter->drawImage(QRect(-16, height()/4-circleSize, circleSize, circleSize),
                           QImage(":/images/FuelSwitch.png").mirrored(true, false));
}
    // painter->drawPolygon(p);
    painter->restore();
    painter->setPen(Qt::white);
    QFont font = defaultFont;
    font.setPixelSize(height()*0.75);
    painter->setFont(font);
    painter->drawText(QRect(switchWidth,0,width()-switchWidth, height()), Qt::AlignCenter, _label);
    PanelItem::paint(painter, option, widget);
}

void Switch::storeSettings(QSettings &settings) {
    PanelItem::storeSettings(settings);

    settings.setValue("label", _label);
    settings.setValue("dat1aref", _refname);
    settings.setValue("positionValue1", _positionValue1);
    settings.setValue("positionValue2", _positionValue2);
}

void Switch::loadSettings(QSettings &settings) {
    PanelItem::loadSettings(settings);
    //setButtonId(settings.value("id", 0).toInt());
    setLabel(settings.value("label", "Switch").toString());
    setDataRef(settings.value("dataref", "1-sim/lights/landingR/switch").toString());
    setPositionValue1(settings.value("positionValue1", "0").toString());
    setPositionValue2(settings.value("positionValue2", "1").toString());
}

void Switch::createSettings(QGridLayout *layout) {
    layout->addWidget(new QLabel("Label", layout->parentWidget()));
    QLineEdit *labelEdit = new QLineEdit(_label, layout->parentWidget());
    connect(labelEdit, SIGNAL(textChanged(QString)), this, SLOT(setLabel(QString)));
    layout->addWidget(labelEdit);

    layout->addWidget(new QLabel("Dataref", layout->parentWidget()));
    QLineEdit *refEdit = new QLineEdit(_refname, layout->parentWidget());
    connect(refEdit, SIGNAL(textChanged(QString)), this, SLOT(setDataRef(QString)));
    layout->addWidget(refEdit);

    createLineEditSetting(layout, "Value #1", _positionValue1, SLOT(setPositionValue1(QString)));
    createLineEditSetting(layout, "Value #2", _positionValue2, SLOT(setPositionValue2(QString)));
}

void Switch::applySettings() {
    if(_dataref) {
        _dataref->unsubscribe();
        _dataref = 0;
    }
    if(!_refname.isEmpty())
        _dataref = _client.subscribeDataRef(_refname, 0);
}

void Switch::setLabel(QString txt) {
    _label = txt;
    update();
}

void Switch::setDataRef(QString txt) {
    if(_dataref) {
        _dataref->unsubscribe();
        _dataref = 0;
    }
    //DEBUG << "_refname: " << _refname << endl;
    _refname = txt;
    update();
}

void Switch::mousePressEvent ( QGraphicsSceneMouseEvent * event ) {
    if(isEditMode()) {
        PanelItem::mousePressEvent(event);
    }
}

void Switch::mouseReleaseEvent(QGraphicsSceneMouseEvent *event) {
    if(isEditMode()) {
        PanelItem::mouseReleaseEvent(event);
    } else if(event->pos().x() < switchWidth) {
        _value = !_value;  // kinda duplicated this ..... big dummy
        if (_switchPosition == 1) { _switchPosition--; }
        else if (_switchPosition == 0) { _switchPosition++; }
        else { _switchPosition = 0; }
        if(_dataref) {
            _dataref->setValue(_value ? "1" : "0");
            if (_switchPosition == 1) {  _dataref->setValue(_positionValue1); }
            if (_switchPosition == 0) {  _dataref->setValue(_positionValue2); }
        }
        update();
    }
}

void Switch::valueChanged(QString ref, double newValue) {
    valueChanged(ref,QString("%1").arg(newValue));
}

void Switch::valueChanged(QString ref, QString newValue) {
    Q_ASSERT(ref==_refname);
    _value = newValue != 0;
}

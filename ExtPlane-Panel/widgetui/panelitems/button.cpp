#include "button.h"

#include <QString>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include "../widgets/numberinputlineedit.h"
#include "extplaneclient.h"
#include "../util/console.h"
#include <QGraphicsSceneMouseEvent>

REGISTER_WITH_PANEL_ITEM_FACTORY(Button,"buttons/generic");

Button::Button(ExtPlanePanel *panel, ExtPlaneConnection *conn) :
        PanelItem(panel, PanelItemTypeSwitch, PanelItemShapeRectangular),
        _client(this, typeName(), conn) {
            _client.createClient();
            conn->registerClient(&_client);
            connect(&_client, SIGNAL(refChanged(QString,double)), this, SLOT(valueChanged(QString,double)));
            _value = false;
            _buttonId = 0;
            _label = "Button";
            _ref = 0;
            setSize(100,40);

            _isKey = false;
            _isHeld = false;
}

void Button::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    setupPainter(painter);

    if(_isHeld) {
        painter->setBrush(Qt::gray);  // button is held down should be GRAY
    } else {
        painter->setBrush(Qt::transparent); // black); // button is not held down should be BLACK
    }

    painter->setPen(Qt::white);     // set writting?

    painter->drawRoundedRect(0,0,width(),height(), 5, 5);
    painter->save();

    QFont font = defaultFont;
    font.setPixelSize(height()*0.75);
    painter->setFont(font);
    painter->drawText(QRect(0,0,width(), height()), Qt::AlignCenter, _label);
    PanelItem::paint(painter, option, widget);
}

void Button::storeSettings(QSettings &settings) {
    PanelItem::storeSettings(settings);

    settings.setValue("label", _label);
    settings.setValue("id", _buttonId);
    settings.setValue("iskey", _isKey);
    settings.setValue("dataref", _refname);
}

void Button::loadSettings(QSettings &settings) {
    PanelItem::loadSettings(settings);
    setButtonId(settings.value("id", 0).toInt());
    setLabel(settings.value("label", "Button").toString());
    setRef(settings.value("dataref", "").toString());
    setIsKey(settings.value("iskey", false).toBool());
}


void Button::createSettings(QGridLayout *layout) {
    layout->addWidget(new QLabel("Label", layout->parentWidget()));
    QLineEdit *labelEdit = new QLineEdit(_label, layout->parentWidget());
    connect(labelEdit, SIGNAL(textChanged(QString)), this, SLOT(setLabel(QString)));
    layout->addWidget(labelEdit);

    layout->addWidget(new QLabel("Key/Button id", layout->parentWidget()));
    NumberInputLineEdit *idEdit = new NumberInputLineEdit(layout->parentWidget());
    idEdit->setText(QString::number(_buttonId));
    layout->addWidget(idEdit);
    connect(idEdit, SIGNAL(valueChangedFloat(float)), this, SLOT(setButtonId(float)));

    layout->addWidget(new QLabel("", layout->parentWidget()));

    QCheckBox *isKeyCheckbox = new QCheckBox("Is a key (not button)", layout->parentWidget());
    isKeyCheckbox->setChecked(_isKey);
    layout->addWidget(isKeyCheckbox);
    connect(isKeyCheckbox, SIGNAL(clicked(bool)), this, SLOT(setIsKey(bool)));

    layout->addWidget(new QLabel("Dataref", layout->parentWidget()));
    QLineEdit *refEdit = new QLineEdit(_refname, layout->parentWidget());
    connect(refEdit, SIGNAL(textChanged(QString)), this, SLOT(setRef(QString)));
    layout->addWidget(refEdit);
}

void Button::applySettings() {
    if(_ref) {
        _ref->unsubscribe();
        _ref = 0;
    }
    if(!_refname.isEmpty())
        _ref = _client.subscribeDataRef(_refname, 0);
}

void Button::setButtonId(float id) {
    _buttonId = id;
}

void Button::setLabel(QString txt) {
    _label = txt;
    update();
}

void Button::setIsKey(bool is) {
    _isKey = is;
}

void Button::setRef(QString txt) {
    if(_ref) {
        _ref->unsubscribe();
        _ref = 0;
    }
    _refname = txt;
    update();
}

void Button::mousePressEvent ( QGraphicsSceneMouseEvent * event ) {
    if(isEditMode()) {
        PanelItem::mousePressEvent(event);
    } /*else {
        _isHeld = true;
        if(_isKey) {
            _client.keyPress(_buttonId);
        } else {
            _client.buttonPress(_buttonId);
            _value = !_value;
        }
        update();
    }*/
}

void Button::mouseReleaseEvent(QGraphicsSceneMouseEvent *event) {
    if(isEditMode()) {
        PanelItem::mouseReleaseEvent(event);
    } else {
        _isHeld = false;
        if(!_isKey) {
            _client.buttonRelease(_buttonId);
            _value = !_value;
            // qDebug() << "_Value Pressed: " << _value << endl;
            if(_ref) _ref->setValue(_value ? "1" : "0");
        }
        update();
    }
}

void Button::valueChanged(QString ref, double newValue) {
    DEBUG << ref << newValue;
    Q_ASSERT(ref==_refname);
    _value = newValue != 0;
    // qDebug() << "Value Changed: " << _value << endl;
}


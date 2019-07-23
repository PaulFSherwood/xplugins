#ifndef BUTTON_H
#define BUTTON_H

#include "panelitem.h"

class Button : public PanelItem {
    Q_OBJECT
public:
    Q_INVOKABLE Button(ExtPlanePanel *panel, ExtPlaneConnection *conn);
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    virtual QString typeName();
    virtual void storeSettings(QSettings &settings);
    virtual void loadSettings(QSettings &settings);
    virtual void createSettings(QGridLayout *layout);
    virtual void applySettings();
protected:
    virtual void mousePressEvent ( QGraphicsSceneMouseEvent * event );
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
signals:

public slots:
    void setButtonId(float id);
    void setLabel(QString txt);
    void setIsKey(bool is);
    void setRef(QString ref);
private slots:
    void valueChanged(QString ref, double newValue);
private:
    ExtPlaneClient _client;
    int _buttonId;
    QString _label, _refname;
    bool _isKey, _isHeld, _value;
    ClientDataRef* _ref;
    int switchWidth;
};

#endif // BUTTON_H

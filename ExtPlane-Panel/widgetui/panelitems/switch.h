#ifndef SWITCH_H
#define SWITCH_H

#include "panelitem.h"

class Switch : public PanelItem {
    Q_OBJECT
public:
    Q_INVOKABLE Switch(ExtPlanePanel *panel, ExtPlaneConnection *conn);
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
    void setLabel(QString txt);
    void setDataRef(QString ref);
    void setPositionValue1(QString val) { _positionValue1 = val; }
    void setPositionValue2(QString val) { _positionValue2 = val; }
    void setImageLocation(QString ref);
private slots:
    void valueChanged(QString ref, double newValue);
    void valueChanged(QString ref, QString newValue);
private:
    ExtPlaneClient _client;
    int _buttonId;
    int _switchPosition;
    QString _label, _refname, myImageLoc;   // added myImageLoc to save image locations
    bool _value;
    QString _positionValue1;
    QString _positionValue2;
    ClientDataRef* _dataref;
    int switchWidth;
};

#endif // SWITCH_H

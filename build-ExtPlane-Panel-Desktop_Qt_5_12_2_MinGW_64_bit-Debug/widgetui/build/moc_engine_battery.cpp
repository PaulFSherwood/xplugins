/****************************************************************************
** Meta object code from reading C++ file 'engine_battery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/panelitems/engine_battery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'engine_battery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EngineBattery_t {
    QByteArrayData data[14];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EngineBattery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EngineBattery_t qt_meta_stringdata_EngineBattery = {
    {
QT_MOC_LITERAL(0, 0, 13), // "EngineBattery"
QT_MOC_LITERAL(1, 14, 15), // "amperageChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "name"
QT_MOC_LITERAL(4, 36, 6), // "values"
QT_MOC_LITERAL(5, 43, 16), // "setBatteryNumber"
QT_MOC_LITERAL(6, 60, 3), // "val"
QT_MOC_LITERAL(7, 64, 11), // "setMaxValue"
QT_MOC_LITERAL(8, 76, 2), // "mv"
QT_MOC_LITERAL(9, 79, 11), // "setMinValue"
QT_MOC_LITERAL(10, 91, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(11, 106, 5), // "panel"
QT_MOC_LITERAL(12, 112, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(13, 132, 4) // "conn"

    },
    "EngineBattery\0amperageChanged\0\0name\0"
    "values\0setBatteryNumber\0val\0setMaxValue\0"
    "mv\0setMinValue\0ExtPlanePanel*\0panel\0"
    "ExtPlaneConnection*\0conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EngineBattery[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   53, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x0a /* Public */,
       5,    1,   39,    2, 0x0a /* Public */,
       7,    1,   42,    2, 0x0a /* Public */,
       9,    1,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    4,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::Float,    8,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 10, 0x80000000 | 12,   11,   13,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   48,    2, 0x0e /* Public */,

       0        // eod
};

void EngineBattery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { EngineBattery *_r = new EngineBattery((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EngineBattery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->amperageChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 1: _t->setBatteryNumber((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->setMaxValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setMinValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EngineBattery::staticMetaObject = { {
    &PanelItem::staticMetaObject,
    qt_meta_stringdata_EngineBattery.data,
    qt_meta_data_EngineBattery,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EngineBattery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EngineBattery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EngineBattery.stringdata0))
        return static_cast<void*>(this);
    return PanelItem::qt_metacast(_clname);
}

int EngineBattery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PanelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'variometer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ExtPlane-Panel/widgetui/panelitems/variometer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'variometer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Variometer_t {
    QByteArrayData data[21];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Variometer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Variometer_t qt_meta_stringdata_Variometer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Variometer"
QT_MOC_LITERAL(1, 11, 15), // "velocityChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "name"
QT_MOC_LITERAL(4, 33, 5), // "speed"
QT_MOC_LITERAL(5, 39, 7), // "setUnit"
QT_MOC_LITERAL(6, 47, 12), // "VelocityUnit"
QT_MOC_LITERAL(7, 60, 2), // "un"
QT_MOC_LITERAL(8, 63, 11), // "setMaxValue"
QT_MOC_LITERAL(9, 75, 2), // "mv"
QT_MOC_LITERAL(10, 78, 16), // "setIsTotalEnergy"
QT_MOC_LITERAL(11, 95, 2), // "te"
QT_MOC_LITERAL(12, 98, 8), // "tickTime"
QT_MOC_LITERAL(13, 107, 2), // "dt"
QT_MOC_LITERAL(14, 110, 5), // "total"
QT_MOC_LITERAL(15, 116, 23), // "setInterpolationEnabled"
QT_MOC_LITERAL(16, 140, 2), // "ie"
QT_MOC_LITERAL(17, 143, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(18, 158, 5), // "panel"
QT_MOC_LITERAL(19, 164, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(20, 184, 4) // "conn"

    },
    "Variometer\0velocityChanged\0\0name\0speed\0"
    "setUnit\0VelocityUnit\0un\0setMaxValue\0"
    "mv\0setIsTotalEnergy\0te\0tickTime\0dt\0"
    "total\0setInterpolationEnabled\0ie\0"
    "ExtPlanePanel*\0panel\0ExtPlaneConnection*\0"
    "conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Variometer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   71, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x0a /* Public */,
       5,    1,   49,    2, 0x0a /* Public */,
       8,    1,   52,    2, 0x0a /* Public */,
      10,    1,   55,    2, 0x0a /* Public */,
      12,    2,   58,    2, 0x0a /* Public */,
      15,    1,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   13,   14,
    QMetaType::Void, QMetaType::Bool,   16,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 17, 0x80000000 | 19,   18,   20,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   66,    2, 0x0e /* Public */,

       0        // eod
};

void Variometer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Variometer *_r = new Variometer((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Variometer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->velocityChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->setUnit((*reinterpret_cast< VelocityUnit(*)>(_a[1]))); break;
        case 2: _t->setMaxValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setIsTotalEnergy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->tickTime((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->setInterpolationEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Variometer::staticMetaObject = { {
    &NeedleInstrument::staticMetaObject,
    qt_meta_stringdata_Variometer.data,
    qt_meta_data_Variometer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Variometer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Variometer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Variometer.stringdata0))
        return static_cast<void*>(this);
    return NeedleInstrument::qt_metacast(_clname);
}

int Variometer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NeedleInstrument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

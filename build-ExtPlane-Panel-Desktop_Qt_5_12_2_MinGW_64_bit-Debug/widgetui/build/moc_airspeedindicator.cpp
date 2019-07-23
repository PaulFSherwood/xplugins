/****************************************************************************
** Meta object code from reading C++ file 'airspeedindicator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/panelitems/airspeedindicator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'airspeedindicator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AirspeedIndicator_t {
    QByteArrayData data[24];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirspeedIndicator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirspeedIndicator_t qt_meta_stringdata_AirspeedIndicator = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AirspeedIndicator"
QT_MOC_LITERAL(1, 18, 12), // "speedChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "name"
QT_MOC_LITERAL(4, 37, 5), // "speed"
QT_MOC_LITERAL(5, 43, 7), // "setUnit"
QT_MOC_LITERAL(6, 51, 12), // "VelocityUnit"
QT_MOC_LITERAL(7, 64, 2), // "un"
QT_MOC_LITERAL(8, 67, 11), // "setMaxValue"
QT_MOC_LITERAL(9, 79, 2), // "mv"
QT_MOC_LITERAL(10, 82, 6), // "setVso"
QT_MOC_LITERAL(11, 89, 5), // "setVs"
QT_MOC_LITERAL(12, 95, 6), // "setVfe"
QT_MOC_LITERAL(13, 102, 6), // "setVno"
QT_MOC_LITERAL(14, 109, 6), // "setVne"
QT_MOC_LITERAL(15, 116, 8), // "tickTime"
QT_MOC_LITERAL(16, 125, 2), // "dt"
QT_MOC_LITERAL(17, 128, 5), // "total"
QT_MOC_LITERAL(18, 134, 23), // "setInterpolationEnabled"
QT_MOC_LITERAL(19, 158, 2), // "ie"
QT_MOC_LITERAL(20, 161, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(21, 176, 5), // "panel"
QT_MOC_LITERAL(22, 182, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(23, 202, 4) // "conn"

    },
    "AirspeedIndicator\0speedChanged\0\0name\0"
    "speed\0setUnit\0VelocityUnit\0un\0setMaxValue\0"
    "mv\0setVso\0setVs\0setVfe\0setVno\0setVne\0"
    "tickTime\0dt\0total\0setInterpolationEnabled\0"
    "ie\0ExtPlanePanel*\0panel\0ExtPlaneConnection*\0"
    "conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirspeedIndicator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,  103, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x0a /* Public */,
       5,    1,   69,    2, 0x0a /* Public */,
       8,    1,   72,    2, 0x0a /* Public */,
      10,    1,   75,    2, 0x0a /* Public */,
      11,    1,   78,    2, 0x0a /* Public */,
      12,    1,   81,    2, 0x0a /* Public */,
      13,    1,   84,    2, 0x0a /* Public */,
      14,    1,   87,    2, 0x0a /* Public */,
      15,    2,   90,    2, 0x0a /* Public */,
      18,    1,   95,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   16,   17,
    QMetaType::Void, QMetaType::Bool,   19,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 20, 0x80000000 | 22,   21,   23,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   98,    2, 0x0e /* Public */,

       0        // eod
};

void AirspeedIndicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { AirspeedIndicator *_r = new AirspeedIndicator((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AirspeedIndicator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->speedChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->setUnit((*reinterpret_cast< VelocityUnit(*)>(_a[1]))); break;
        case 2: _t->setMaxValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setVso((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setVs((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setVfe((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->setVno((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->setVne((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->tickTime((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->setInterpolationEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AirspeedIndicator::staticMetaObject = { {
    &NeedleInstrument::staticMetaObject,
    qt_meta_stringdata_AirspeedIndicator.data,
    qt_meta_data_AirspeedIndicator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AirspeedIndicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirspeedIndicator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AirspeedIndicator.stringdata0))
        return static_cast<void*>(this);
    return NeedleInstrument::qt_metacast(_clname);
}

int AirspeedIndicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NeedleInstrument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

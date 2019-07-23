/****************************************************************************
** Meta object code from reading C++ file 'engine_rpm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ExtPlane-Panel/widgetui/panelitems/engine_rpm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'engine_rpm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EngineRPM_t {
    QByteArrayData data[18];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EngineRPM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EngineRPM_t qt_meta_stringdata_EngineRPM = {
    {
QT_MOC_LITERAL(0, 0, 9), // "EngineRPM"
QT_MOC_LITERAL(1, 10, 10), // "rpmChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "name"
QT_MOC_LITERAL(4, 27, 6), // "values"
QT_MOC_LITERAL(5, 34, 7), // "setUnit"
QT_MOC_LITERAL(6, 42, 12), // "VelocityUnit"
QT_MOC_LITERAL(7, 55, 2), // "un"
QT_MOC_LITERAL(8, 58, 11), // "setMaxValue"
QT_MOC_LITERAL(9, 70, 2), // "mv"
QT_MOC_LITERAL(10, 73, 14), // "setNumberScale"
QT_MOC_LITERAL(11, 88, 2), // "ns"
QT_MOC_LITERAL(12, 91, 15), // "setEngineNumber"
QT_MOC_LITERAL(13, 107, 3), // "val"
QT_MOC_LITERAL(14, 111, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(15, 126, 5), // "panel"
QT_MOC_LITERAL(16, 132, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(17, 152, 4) // "conn"

    },
    "EngineRPM\0rpmChanged\0\0name\0values\0"
    "setUnit\0VelocityUnit\0un\0setMaxValue\0"
    "mv\0setNumberScale\0ns\0setEngineNumber\0"
    "val\0ExtPlanePanel*\0panel\0ExtPlaneConnection*\0"
    "conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EngineRPM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   61, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x0a /* Public */,
       5,    1,   44,    2, 0x0a /* Public */,
       8,    1,   47,    2, 0x0a /* Public */,
      10,    1,   50,    2, 0x0a /* Public */,
      12,    1,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,   11,
    QMetaType::Void, QMetaType::Float,   13,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 14, 0x80000000 | 16,   15,   17,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   56,    2, 0x0e /* Public */,

       0        // eod
};

void EngineRPM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { EngineRPM *_r = new EngineRPM((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EngineRPM *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rpmChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 1: _t->setUnit((*reinterpret_cast< VelocityUnit(*)>(_a[1]))); break;
        case 2: _t->setMaxValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setNumberScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setEngineNumber((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EngineRPM::staticMetaObject = { {
    &NeedleInstrument::staticMetaObject,
    qt_meta_stringdata_EngineRPM.data,
    qt_meta_data_EngineRPM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EngineRPM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EngineRPM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EngineRPM.stringdata0))
        return static_cast<void*>(this);
    return NeedleInstrument::qt_metacast(_clname);
}

int EngineRPM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NeedleInstrument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

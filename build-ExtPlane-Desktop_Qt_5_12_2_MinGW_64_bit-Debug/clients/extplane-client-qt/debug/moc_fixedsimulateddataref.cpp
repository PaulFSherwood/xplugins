/****************************************************************************
** Meta object code from reading C++ file 'fixedsimulateddataref.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ExtPlane/clients/extplane-client-qt/simulateddatarefs/fixedsimulateddataref.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fixedsimulateddataref.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FixedSimulatedDataRef_t {
    QByteArrayData data[6];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FixedSimulatedDataRef_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FixedSimulatedDataRef_t qt_meta_stringdata_FixedSimulatedDataRef = {
    {
QT_MOC_LITERAL(0, 0, 21), // "FixedSimulatedDataRef"
QT_MOC_LITERAL(1, 22, 8), // "tickTime"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 2), // "dt"
QT_MOC_LITERAL(4, 35, 5), // "total"
QT_MOC_LITERAL(5, 41, 13) // "changeTimeout"

    },
    "FixedSimulatedDataRef\0tickTime\0\0dt\0"
    "total\0changeTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FixedSimulatedDataRef[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       5,    0,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Int,    3,    4,
    QMetaType::Void,

       0        // eod
};

void FixedSimulatedDataRef::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FixedSimulatedDataRef *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tickTime((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->changeTimeout(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FixedSimulatedDataRef::staticMetaObject = { {
    &SimulatedDataRef::staticMetaObject,
    qt_meta_stringdata_FixedSimulatedDataRef.data,
    qt_meta_data_FixedSimulatedDataRef,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FixedSimulatedDataRef::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FixedSimulatedDataRef::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FixedSimulatedDataRef.stringdata0))
        return static_cast<void*>(this);
    return SimulatedDataRef::qt_metacast(_clname);
}

int FixedSimulatedDataRef::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimulatedDataRef::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_NavDataFixedSimulatedDataRef_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NavDataFixedSimulatedDataRef_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NavDataFixedSimulatedDataRef_t qt_meta_stringdata_NavDataFixedSimulatedDataRef = {
    {
QT_MOC_LITERAL(0, 0, 28) // "NavDataFixedSimulatedDataRef"

    },
    "NavDataFixedSimulatedDataRef"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavDataFixedSimulatedDataRef[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void NavDataFixedSimulatedDataRef::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject NavDataFixedSimulatedDataRef::staticMetaObject = { {
    &FixedSimulatedDataRef::staticMetaObject,
    qt_meta_stringdata_NavDataFixedSimulatedDataRef.data,
    qt_meta_data_NavDataFixedSimulatedDataRef,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NavDataFixedSimulatedDataRef::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavDataFixedSimulatedDataRef::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NavDataFixedSimulatedDataRef.stringdata0))
        return static_cast<void*>(this);
    return FixedSimulatedDataRef::qt_metacast(_clname);
}

int NavDataFixedSimulatedDataRef::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FixedSimulatedDataRef::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'hardwarebinding.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/hardware/hardwarebinding.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hardwarebinding.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HardwareBinding_t {
    QByteArrayData data[20];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HardwareBinding_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HardwareBinding_t qt_meta_stringdata_HardwareBinding = {
    {
QT_MOC_LITERAL(0, 0, 15), // "HardwareBinding"
QT_MOC_LITERAL(1, 16, 11), // "outputValue"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "value"
QT_MOC_LITERAL(4, 35, 6), // "output"
QT_MOC_LITERAL(5, 42, 5), // "speed"
QT_MOC_LITERAL(6, 48, 13), // "deviceChanged"
QT_MOC_LITERAL(7, 62, 16), // "HardwareBinding*"
QT_MOC_LITERAL(8, 79, 7), // "binding"
QT_MOC_LITERAL(9, 87, 6), // "device"
QT_MOC_LITERAL(10, 94, 8), // "tickTime"
QT_MOC_LITERAL(11, 103, 2), // "dt"
QT_MOC_LITERAL(12, 106, 5), // "total"
QT_MOC_LITERAL(13, 112, 15), // "refValueChanged"
QT_MOC_LITERAL(14, 128, 4), // "name"
QT_MOC_LITERAL(15, 133, 8), // "refValue"
QT_MOC_LITERAL(16, 142, 10), // "refChanged"
QT_MOC_LITERAL(17, 153, 14), // "ClientDataRef*"
QT_MOC_LITERAL(18, 168, 3), // "ref"
QT_MOC_LITERAL(19, 172, 10) // "refDeleted"

    },
    "HardwareBinding\0outputValue\0\0value\0"
    "output\0speed\0deviceChanged\0HardwareBinding*\0"
    "binding\0device\0tickTime\0dt\0total\0"
    "refValueChanged\0name\0refValue\0refChanged\0"
    "ClientDataRef*\0ref\0refDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HardwareBinding[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       6,    2,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   56,    2, 0x0a /* Public */,
      13,    2,   61,    2, 0x0a /* Public */,
      16,    1,   66,    2, 0x08 /* Private */,
      19,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,   14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,

       0        // eod
};

void HardwareBinding::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HardwareBinding *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->outputValue((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->deviceChanged((*reinterpret_cast< HardwareBinding*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->tickTime((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->refValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->refChanged((*reinterpret_cast< ClientDataRef*(*)>(_a[1]))); break;
        case 5: _t->refDeleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HardwareBinding* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HardwareBinding::*)(double , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareBinding::outputValue)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HardwareBinding::*)(HardwareBinding * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareBinding::deviceChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HardwareBinding::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HardwareBinding.data,
    qt_meta_data_HardwareBinding,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HardwareBinding::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HardwareBinding::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HardwareBinding.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HardwareBinding::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void HardwareBinding::outputValue(double _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HardwareBinding::deviceChanged(HardwareBinding * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

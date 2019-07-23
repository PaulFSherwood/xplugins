/****************************************************************************
** Meta object code from reading C++ file 'chromaoutputdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ExtPlane-Panel/hardware/chromaoutputdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chromaoutputdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChromaOutputDevice_t {
    QByteArrayData data[7];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChromaOutputDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChromaOutputDevice_t qt_meta_stringdata_ChromaOutputDevice = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ChromaOutputDevice"
QT_MOC_LITERAL(1, 19, 11), // "outputValue"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "value"
QT_MOC_LITERAL(4, 38, 6), // "output"
QT_MOC_LITERAL(5, 45, 5), // "speed"
QT_MOC_LITERAL(6, 51, 14) // "startNextServo"

    },
    "ChromaOutputDevice\0outputValue\0\0value\0"
    "output\0speed\0startNextServo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChromaOutputDevice[] = {

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
       1,    3,   24,    2, 0x0a /* Public */,
       6,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void,

       0        // eod
};

void ChromaOutputDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChromaOutputDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->outputValue((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->startNextServo(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChromaOutputDevice::staticMetaObject = { {
    &OutputDevice::staticMetaObject,
    qt_meta_stringdata_ChromaOutputDevice.data,
    qt_meta_data_ChromaOutputDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChromaOutputDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChromaOutputDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChromaOutputDevice.stringdata0))
        return static_cast<void*>(this);
    return OutputDevice::qt_metacast(_clname);
}

int ChromaOutputDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OutputDevice::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

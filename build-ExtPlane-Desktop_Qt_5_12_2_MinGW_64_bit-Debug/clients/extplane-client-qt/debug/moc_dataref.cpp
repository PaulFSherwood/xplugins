/****************************************************************************
** Meta object code from reading C++ file 'dataref.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ExtPlane/clients/extplane-client-qt/dataref.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataref.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataRef_t {
    QByteArrayData data[25];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataRef_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataRef_t qt_meta_stringdata_DataRef = {
    {
QT_MOC_LITERAL(0, 0, 7), // "DataRef"
QT_MOC_LITERAL(1, 8, 7), // "changed"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 14), // "ClientDataRef*"
QT_MOC_LITERAL(4, 32, 3), // "ref"
QT_MOC_LITERAL(5, 36, 8), // "valueSet"
QT_MOC_LITERAL(6, 45, 12), // "unsubscribed"
QT_MOC_LITERAL(7, 58, 11), // "nameChanged"
QT_MOC_LITERAL(8, 70, 4), // "name"
QT_MOC_LITERAL(9, 75, 15), // "accuracyChanged"
QT_MOC_LITERAL(10, 91, 8), // "accuracy"
QT_MOC_LITERAL(11, 100, 13), // "clientChanged"
QT_MOC_LITERAL(12, 114, 15), // "ExtPlaneClient*"
QT_MOC_LITERAL(13, 130, 6), // "client"
QT_MOC_LITERAL(14, 137, 7), // "setName"
QT_MOC_LITERAL(15, 145, 8), // "QString&"
QT_MOC_LITERAL(16, 154, 11), // "setAccuracy"
QT_MOC_LITERAL(17, 166, 8), // "setValue"
QT_MOC_LITERAL(18, 175, 9), // "_newValue"
QT_MOC_LITERAL(19, 185, 5), // "index"
QT_MOC_LITERAL(20, 191, 9), // "setValues"
QT_MOC_LITERAL(21, 201, 6), // "values"
QT_MOC_LITERAL(22, 208, 9), // "setClient"
QT_MOC_LITERAL(23, 218, 18), // "setDataRefProvider"
QT_MOC_LITERAL(24, 237, 5) // "value"

    },
    "DataRef\0changed\0\0ClientDataRef*\0ref\0"
    "valueSet\0unsubscribed\0nameChanged\0"
    "name\0accuracyChanged\0accuracy\0"
    "clientChanged\0ExtPlaneClient*\0client\0"
    "setName\0QString&\0setAccuracy\0setValue\0"
    "_newValue\0index\0setValues\0values\0"
    "setClient\0setDataRefProvider\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataRef[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       5,  118, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,
       7,    1,   88,    2, 0x06 /* Public */,
       9,    1,   91,    2, 0x06 /* Public */,
      11,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   97,    2, 0x0a /* Public */,
      16,    1,  100,    2, 0x0a /* Public */,
      17,    2,  103,    2, 0x0a /* Public */,
      17,    1,  108,    2, 0x2a /* Public | MethodCloned */,
      20,    1,  111,    2, 0x0a /* Public */,
      22,    1,  114,    2, 0x0a /* Public */,
      23,    0,  117,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   18,   19,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QStringList,   21,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495103,
      24, QMetaType::QString, 0x00495103,
      21, QMetaType::QStringList, 0x00495103,
      10, QMetaType::Double, 0x00495103,
      13, 0x80000000 | 12, 0x0049510b,

 // properties: notify_signal_id
       3,
       0,
       0,
       4,
       5,

       0        // eod
};

void DataRef::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataRef *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< ClientDataRef*(*)>(_a[1]))); break;
        case 1: _t->valueSet((*reinterpret_cast< ClientDataRef*(*)>(_a[1]))); break;
        case 2: _t->unsubscribed((*reinterpret_cast< ClientDataRef*(*)>(_a[1]))); break;
        case 3: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->accuracyChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->clientChanged((*reinterpret_cast< ExtPlaneClient*(*)>(_a[1]))); break;
        case 6: _t->setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setAccuracy((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->setValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->setValues((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 11: _t->setClient((*reinterpret_cast< ExtPlaneClient*(*)>(_a[1]))); break;
        case 12: _t->setDataRefProvider(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataRef::*)(ClientDataRef * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataRef::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataRef::*)(ClientDataRef * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataRef::valueSet)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataRef::*)(ClientDataRef * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataRef::unsubscribed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataRef::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataRef::nameChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataRef::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataRef::accuracyChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DataRef::*)(ExtPlaneClient * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataRef::clientChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DataRef *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->value(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->values(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->accuracy(); break;
        case 4: *reinterpret_cast< ExtPlaneClient**>(_v) = _t->client(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DataRef *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setValue(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setValues(*reinterpret_cast< QStringList*>(_v)); break;
        case 3: _t->setAccuracy(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setClient(*reinterpret_cast< ExtPlaneClient**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DataRef::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DataRef.data,
    qt_meta_data_DataRef,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataRef::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataRef::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataRef.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataRef::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DataRef::changed(ClientDataRef * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataRef::valueSet(ClientDataRef * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataRef::unsubscribed(ClientDataRef * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataRef::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DataRef::accuracyChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DataRef::clientChanged(ExtPlaneClient * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

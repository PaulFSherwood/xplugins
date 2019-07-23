/****************************************************************************
** Meta object code from reading C++ file 'clientdataref.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane/clients/extplane-client-qt/clientdataref.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientdataref.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientDataRef_t {
    QByteArrayData data[24];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientDataRef_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientDataRef_t qt_meta_stringdata_ClientDataRef = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ClientDataRef"
QT_MOC_LITERAL(1, 14, 7), // "changed"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 14), // "ClientDataRef*"
QT_MOC_LITERAL(4, 38, 3), // "ref"
QT_MOC_LITERAL(5, 42, 8), // "valueSet"
QT_MOC_LITERAL(6, 51, 12), // "unsubscribed"
QT_MOC_LITERAL(7, 64, 11), // "nameChanged"
QT_MOC_LITERAL(8, 76, 4), // "name"
QT_MOC_LITERAL(9, 81, 15), // "accuracyChanged"
QT_MOC_LITERAL(10, 97, 8), // "accuracy"
QT_MOC_LITERAL(11, 106, 13), // "clientChanged"
QT_MOC_LITERAL(12, 120, 15), // "ExtPlaneClient*"
QT_MOC_LITERAL(13, 136, 6), // "client"
QT_MOC_LITERAL(14, 143, 7), // "setName"
QT_MOC_LITERAL(15, 151, 8), // "QString&"
QT_MOC_LITERAL(16, 160, 11), // "setAccuracy"
QT_MOC_LITERAL(17, 172, 8), // "setValue"
QT_MOC_LITERAL(18, 181, 9), // "_newValue"
QT_MOC_LITERAL(19, 191, 5), // "index"
QT_MOC_LITERAL(20, 197, 9), // "setValues"
QT_MOC_LITERAL(21, 207, 6), // "values"
QT_MOC_LITERAL(22, 214, 9), // "setClient"
QT_MOC_LITERAL(23, 224, 5) // "value"

    },
    "ClientDataRef\0changed\0\0ClientDataRef*\0"
    "ref\0valueSet\0unsubscribed\0nameChanged\0"
    "name\0accuracyChanged\0accuracy\0"
    "clientChanged\0ExtPlaneClient*\0client\0"
    "setName\0QString&\0setAccuracy\0setValue\0"
    "_newValue\0index\0setValues\0values\0"
    "setClient\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientDataRef[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       4,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       7,    1,   83,    2, 0x06 /* Public */,
       9,    1,   86,    2, 0x06 /* Public */,
      11,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   92,    2, 0x0a /* Public */,
      16,    1,   95,    2, 0x0a /* Public */,
      17,    2,   98,    2, 0x0a /* Public */,
      17,    1,  103,    2, 0x2a /* Public | MethodCloned */,
      20,    1,  106,    2, 0x0a /* Public */,
      22,    1,  109,    2, 0x0a /* Public */,

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

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495103,
      23, QMetaType::QString, 0x00495103,
      21, QMetaType::QStringList, 0x00495103,
      10, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       3,
       0,
       0,
       4,

       0        // eod
};

void ClientDataRef::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientDataRef *>(_o);
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
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ClientDataRef* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ClientDataRef* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ClientDataRef* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientDataRef::*)(ClientDataRef * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientDataRef::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientDataRef::*)(ClientDataRef * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientDataRef::valueSet)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientDataRef::*)(ClientDataRef * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientDataRef::unsubscribed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientDataRef::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientDataRef::nameChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ClientDataRef::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientDataRef::accuracyChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ClientDataRef::*)(ExtPlaneClient * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientDataRef::clientChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ClientDataRef *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->value(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->values(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->accuracy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ClientDataRef *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setValue(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setValues(*reinterpret_cast< QStringList*>(_v)); break;
        case 3: _t->setAccuracy(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ClientDataRef::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ClientDataRef.data,
    qt_meta_data_ClientDataRef,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientDataRef::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientDataRef::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientDataRef.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientDataRef::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ClientDataRef::changed(ClientDataRef * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientDataRef::valueSet(ClientDataRef * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientDataRef::unsubscribed(ClientDataRef * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClientDataRef::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ClientDataRef::accuracyChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ClientDataRef::clientChanged(ExtPlaneClient * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

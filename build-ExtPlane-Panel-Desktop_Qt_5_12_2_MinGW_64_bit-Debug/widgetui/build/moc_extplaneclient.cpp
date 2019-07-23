/****************************************************************************
** Meta object code from reading C++ file 'extplaneclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane/clients/extplane-client-qt/extplaneclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extplaneclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExtPlaneClient_t {
    QByteArrayData data[28];
    char stringdata0[368];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtPlaneClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtPlaneClient_t qt_meta_stringdata_ExtPlaneClient = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ExtPlaneClient"
QT_MOC_LITERAL(1, 15, 10), // "refChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "name"
QT_MOC_LITERAL(4, 32, 5), // "value"
QT_MOC_LITERAL(5, 38, 6), // "values"
QT_MOC_LITERAL(6, 45, 22), // "datarefProviderChanged"
QT_MOC_LITERAL(7, 68, 22), // "ClientDataRefProvider*"
QT_MOC_LITERAL(8, 91, 15), // "datarefProvider"
QT_MOC_LITERAL(9, 107, 16), // "simulatedChanged"
QT_MOC_LITERAL(10, 124, 9), // "simulated"
QT_MOC_LITERAL(11, 134, 24), // "connectionMessageChanged"
QT_MOC_LITERAL(12, 159, 17), // "connectionMessage"
QT_MOC_LITERAL(13, 177, 17), // "setUpdateInterval"
QT_MOC_LITERAL(14, 195, 11), // "newInterval"
QT_MOC_LITERAL(15, 207, 12), // "setSimulated"
QT_MOC_LITERAL(16, 220, 10), // "cdrChanged"
QT_MOC_LITERAL(17, 231, 14), // "ClientDataRef*"
QT_MOC_LITERAL(18, 246, 3), // "ref"
QT_MOC_LITERAL(19, 250, 8), // "valueSet"
QT_MOC_LITERAL(20, 259, 12), // "unsubscribed"
QT_MOC_LITERAL(21, 272, 12), // "refDestroyed"
QT_MOC_LITERAL(22, 285, 5), // "refqo"
QT_MOC_LITERAL(23, 291, 20), // "setConnectionMessage"
QT_MOC_LITERAL(24, 312, 3), // "msg"
QT_MOC_LITERAL(25, 316, 12), // "createClient"
QT_MOC_LITERAL(26, 329, 18), // "extplaneConnection"
QT_MOC_LITERAL(27, 348, 19) // "ExtPlaneConnection*"

    },
    "ExtPlaneClient\0refChanged\0\0name\0value\0"
    "values\0datarefProviderChanged\0"
    "ClientDataRefProvider*\0datarefProvider\0"
    "simulatedChanged\0simulated\0"
    "connectionMessageChanged\0connectionMessage\0"
    "setUpdateInterval\0newInterval\0"
    "setSimulated\0cdrChanged\0ClientDataRef*\0"
    "ref\0valueSet\0unsubscribed\0refDestroyed\0"
    "refqo\0setConnectionMessage\0msg\0"
    "createClient\0extplaneConnection\0"
    "ExtPlaneConnection*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtPlaneClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       4,  130, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,
       1,    2,   89,    2, 0x06 /* Public */,
       1,    2,   94,    2, 0x06 /* Public */,
       6,    1,   99,    2, 0x06 /* Public */,
       9,    1,  102,    2, 0x06 /* Public */,
      11,    1,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  108,    2, 0x0a /* Public */,
      15,    1,  111,    2, 0x0a /* Public */,
      16,    1,  114,    2, 0x08 /* Private */,
      19,    1,  117,    2, 0x08 /* Private */,
      20,    1,  120,    2, 0x08 /* Private */,
      21,    1,  123,    2, 0x08 /* Private */,
      23,    1,  126,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      25,    0,  129,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QString,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::QObjectStar,   22,
    QMetaType::Void, QMetaType::QString,   24,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 7, 0x00495009,
      26, 0x80000000 | 27, 0x00095409,
      10, QMetaType::Bool, 0x00495103,
      12, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       3,
       0,
       4,
       5,

       0        // eod
};

void ExtPlaneClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExtPlaneClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->refChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->refChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 3: _t->datarefProviderChanged((*reinterpret_cast< ClientDataRefProvider*(*)>(_a[1]))); break;
        case 4: _t->simulatedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->connectionMessageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setUpdateInterval((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setSimulated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->cdrChanged((*reinterpret_cast< ClientDataRef*(*)>(_a[1]))); break;
        case 9: _t->valueSet((*reinterpret_cast< ClientDataRef*(*)>(_a[1]))); break;
        case 10: _t->unsubscribed((*reinterpret_cast< ClientDataRef*(*)>(_a[1]))); break;
        case 11: _t->refDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 12: _t->setConnectionMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->createClient(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ClientDataRef* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ClientDataRef* >(); break;
            }
            break;
        case 10:
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
            using _t = void (ExtPlaneClient::*)(QString , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtPlaneClient::refChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ExtPlaneClient::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtPlaneClient::refChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ExtPlaneClient::*)(QString , QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtPlaneClient::refChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ExtPlaneClient::*)(ClientDataRefProvider * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtPlaneClient::datarefProviderChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ExtPlaneClient::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtPlaneClient::simulatedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ExtPlaneClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtPlaneClient::connectionMessageChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ExtPlaneConnection* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ExtPlaneClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ClientDataRefProvider**>(_v) = _t->datarefProvider(); break;
        case 1: *reinterpret_cast< ExtPlaneConnection**>(_v) = _t->extplaneConnection(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isSimulated(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->connectionMessage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ExtPlaneClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setSimulated(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ExtPlaneClient::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ExtPlaneClient.data,
    qt_meta_data_ExtPlaneClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExtPlaneClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtPlaneClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExtPlaneClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ExtPlaneClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
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
void ExtPlaneClient::refChanged(QString _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ExtPlaneClient::refChanged(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ExtPlaneClient::refChanged(QString _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ExtPlaneClient::datarefProviderChanged(ClientDataRefProvider * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ExtPlaneClient::simulatedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ExtPlaneClient::connectionMessageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

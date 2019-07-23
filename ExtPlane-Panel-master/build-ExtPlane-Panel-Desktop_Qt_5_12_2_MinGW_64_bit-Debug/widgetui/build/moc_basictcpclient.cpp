/****************************************************************************
** Meta object code from reading C++ file 'basictcpclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ExtPlane/util/basictcpclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'basictcpclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BasicTcpClient_t {
    QByteArrayData data[29];
    char stringdata0[372];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BasicTcpClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BasicTcpClient_t qt_meta_stringdata_BasicTcpClient = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BasicTcpClient"
QT_MOC_LITERAL(1, 15, 12), // "receivedLine"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "QString&"
QT_MOC_LITERAL(4, 38, 4), // "line"
QT_MOC_LITERAL(5, 43, 17), // "connectionMessage"
QT_MOC_LITERAL(6, 61, 4), // "text"
QT_MOC_LITERAL(7, 66, 19), // "networkErrorChanged"
QT_MOC_LITERAL(8, 86, 11), // "errorString"
QT_MOC_LITERAL(9, 98, 17), // "lineEndingChanged"
QT_MOC_LITERAL(10, 116, 10), // "lineEnding"
QT_MOC_LITERAL(11, 127, 17), // "connectionChanged"
QT_MOC_LITERAL(12, 145, 16), // "connectedChanged"
QT_MOC_LITERAL(13, 162, 9), // "connected"
QT_MOC_LITERAL(14, 172, 13), // "setLineEnding"
QT_MOC_LITERAL(15, 186, 11), // "setHostName"
QT_MOC_LITERAL(16, 198, 8), // "hostName"
QT_MOC_LITERAL(17, 207, 7), // "setPort"
QT_MOC_LITERAL(18, 215, 4), // "port"
QT_MOC_LITERAL(19, 220, 11), // "socketError"
QT_MOC_LITERAL(20, 232, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(21, 261, 3), // "err"
QT_MOC_LITERAL(22, 265, 10), // "readClient"
QT_MOC_LITERAL(23, 276, 12), // "tryReconnect"
QT_MOC_LITERAL(24, 289, 18), // "socketStateChanged"
QT_MOC_LITERAL(25, 308, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(26, 337, 5), // "state"
QT_MOC_LITERAL(27, 343, 15), // "startConnection"
QT_MOC_LITERAL(28, 359, 12) // "networkError"

    },
    "BasicTcpClient\0receivedLine\0\0QString&\0"
    "line\0connectionMessage\0text\0"
    "networkErrorChanged\0errorString\0"
    "lineEndingChanged\0lineEnding\0"
    "connectionChanged\0connectedChanged\0"
    "connected\0setLineEnding\0setHostName\0"
    "hostName\0setPort\0port\0socketError\0"
    "QAbstractSocket::SocketError\0err\0"
    "readClient\0tryReconnect\0socketStateChanged\0"
    "QAbstractSocket::SocketState\0state\0"
    "startConnection\0networkError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BasicTcpClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       5,  118, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       5,    1,   87,    2, 0x06 /* Public */,
       7,    1,   90,    2, 0x06 /* Public */,
       9,    1,   93,    2, 0x06 /* Public */,
      11,    0,   96,    2, 0x06 /* Public */,
      12,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,  100,    2, 0x0a /* Public */,
      15,    1,  103,    2, 0x0a /* Public */,
      17,    1,  106,    2, 0x0a /* Public */,
      19,    1,  109,    2, 0x08 /* Private */,
      22,    0,  112,    2, 0x08 /* Private */,
      23,    0,  113,    2, 0x08 /* Private */,
      24,    1,  114,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      27,    0,  117,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495103,
      16, QMetaType::QString, 0x00495103,
      18, QMetaType::Int, 0x00495103,
      13, QMetaType::Bool, 0x00495001,
      28, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       3,
       4,
       4,
       5,
       2,

       0        // eod
};

void BasicTcpClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BasicTcpClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->connectionMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->networkErrorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->lineEndingChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->connectionChanged(); break;
        case 5: _t->connectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setLineEnding((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setHostName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 10: _t->readClient(); break;
        case 11: _t->tryReconnect(); break;
        case 12: _t->socketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 13: _t->startConnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BasicTcpClient::*)(QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BasicTcpClient::receivedLine)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BasicTcpClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BasicTcpClient::connectionMessage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BasicTcpClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BasicTcpClient::networkErrorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BasicTcpClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BasicTcpClient::lineEndingChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BasicTcpClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BasicTcpClient::connectionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BasicTcpClient::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BasicTcpClient::connectedChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BasicTcpClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->lineEnding(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->hostName(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->port(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->connected(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->networkError(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BasicTcpClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLineEnding(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setHostName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPort(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject BasicTcpClient::staticMetaObject = { {
    &QTcpSocket::staticMetaObject,
    qt_meta_stringdata_BasicTcpClient.data,
    qt_meta_data_BasicTcpClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BasicTcpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BasicTcpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BasicTcpClient.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int BasicTcpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
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
void BasicTcpClient::receivedLine(QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BasicTcpClient::connectionMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BasicTcpClient::networkErrorChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BasicTcpClient::lineEndingChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BasicTcpClient::connectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void BasicTcpClient::connectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

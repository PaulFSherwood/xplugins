/****************************************************************************
** Meta object code from reading C++ file 'extplaneconnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane/clients/extplane-client-qt/extplaneconnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extplaneconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExtPlaneConnection_t {
    QByteArrayData data[31];
    char stringdata0[359];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtPlaneConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtPlaneConnection_t qt_meta_stringdata_ExtPlaneConnection = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ExtPlaneConnection"
QT_MOC_LITERAL(1, 19, 16), // "subscribeDataRef"
QT_MOC_LITERAL(2, 36, 14), // "ClientDataRef*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 4), // "name"
QT_MOC_LITERAL(5, 57, 8), // "accuracy"
QT_MOC_LITERAL(6, 66, 18), // "unsubscribeDataRef"
QT_MOC_LITERAL(7, 85, 3), // "ref"
QT_MOC_LITERAL(8, 89, 8), // "keyPress"
QT_MOC_LITERAL(9, 98, 2), // "id"
QT_MOC_LITERAL(10, 101, 11), // "buttonPress"
QT_MOC_LITERAL(11, 113, 13), // "buttonRelease"
QT_MOC_LITERAL(12, 127, 11), // "commandOnce"
QT_MOC_LITERAL(13, 139, 12), // "commandBegin"
QT_MOC_LITERAL(14, 152, 10), // "commandEnd"
QT_MOC_LITERAL(15, 163, 8), // "setValue"
QT_MOC_LITERAL(16, 172, 5), // "value"
QT_MOC_LITERAL(17, 178, 9), // "setValues"
QT_MOC_LITERAL(18, 188, 6), // "values"
QT_MOC_LITERAL(19, 195, 17), // "setUpdateInterval"
QT_MOC_LITERAL(20, 213, 11), // "newInterval"
QT_MOC_LITERAL(21, 225, 16), // "receivedLineSlot"
QT_MOC_LITERAL(22, 242, 8), // "QString&"
QT_MOC_LITERAL(23, 251, 4), // "line"
QT_MOC_LITERAL(24, 256, 15), // "startConnection"
QT_MOC_LITERAL(25, 272, 14), // "stopConnection"
QT_MOC_LITERAL(26, 287, 16), // "connectedChanged"
QT_MOC_LITERAL(27, 304, 9), // "connected"
QT_MOC_LITERAL(28, 314, 11), // "socketError"
QT_MOC_LITERAL(29, 326, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(30, 355, 3) // "err"

    },
    "ExtPlaneConnection\0subscribeDataRef\0"
    "ClientDataRef*\0\0name\0accuracy\0"
    "unsubscribeDataRef\0ref\0keyPress\0id\0"
    "buttonPress\0buttonRelease\0commandOnce\0"
    "commandBegin\0commandEnd\0setValue\0value\0"
    "setValues\0values\0setUpdateInterval\0"
    "newInterval\0receivedLineSlot\0QString&\0"
    "line\0startConnection\0stopConnection\0"
    "connectedChanged\0connected\0socketError\0"
    "QAbstractSocket::SocketError\0err"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtPlaneConnection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  104,    3, 0x0a /* Public */,
       1,    1,  109,    3, 0x2a /* Public | MethodCloned */,
       6,    1,  112,    3, 0x0a /* Public */,
       8,    1,  115,    3, 0x0a /* Public */,
      10,    1,  118,    3, 0x0a /* Public */,
      11,    1,  121,    3, 0x0a /* Public */,
      12,    1,  124,    3, 0x0a /* Public */,
      13,    1,  127,    3, 0x0a /* Public */,
      14,    1,  130,    3, 0x0a /* Public */,
      15,    2,  133,    3, 0x0a /* Public */,
      17,    2,  138,    3, 0x0a /* Public */,
      15,    1,  143,    3, 0x0a /* Public */,
      19,    1,  146,    3, 0x0a /* Public */,
      21,    1,  149,    3, 0x0a /* Public */,
      24,    0,  152,    3, 0x0a /* Public */,
      25,    0,  153,    3, 0x0a /* Public */,
      26,    1,  154,    3, 0x08 /* Private */,
      28,    1,  157,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString, QMetaType::Double,    4,    5,
    0x80000000 | 2, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    4,   18,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, 0x80000000 | 29,   30,

       0        // eod
};

void ExtPlaneConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExtPlaneConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { ClientDataRef* _r = _t->subscribeDataRef((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ClientDataRef**>(_a[0]) = std::move(_r); }  break;
        case 1: { ClientDataRef* _r = _t->subscribeDataRef((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ClientDataRef**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->unsubscribeDataRef((*reinterpret_cast< ClientDataRef*(*)>(_a[1]))); break;
        case 3: _t->keyPress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->buttonPress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->buttonRelease((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->commandOnce((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->commandBegin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->commandEnd((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setValue((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->setValues((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 11: _t->setValue((*reinterpret_cast< ClientDataRef*(*)>(_a[1]))); break;
        case 12: _t->setUpdateInterval((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->receivedLineSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->startConnection(); break;
        case 15: _t->stopConnection(); break;
        case 16: _t->connectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ClientDataRef* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ClientDataRef* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ExtPlaneConnection::staticMetaObject = { {
    &BasicTcpClient::staticMetaObject,
    qt_meta_stringdata_ExtPlaneConnection.data,
    qt_meta_data_ExtPlaneConnection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExtPlaneConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtPlaneConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExtPlaneConnection.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ClientDataRefProvider"))
        return static_cast< ClientDataRefProvider*>(this);
    if (!strcmp(_clname, "org.vranki.extplane.ClientDataRefProvider"))
        return static_cast< ClientDataRefProvider*>(this);
    return BasicTcpClient::qt_metacast(_clname);
}

int ExtPlaneConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasicTcpClient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

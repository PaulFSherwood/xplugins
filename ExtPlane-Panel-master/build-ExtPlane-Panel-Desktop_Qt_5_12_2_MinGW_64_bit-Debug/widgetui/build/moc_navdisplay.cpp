/****************************************************************************
** Meta object code from reading C++ file 'navdisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ExtPlane-Panel/widgetui/panelitems/navdisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navdisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NavDisplay_t {
    QByteArrayData data[15];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NavDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NavDisplay_t qt_meta_stringdata_NavDisplay = {
    {
QT_MOC_LITERAL(0, 0, 10), // "NavDisplay"
QT_MOC_LITERAL(1, 11, 10), // "refChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "name"
QT_MOC_LITERAL(4, 28, 5), // "value"
QT_MOC_LITERAL(5, 34, 6), // "values"
QT_MOC_LITERAL(6, 41, 15), // "setDisplayRange"
QT_MOC_LITERAL(7, 57, 3), // "val"
QT_MOC_LITERAL(8, 61, 17), // "setDisplayHeading"
QT_MOC_LITERAL(9, 79, 12), // "setAutoRange"
QT_MOC_LITERAL(10, 92, 13), // "setDataSource"
QT_MOC_LITERAL(11, 106, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(12, 121, 5), // "panel"
QT_MOC_LITERAL(13, 127, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(14, 147, 4) // "conn"

    },
    "NavDisplay\0refChanged\0\0name\0value\0"
    "values\0setDisplayRange\0val\0setDisplayHeading\0"
    "setAutoRange\0setDataSource\0ExtPlanePanel*\0"
    "panel\0ExtPlaneConnection*\0conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   81, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x0a /* Public */,
       1,    2,   54,    2, 0x0a /* Public */,
       1,    2,   59,    2, 0x0a /* Public */,
       6,    1,   64,    2, 0x0a /* Public */,
       8,    1,   67,    2, 0x0a /* Public */,
       9,    1,   70,    2, 0x0a /* Public */,
      10,    1,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    7,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 11, 0x80000000 | 13,   12,   14,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   76,    2, 0x0e /* Public */,

       0        // eod
};

void NavDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { NavDisplay *_r = new NavDisplay((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->refChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 2: _t->refChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->setDisplayRange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setDisplayHeading((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setAutoRange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setDataSource((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NavDisplay::staticMetaObject = { {
    &DisplayInstrument::staticMetaObject,
    qt_meta_stringdata_NavDisplay.data,
    qt_meta_data_NavDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NavDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NavDisplay.stringdata0))
        return static_cast<void*>(this);
    return DisplayInstrument::qt_metacast(_clname);
}

int NavDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DisplayInstrument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_NavAid_t {
    QByteArrayData data[4];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NavAid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NavAid_t qt_meta_stringdata_NavAid = {
    {
QT_MOC_LITERAL(0, 0, 6), // "NavAid"
QT_MOC_LITERAL(1, 7, 0), // ""
QT_MOC_LITERAL(2, 8, 8), // "dataLine"
QT_MOC_LITERAL(3, 17, 6) // "parent"

    },
    "NavAid\0\0dataLine\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavAid[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   22, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, QMetaType::QString, QMetaType::QObjectStar,    2,    3,
    0x80000000 | 1, QMetaType::QString,    2,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   14,    1, 0x0e /* Public */,
       0,    1,   19,    1, 0x2e /* Public | MethodCloned */,

       0        // eod
};

void NavAid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { NavAid *_r = new NavAid((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { NavAid *_r = new NavAid((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject NavAid::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_NavAid.data,
    qt_meta_data_NavAid,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NavAid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavAid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NavAid.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NavAid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

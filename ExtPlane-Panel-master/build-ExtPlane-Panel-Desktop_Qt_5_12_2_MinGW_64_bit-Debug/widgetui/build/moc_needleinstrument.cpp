/****************************************************************************
** Meta object code from reading C++ file 'needleinstrument.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ExtPlane-Panel/widgetui/panelitems/needleinstrument.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'needleinstrument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Arc_t {
    QByteArrayData data[8];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Arc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Arc_t qt_meta_stringdata_Arc = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Arc"
QT_MOC_LITERAL(1, 4, 6), // "setUse"
QT_MOC_LITERAL(2, 11, 0), // ""
QT_MOC_LITERAL(3, 12, 6), // "setMin"
QT_MOC_LITERAL(4, 19, 6), // "setMax"
QT_MOC_LITERAL(5, 26, 8), // "setInner"
QT_MOC_LITERAL(6, 35, 8), // "setOuter"
QT_MOC_LITERAL(7, 44, 8) // "setColor"

    },
    "Arc\0setUse\0\0setMin\0setMax\0setInner\0"
    "setOuter\0setColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Arc[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       3,    1,   47,    2, 0x0a /* Public */,
       4,    1,   50,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       6,    1,   56,    2, 0x0a /* Public */,
       7,    1,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Arc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Arc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setUse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setMin((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->setMax((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setInner((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setOuter((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setColor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Arc::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Arc.data,
    qt_meta_data_Arc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Arc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Arc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Arc.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Arc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_NeedleInstrument_t {
    QByteArrayData data[15];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NeedleInstrument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NeedleInstrument_t qt_meta_stringdata_NeedleInstrument = {
    {
QT_MOC_LITERAL(0, 0, 16), // "NeedleInstrument"
QT_MOC_LITERAL(1, 17, 8), // "setValue"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "value"
QT_MOC_LITERAL(4, 33, 9), // "setNeedle"
QT_MOC_LITERAL(5, 43, 7), // "Needle*"
QT_MOC_LITERAL(6, 51, 9), // "newNeedle"
QT_MOC_LITERAL(7, 61, 10), // "setNumbers"
QT_MOC_LITERAL(8, 72, 3), // "div"
QT_MOC_LITERAL(9, 76, 14), // "setNumberScale"
QT_MOC_LITERAL(10, 91, 2), // "ns"
QT_MOC_LITERAL(11, 94, 12), // "setThickBars"
QT_MOC_LITERAL(12, 107, 5), // "thick"
QT_MOC_LITERAL(13, 113, 11), // "setThinBars"
QT_MOC_LITERAL(14, 125, 4) // "thin"

    },
    "NeedleInstrument\0setValue\0\0value\0"
    "setNeedle\0Needle*\0newNeedle\0setNumbers\0"
    "div\0setNumberScale\0ns\0setThickBars\0"
    "thick\0setThinBars\0thin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NeedleInstrument[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
       9,    1,   53,    2, 0x0a /* Public */,
      11,    1,   56,    2, 0x0a /* Public */,
      13,    1,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::Float,   12,
    QMetaType::Void, QMetaType::Float,   14,

       0        // eod
};

void NeedleInstrument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NeedleInstrument *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->setNeedle((*reinterpret_cast< Needle*(*)>(_a[1]))); break;
        case 2: _t->setNumbers((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setNumberScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setThickBars((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setThinBars((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NeedleInstrument::staticMetaObject = { {
    &PanelItem::staticMetaObject,
    qt_meta_stringdata_NeedleInstrument.data,
    qt_meta_data_NeedleInstrument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NeedleInstrument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NeedleInstrument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NeedleInstrument.stringdata0))
        return static_cast<void*>(this);
    return PanelItem::qt_metacast(_clname);
}

int NeedleInstrument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PanelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

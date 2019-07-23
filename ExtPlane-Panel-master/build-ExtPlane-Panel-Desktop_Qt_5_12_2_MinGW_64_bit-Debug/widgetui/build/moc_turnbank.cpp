/****************************************************************************
** Meta object code from reading C++ file 'turnbank.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ExtPlane-Panel/widgetui/panelitems/turnbank.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'turnbank.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TurnAndBank_t {
    QByteArrayData data[20];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TurnAndBank_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TurnAndBank_t qt_meta_stringdata_TurnAndBank = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TurnAndBank"
QT_MOC_LITERAL(1, 12, 10), // "refChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "name"
QT_MOC_LITERAL(4, 29, 3), // "alt"
QT_MOC_LITERAL(5, 33, 7), // "setUnit"
QT_MOC_LITERAL(6, 41, 12), // "DistanceUnit"
QT_MOC_LITERAL(7, 54, 2), // "un"
QT_MOC_LITERAL(8, 57, 9), // "setRange1"
QT_MOC_LITERAL(9, 67, 1), // "v"
QT_MOC_LITERAL(10, 69, 9), // "setRange2"
QT_MOC_LITERAL(11, 79, 12), // "setThickBars"
QT_MOC_LITERAL(12, 92, 11), // "setThinBars"
QT_MOC_LITERAL(13, 104, 15), // "setNumbersScale"
QT_MOC_LITERAL(14, 120, 10), // "setNumbers"
QT_MOC_LITERAL(15, 131, 3), // "div"
QT_MOC_LITERAL(16, 135, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(17, 150, 5), // "panel"
QT_MOC_LITERAL(18, 156, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(19, 176, 4) // "conn"

    },
    "TurnAndBank\0refChanged\0\0name\0alt\0"
    "setUnit\0DistanceUnit\0un\0setRange1\0v\0"
    "setRange2\0setThickBars\0setThinBars\0"
    "setNumbersScale\0setNumbers\0div\0"
    "ExtPlanePanel*\0panel\0ExtPlaneConnection*\0"
    "conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TurnAndBank[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   85, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x0a /* Public */,
       5,    1,   59,    2, 0x0a /* Public */,
       8,    1,   62,    2, 0x0a /* Public */,
      10,    1,   65,    2, 0x0a /* Public */,
      11,    1,   68,    2, 0x0a /* Public */,
      12,    1,   71,    2, 0x0a /* Public */,
      13,    1,   74,    2, 0x0a /* Public */,
      14,    1,   77,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,   15,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 16, 0x80000000 | 18,   17,   19,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   80,    2, 0x0e /* Public */,

       0        // eod
};

void TurnAndBank::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { TurnAndBank *_r = new TurnAndBank((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TurnAndBank *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->setUnit((*reinterpret_cast< DistanceUnit(*)>(_a[1]))); break;
        case 2: _t->setRange1((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setRange2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setThickBars((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setThinBars((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->setNumbersScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->setNumbers((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TurnAndBank::staticMetaObject = { {
    &PanelItem::staticMetaObject,
    qt_meta_stringdata_TurnAndBank.data,
    qt_meta_data_TurnAndBank,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TurnAndBank::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TurnAndBank::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TurnAndBank.stringdata0))
        return static_cast<void*>(this);
    return PanelItem::qt_metacast(_clname);
}

int TurnAndBank::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PanelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

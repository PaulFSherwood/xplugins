/****************************************************************************
** Meta object code from reading C++ file 'displayinstrument.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/panelitems/displayinstrument.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'displayinstrument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DisplayInstrument_t {
    QByteArrayData data[10];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisplayInstrument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisplayInstrument_t qt_meta_stringdata_DisplayInstrument = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DisplayInstrument"
QT_MOC_LITERAL(1, 18, 8), // "tickTime"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 2), // "dt"
QT_MOC_LITERAL(4, 31, 5), // "total"
QT_MOC_LITERAL(5, 37, 14), // "setMonitorFade"
QT_MOC_LITERAL(6, 52, 3), // "val"
QT_MOC_LITERAL(7, 56, 18), // "setDisplayStrength"
QT_MOC_LITERAL(8, 75, 13), // "setResolution"
QT_MOC_LITERAL(9, 89, 14) // "setRefreshHerz"

    },
    "DisplayInstrument\0tickTime\0\0dt\0total\0"
    "setMonitorFade\0val\0setDisplayStrength\0"
    "setResolution\0setRefreshHerz"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisplayInstrument[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x0a /* Public */,
       5,    1,   44,    2, 0x0a /* Public */,
       7,    1,   47,    2, 0x0a /* Public */,
       8,    1,   50,    2, 0x0a /* Public */,
       9,    1,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void DisplayInstrument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DisplayInstrument *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tickTime((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->setMonitorFade((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setDisplayStrength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setResolution((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setRefreshHerz((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DisplayInstrument::staticMetaObject = { {
    &PanelItem::staticMetaObject,
    qt_meta_stringdata_DisplayInstrument.data,
    qt_meta_data_DisplayInstrument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DisplayInstrument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisplayInstrument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DisplayInstrument.stringdata0))
        return static_cast<void*>(this);
    return PanelItem::qt_metacast(_clname);
}

int DisplayInstrument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PanelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

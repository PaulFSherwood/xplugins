/****************************************************************************
** Meta object code from reading C++ file 'gaugecover.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/panelitems/gaugecover.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gaugecover.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GaugeCover_t {
    QByteArrayData data[20];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GaugeCover_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GaugeCover_t qt_meta_stringdata_GaugeCover = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GaugeCover"
QT_MOC_LITERAL(1, 11, 14), // "drawCoverImage"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "setGaugesInset"
QT_MOC_LITERAL(4, 42, 3), // "val"
QT_MOC_LITERAL(5, 46, 13), // "setGaugesSize"
QT_MOC_LITERAL(6, 60, 15), // "setGrainEnabled"
QT_MOC_LITERAL(7, 76, 16), // "setGrainStrength"
QT_MOC_LITERAL(8, 93, 12), // "setGrainZoom"
QT_MOC_LITERAL(9, 106, 19), // "setGrainPersistance"
QT_MOC_LITERAL(10, 126, 15), // "setGrainQuality"
QT_MOC_LITERAL(11, 142, 13), // "setGrainTiles"
QT_MOC_LITERAL(12, 156, 18), // "setBackgroundColor"
QT_MOC_LITERAL(13, 175, 16), // "setScrewsEnabled"
QT_MOC_LITERAL(14, 192, 13), // "setScrewsSize"
QT_MOC_LITERAL(15, 206, 15), // "setScrewsOffset"
QT_MOC_LITERAL(16, 222, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(17, 237, 5), // "panel"
QT_MOC_LITERAL(18, 243, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(19, 263, 4) // "conn"

    },
    "GaugeCover\0drawCoverImage\0\0setGaugesInset\0"
    "val\0setGaugesSize\0setGrainEnabled\0"
    "setGrainStrength\0setGrainZoom\0"
    "setGrainPersistance\0setGrainQuality\0"
    "setGrainTiles\0setBackgroundColor\0"
    "setScrewsEnabled\0setScrewsSize\0"
    "setScrewsOffset\0ExtPlanePanel*\0panel\0"
    "ExtPlaneConnection*\0conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GaugeCover[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,  121, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    1,   80,    2, 0x0a /* Public */,
       5,    1,   83,    2, 0x0a /* Public */,
       6,    1,   86,    2, 0x0a /* Public */,
       7,    1,   89,    2, 0x0a /* Public */,
       8,    1,   92,    2, 0x0a /* Public */,
       9,    1,   95,    2, 0x0a /* Public */,
      10,    1,   98,    2, 0x0a /* Public */,
      11,    1,  101,    2, 0x0a /* Public */,
      12,    1,  104,    2, 0x0a /* Public */,
      13,    1,  107,    2, 0x0a /* Public */,
      14,    1,  110,    2, 0x0a /* Public */,
      15,    1,  113,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 16, 0x80000000 | 18,   17,   19,

 // constructors: name, argc, parameters, tag, flags
       0,    2,  116,    2, 0x0e /* Public */,

       0        // eod
};

void GaugeCover::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { GaugeCover *_r = new GaugeCover((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GaugeCover *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->drawCoverImage(); break;
        case 1: _t->setGaugesInset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setGaugesSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setGrainEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setGrainStrength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setGrainZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setGrainPersistance((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setGrainQuality((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setGrainTiles((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setBackgroundColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 10: _t->setScrewsEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setScrewsSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setScrewsOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GaugeCover::staticMetaObject = { {
    &PanelItem::staticMetaObject,
    qt_meta_stringdata_GaugeCover.data,
    qt_meta_data_GaugeCover,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GaugeCover::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GaugeCover::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GaugeCover.stringdata0))
        return static_cast<void*>(this);
    return PanelItem::qt_metacast(_clname);
}

int GaugeCover::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PanelItem::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

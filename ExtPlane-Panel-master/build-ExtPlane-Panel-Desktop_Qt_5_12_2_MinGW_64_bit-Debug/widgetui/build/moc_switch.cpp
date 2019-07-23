/****************************************************************************
** Meta object code from reading C++ file 'switch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ExtPlane-Panel/widgetui/panelitems/switch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'switch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Switch_t {
    QByteArrayData data[12];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Switch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Switch_t qt_meta_stringdata_Switch = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Switch"
QT_MOC_LITERAL(1, 7, 8), // "setLabel"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 3), // "txt"
QT_MOC_LITERAL(4, 21, 6), // "setRef"
QT_MOC_LITERAL(5, 28, 3), // "ref"
QT_MOC_LITERAL(6, 32, 12), // "valueChanged"
QT_MOC_LITERAL(7, 45, 8), // "newValue"
QT_MOC_LITERAL(8, 54, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(9, 69, 5), // "panel"
QT_MOC_LITERAL(10, 75, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(11, 95, 4) // "conn"

    },
    "Switch\0setLabel\0\0txt\0setRef\0ref\0"
    "valueChanged\0newValue\0ExtPlanePanel*\0"
    "panel\0ExtPlaneConnection*\0conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Switch[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   45, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    2,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    5,    7,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 8, 0x80000000 | 10,    9,   11,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   40,    2, 0x0e /* Public */,

       0        // eod
};

void Switch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Switch *_r = new Switch((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Switch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setRef((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->valueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Switch::staticMetaObject = { {
    &PanelItem::staticMetaObject,
    qt_meta_stringdata_Switch.data,
    qt_meta_data_Switch,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Switch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Switch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Switch.stringdata0))
        return static_cast<void*>(this);
    return PanelItem::qt_metacast(_clname);
}

int Switch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PanelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

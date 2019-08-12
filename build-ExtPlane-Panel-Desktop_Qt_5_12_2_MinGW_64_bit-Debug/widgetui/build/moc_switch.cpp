/****************************************************************************
** Meta object code from reading C++ file 'switch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/panelitems/switch.h"
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
    QByteArrayData data[15];
    char stringdata0[144];
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
QT_MOC_LITERAL(4, 21, 10), // "setDataRef"
QT_MOC_LITERAL(5, 32, 3), // "ref"
QT_MOC_LITERAL(6, 36, 17), // "setPositionValue1"
QT_MOC_LITERAL(7, 54, 3), // "val"
QT_MOC_LITERAL(8, 58, 17), // "setPositionValue2"
QT_MOC_LITERAL(9, 76, 12), // "valueChanged"
QT_MOC_LITERAL(10, 89, 8), // "newValue"
QT_MOC_LITERAL(11, 98, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(12, 113, 5), // "panel"
QT_MOC_LITERAL(13, 119, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(14, 139, 4) // "conn"

    },
    "Switch\0setLabel\0\0txt\0setDataRef\0ref\0"
    "setPositionValue1\0val\0setPositionValue2\0"
    "valueChanged\0newValue\0ExtPlanePanel*\0"
    "panel\0ExtPlaneConnection*\0conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Switch[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   71, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       8,    1,   53,    2, 0x0a /* Public */,
       9,    2,   56,    2, 0x08 /* Private */,
       9,    2,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    5,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,   10,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 11, 0x80000000 | 13,   12,   14,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   66,    2, 0x0e /* Public */,

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
        case 1: _t->setDataRef((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setPositionValue1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setPositionValue2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->valueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->valueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
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

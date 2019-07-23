/****************************************************************************
** Meta object code from reading C++ file 'rotaryknob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ExtPlane-Panel/widgetui/panelitems/rotaryknob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rotaryknob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RotaryKnob_t {
    QByteArrayData data[14];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RotaryKnob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RotaryKnob_t qt_meta_stringdata_RotaryKnob = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RotaryKnob"
QT_MOC_LITERAL(1, 11, 9), // "setChange"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 2), // "ca"
QT_MOC_LITERAL(4, 25, 6), // "setRef"
QT_MOC_LITERAL(5, 32, 3), // "ref"
QT_MOC_LITERAL(6, 36, 12), // "valueChanged"
QT_MOC_LITERAL(7, 49, 8), // "newValue"
QT_MOC_LITERAL(8, 58, 15), // "setChangeString"
QT_MOC_LITERAL(9, 74, 2), // "ch"
QT_MOC_LITERAL(10, 77, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(11, 92, 5), // "panel"
QT_MOC_LITERAL(12, 98, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(13, 118, 4) // "conn"

    },
    "RotaryKnob\0setChange\0\0ca\0setRef\0ref\0"
    "valueChanged\0newValue\0setChangeString\0"
    "ch\0ExtPlanePanel*\0panel\0ExtPlaneConnection*\0"
    "conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RotaryKnob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   53, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       6,    2,   40,    2, 0x08 /* Private */,
       8,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    5,    7,
    QMetaType::Void, QMetaType::QString,    9,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 10, 0x80000000 | 12,   11,   13,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   48,    2, 0x0e /* Public */,

       0        // eod
};

void RotaryKnob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { RotaryKnob *_r = new RotaryKnob((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RotaryKnob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setChange((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setRef((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->valueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->setChangeString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RotaryKnob::staticMetaObject = { {
    &PanelItem::staticMetaObject,
    qt_meta_stringdata_RotaryKnob.data,
    qt_meta_data_RotaryKnob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RotaryKnob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RotaryKnob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RotaryKnob.stringdata0))
        return static_cast<void*>(this);
    return PanelItem::qt_metacast(_clname);
}

int RotaryKnob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PanelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

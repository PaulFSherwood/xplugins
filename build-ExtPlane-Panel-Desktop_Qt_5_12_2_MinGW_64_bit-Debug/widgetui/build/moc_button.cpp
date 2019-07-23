/****************************************************************************
** Meta object code from reading C++ file 'button.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/panelitems/button.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'button.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Button_t {
    QByteArrayData data[16];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Button_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Button_t qt_meta_stringdata_Button = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Button"
QT_MOC_LITERAL(1, 7, 11), // "setButtonId"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 2), // "id"
QT_MOC_LITERAL(4, 23, 8), // "setLabel"
QT_MOC_LITERAL(5, 32, 3), // "txt"
QT_MOC_LITERAL(6, 36, 8), // "setIsKey"
QT_MOC_LITERAL(7, 45, 2), // "is"
QT_MOC_LITERAL(8, 48, 6), // "setRef"
QT_MOC_LITERAL(9, 55, 3), // "ref"
QT_MOC_LITERAL(10, 59, 12), // "valueChanged"
QT_MOC_LITERAL(11, 72, 8), // "newValue"
QT_MOC_LITERAL(12, 81, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(13, 96, 5), // "panel"
QT_MOC_LITERAL(14, 102, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(15, 122, 4) // "conn"

    },
    "Button\0setButtonId\0\0id\0setLabel\0txt\0"
    "setIsKey\0is\0setRef\0ref\0valueChanged\0"
    "newValue\0ExtPlanePanel*\0panel\0"
    "ExtPlaneConnection*\0conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Button[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   61, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,
      10,    2,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    9,   11,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 12, 0x80000000 | 14,   13,   15,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   56,    2, 0x0e /* Public */,

       0        // eod
};

void Button::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Button *_r = new Button((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Button *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setButtonId((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->setLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setIsKey((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setRef((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->valueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Button::staticMetaObject = { {
    &PanelItem::staticMetaObject,
    qt_meta_stringdata_Button.data,
    qt_meta_data_Button,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Button::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Button::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Button.stringdata0))
        return static_cast<void*>(this);
    return PanelItem::qt_metacast(_clname);
}

int Button::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

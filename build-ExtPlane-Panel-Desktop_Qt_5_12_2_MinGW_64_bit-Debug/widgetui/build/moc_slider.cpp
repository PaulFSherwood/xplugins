/****************************************************************************
** Meta object code from reading C++ file 'slider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/panelitems/slider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Slider_t {
    QByteArrayData data[24];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Slider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Slider_t qt_meta_stringdata_Slider = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Slider"
QT_MOC_LITERAL(1, 7, 9), // "setChange"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 2), // "ca"
QT_MOC_LITERAL(4, 21, 10), // "setMinimum"
QT_MOC_LITERAL(5, 32, 10), // "setMaximum"
QT_MOC_LITERAL(6, 43, 6), // "setRef"
QT_MOC_LITERAL(7, 50, 3), // "ref"
QT_MOC_LITERAL(8, 54, 12), // "valueChanged"
QT_MOC_LITERAL(9, 67, 8), // "newValue"
QT_MOC_LITERAL(10, 76, 15), // "setChangeString"
QT_MOC_LITERAL(11, 92, 2), // "ch"
QT_MOC_LITERAL(12, 95, 12), // "setIndex1Set"
QT_MOC_LITERAL(13, 108, 5), // "input"
QT_MOC_LITERAL(14, 114, 12), // "setIndex2Set"
QT_MOC_LITERAL(15, 127, 12), // "setIndex3Set"
QT_MOC_LITERAL(16, 140, 12), // "setIndex4Set"
QT_MOC_LITERAL(17, 153, 12), // "setIndex5Set"
QT_MOC_LITERAL(18, 166, 12), // "setIndex6Set"
QT_MOC_LITERAL(19, 179, 12), // "setKnobColor"
QT_MOC_LITERAL(20, 192, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(21, 207, 5), // "panel"
QT_MOC_LITERAL(22, 213, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(23, 233, 4) // "conn"

    },
    "Slider\0setChange\0\0ca\0setMinimum\0"
    "setMaximum\0setRef\0ref\0valueChanged\0"
    "newValue\0setChangeString\0ch\0setIndex1Set\0"
    "input\0setIndex2Set\0setIndex3Set\0"
    "setIndex4Set\0setIndex5Set\0setIndex6Set\0"
    "setKnobColor\0ExtPlanePanel*\0panel\0"
    "ExtPlaneConnection*\0conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Slider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,  125, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       4,    1,   82,    2, 0x0a /* Public */,
       5,    1,   85,    2, 0x0a /* Public */,
       6,    1,   88,    2, 0x0a /* Public */,
       8,    2,   91,    2, 0x08 /* Private */,
      10,    1,   96,    2, 0x08 /* Private */,
      12,    1,   99,    2, 0x08 /* Private */,
      14,    1,  102,    2, 0x08 /* Private */,
      15,    1,  105,    2, 0x08 /* Private */,
      16,    1,  108,    2, 0x08 /* Private */,
      17,    1,  111,    2, 0x08 /* Private */,
      18,    1,  114,    2, 0x08 /* Private */,
      19,    1,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    7,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::QColor,   11,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 20, 0x80000000 | 22,   21,   23,

 // constructors: name, argc, parameters, tag, flags
       0,    2,  120,    2, 0x0e /* Public */,

       0        // eod
};

void Slider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Slider *_r = new Slider((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Slider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setChange((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setMinimum((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->setMaximum((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setRef((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->valueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->setChangeString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setIndex1Set((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setIndex2Set((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setIndex3Set((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setIndex4Set((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setIndex5Set((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setIndex6Set((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setKnobColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Slider::staticMetaObject = { {
    &PanelItem::staticMetaObject,
    qt_meta_stringdata_Slider.data,
    qt_meta_data_Slider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Slider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Slider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Slider.stringdata0))
        return static_cast<void*>(this);
    return PanelItem::qt_metacast(_clname);
}

int Slider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

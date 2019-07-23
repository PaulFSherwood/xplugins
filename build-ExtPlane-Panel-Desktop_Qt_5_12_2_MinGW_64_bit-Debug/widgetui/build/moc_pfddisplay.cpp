/****************************************************************************
** Meta object code from reading C++ file 'pfddisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/panelitems/pfddisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pfddisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PFDDisplay_t {
    QByteArrayData data[12];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PFDDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PFDDisplay_t qt_meta_stringdata_PFDDisplay = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PFDDisplay"
QT_MOC_LITERAL(1, 11, 10), // "refChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "name"
QT_MOC_LITERAL(4, 28, 5), // "value"
QT_MOC_LITERAL(5, 34, 6), // "values"
QT_MOC_LITERAL(6, 41, 8), // "setStyle"
QT_MOC_LITERAL(7, 50, 3), // "val"
QT_MOC_LITERAL(8, 54, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(9, 69, 5), // "panel"
QT_MOC_LITERAL(10, 75, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(11, 95, 4) // "conn"

    },
    "PFDDisplay\0refChanged\0\0name\0value\0"
    "values\0setStyle\0val\0ExtPlanePanel*\0"
    "panel\0ExtPlaneConnection*\0conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PFDDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   47, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       1,    2,   34,    2, 0x0a /* Public */,
       6,    1,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    5,
    QMetaType::Void, QMetaType::Int,    7,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 8, 0x80000000 | 10,    9,   11,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   42,    2, 0x0e /* Public */,

       0        // eod
};

void PFDDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { PFDDisplay *_r = new PFDDisplay((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PFDDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->refChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 2: _t->setStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PFDDisplay::staticMetaObject = { {
    &DisplayInstrument::staticMetaObject,
    qt_meta_stringdata_PFDDisplay.data,
    qt_meta_data_PFDDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PFDDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PFDDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PFDDisplay.stringdata0))
        return static_cast<void*>(this);
    return DisplayInstrument::qt_metacast(_clname);
}

int PFDDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DisplayInstrument::qt_metacall(_c, _id, _a);
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

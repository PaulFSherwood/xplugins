/****************************************************************************
** Meta object code from reading C++ file 'compass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/panelitems/compass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'compass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Compass_t {
    QByteArrayData data[9];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Compass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Compass_t qt_meta_stringdata_Compass = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Compass"
QT_MOC_LITERAL(1, 8, 14), // "headingChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "name"
QT_MOC_LITERAL(4, 29, 3), // "hdg"
QT_MOC_LITERAL(5, 33, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(6, 48, 5), // "panel"
QT_MOC_LITERAL(7, 54, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(8, 74, 4) // "conn"

    },
    "Compass\0headingChanged\0\0name\0hdg\0"
    "ExtPlanePanel*\0panel\0ExtPlaneConnection*\0"
    "conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Compass[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   29, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    4,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 5, 0x80000000 | 7,    6,    8,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   24,    2, 0x0e /* Public */,

       0        // eod
};

void Compass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Compass *_r = new Compass((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Compass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->headingChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Compass::staticMetaObject = { {
    &PanelItem::staticMetaObject,
    qt_meta_stringdata_Compass.data,
    qt_meta_data_Compass,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Compass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Compass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Compass.stringdata0))
        return static_cast<void*>(this);
    return PanelItem::qt_metacast(_clname);
}

int Compass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PanelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

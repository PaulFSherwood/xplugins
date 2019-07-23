/****************************************************************************
** Meta object code from reading C++ file 'indicatorlight.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ExtPlane-Panel/widgetui/panelitems/indicatorlight.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'indicatorlight.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IndicatorLight_t {
    QByteArrayData data[18];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IndicatorLight_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IndicatorLight_t qt_meta_stringdata_IndicatorLight = {
    {
QT_MOC_LITERAL(0, 0, 14), // "IndicatorLight"
QT_MOC_LITERAL(1, 15, 14), // "dataRefChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "name"
QT_MOC_LITERAL(4, 36, 3), // "val"
QT_MOC_LITERAL(5, 40, 14), // "setDataRefName"
QT_MOC_LITERAL(6, 55, 12), // "setThreshold"
QT_MOC_LITERAL(7, 68, 13), // "setLabelColor"
QT_MOC_LITERAL(8, 82, 10), // "setLabelOn"
QT_MOC_LITERAL(9, 93, 11), // "setLabelOff"
QT_MOC_LITERAL(10, 105, 15), // "setGlowStrength"
QT_MOC_LITERAL(11, 121, 13), // "setStrengthOn"
QT_MOC_LITERAL(12, 135, 14), // "setStrengthOff"
QT_MOC_LITERAL(13, 150, 10), // "loadPreset"
QT_MOC_LITERAL(14, 161, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(15, 176, 5), // "panel"
QT_MOC_LITERAL(16, 182, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(17, 202, 4) // "conn"

    },
    "IndicatorLight\0dataRefChanged\0\0name\0"
    "val\0setDataRefName\0setThreshold\0"
    "setLabelColor\0setLabelOn\0setLabelOff\0"
    "setGlowStrength\0setStrengthOn\0"
    "setStrengthOff\0loadPreset\0ExtPlanePanel*\0"
    "panel\0ExtPlaneConnection*\0conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IndicatorLight[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,  111, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x0a /* Public */,
       1,    2,   74,    2, 0x0a /* Public */,
       5,    1,   79,    2, 0x0a /* Public */,
       6,    1,   82,    2, 0x0a /* Public */,
       7,    1,   85,    2, 0x0a /* Public */,
       8,    1,   88,    2, 0x0a /* Public */,
       9,    1,   91,    2, 0x0a /* Public */,
      10,    1,   94,    2, 0x0a /* Public */,
      11,    1,   97,    2, 0x0a /* Public */,
      12,    1,  100,    2, 0x0a /* Public */,
      13,    1,  103,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 14, 0x80000000 | 16,   15,   17,

 // constructors: name, argc, parameters, tag, flags
       0,    2,  106,    2, 0x0e /* Public */,

       0        // eod
};

void IndicatorLight::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { IndicatorLight *_r = new IndicatorLight((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IndicatorLight *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataRefChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->dataRefChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->setDataRefName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setThreshold((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setLabelColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 5: _t->setLabelOn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setLabelOff((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setGlowStrength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setStrengthOn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setStrengthOff((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->loadPreset((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IndicatorLight::staticMetaObject = { {
    &PanelItem::staticMetaObject,
    qt_meta_stringdata_IndicatorLight.data,
    qt_meta_data_IndicatorLight,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IndicatorLight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IndicatorLight::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IndicatorLight.stringdata0))
        return static_cast<void*>(this);
    return PanelItem::qt_metacast(_clname);
}

int IndicatorLight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PanelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

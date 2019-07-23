/****************************************************************************
** Meta object code from reading C++ file 'indicatordisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ExtPlane-Panel/widgetui/panelitems/indicatordisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'indicatordisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IndicatorDisplay_t {
    QByteArrayData data[20];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IndicatorDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IndicatorDisplay_t qt_meta_stringdata_IndicatorDisplay = {
    {
QT_MOC_LITERAL(0, 0, 16), // "IndicatorDisplay"
QT_MOC_LITERAL(1, 17, 14), // "dataRefChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "name"
QT_MOC_LITERAL(4, 38, 3), // "val"
QT_MOC_LITERAL(5, 42, 14), // "setDataRefName"
QT_MOC_LITERAL(6, 57, 12), // "setThreshold"
QT_MOC_LITERAL(7, 70, 13), // "setLabelColor"
QT_MOC_LITERAL(8, 84, 13), // "setValueColor"
QT_MOC_LITERAL(9, 98, 15), // "setValueDivisor"
QT_MOC_LITERAL(10, 114, 10), // "setLabelOn"
QT_MOC_LITERAL(11, 125, 11), // "setLabelOff"
QT_MOC_LITERAL(12, 137, 13), // "setStrengthOn"
QT_MOC_LITERAL(13, 151, 14), // "setStrengthOff"
QT_MOC_LITERAL(14, 166, 12), // "setShowValue"
QT_MOC_LITERAL(15, 179, 10), // "loadPreset"
QT_MOC_LITERAL(16, 190, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(17, 205, 5), // "panel"
QT_MOC_LITERAL(18, 211, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(19, 231, 4) // "conn"

    },
    "IndicatorDisplay\0dataRefChanged\0\0name\0"
    "val\0setDataRefName\0setThreshold\0"
    "setLabelColor\0setValueColor\0setValueDivisor\0"
    "setLabelOn\0setLabelOff\0setStrengthOn\0"
    "setStrengthOff\0setShowValue\0loadPreset\0"
    "ExtPlanePanel*\0panel\0ExtPlaneConnection*\0"
    "conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IndicatorDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,  135, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x0a /* Public */,
       1,    2,   89,    2, 0x0a /* Public */,
       5,    1,   94,    2, 0x0a /* Public */,
       6,    1,   97,    2, 0x0a /* Public */,
       7,    1,  100,    2, 0x0a /* Public */,
       8,    1,  103,    2, 0x0a /* Public */,
       9,    1,  106,    2, 0x0a /* Public */,
       9,    1,  109,    2, 0x0a /* Public */,
      10,    1,  112,    2, 0x0a /* Public */,
      11,    1,  115,    2, 0x0a /* Public */,
      12,    1,  118,    2, 0x0a /* Public */,
      13,    1,  121,    2, 0x0a /* Public */,
      14,    1,  124,    2, 0x0a /* Public */,
      15,    1,  127,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    4,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 16, 0x80000000 | 18,   17,   19,

 // constructors: name, argc, parameters, tag, flags
       0,    2,  130,    2, 0x0e /* Public */,

       0        // eod
};

void IndicatorDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { IndicatorDisplay *_r = new IndicatorDisplay((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IndicatorDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataRefChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->dataRefChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->setDataRefName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setThreshold((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setLabelColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 5: _t->setValueColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 6: _t->setValueDivisor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setValueDivisor((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->setLabelOn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setLabelOff((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->setStrengthOn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setStrengthOff((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setShowValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->loadPreset((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IndicatorDisplay::staticMetaObject = { {
    &DisplayInstrument::staticMetaObject,
    qt_meta_stringdata_IndicatorDisplay.data,
    qt_meta_data_IndicatorDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IndicatorDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IndicatorDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IndicatorDisplay.stringdata0))
        return static_cast<void*>(this);
    return DisplayInstrument::qt_metacast(_clname);
}

int IndicatorDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DisplayInstrument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

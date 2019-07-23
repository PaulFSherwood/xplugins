/****************************************************************************
** Meta object code from reading C++ file 'datarefdebugger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/panelitems/datarefdebugger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datarefdebugger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataRefDebugger_t {
    QByteArrayData data[17];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataRefDebugger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataRefDebugger_t qt_meta_stringdata_DataRefDebugger = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DataRefDebugger"
QT_MOC_LITERAL(1, 16, 14), // "dataRefChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "name"
QT_MOC_LITERAL(4, 37, 3), // "val"
QT_MOC_LITERAL(5, 41, 6), // "values"
QT_MOC_LITERAL(6, 48, 14), // "setDataRefName"
QT_MOC_LITERAL(7, 63, 18), // "setDataRefAccuracy"
QT_MOC_LITERAL(8, 82, 8), // "accuracy"
QT_MOC_LITERAL(9, 91, 17), // "setShowAllIndexes"
QT_MOC_LITERAL(10, 109, 7), // "showAll"
QT_MOC_LITERAL(11, 117, 14), // "setChosenIndex"
QT_MOC_LITERAL(12, 132, 5), // "index"
QT_MOC_LITERAL(13, 138, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(14, 153, 5), // "panel"
QT_MOC_LITERAL(15, 159, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(16, 179, 4) // "conn"

    },
    "DataRefDebugger\0dataRefChanged\0\0name\0"
    "val\0values\0setDataRefName\0setDataRefAccuracy\0"
    "accuracy\0setShowAllIndexes\0showAll\0"
    "setChosenIndex\0index\0ExtPlanePanel*\0"
    "panel\0ExtPlaneConnection*\0conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataRefDebugger[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   81, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x0a /* Public */,
       1,    2,   54,    2, 0x0a /* Public */,
       1,    2,   59,    2, 0x0a /* Public */,
       6,    1,   64,    2, 0x0a /* Public */,
       7,    1,   67,    2, 0x0a /* Public */,
       9,    1,   70,    2, 0x0a /* Public */,
      11,    1,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Float,   12,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 13, 0x80000000 | 15,   14,   16,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   76,    2, 0x0e /* Public */,

       0        // eod
};

void DataRefDebugger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { DataRefDebugger *_r = new DataRefDebugger((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataRefDebugger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataRefChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->dataRefChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->dataRefChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 3: _t->setDataRefName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setDataRefAccuracy((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setShowAllIndexes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setChosenIndex((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataRefDebugger::staticMetaObject = { {
    &PanelItem::staticMetaObject,
    qt_meta_stringdata_DataRefDebugger.data,
    qt_meta_data_DataRefDebugger,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataRefDebugger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataRefDebugger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataRefDebugger.stringdata0))
        return static_cast<void*>(this);
    return PanelItem::qt_metacast(_clname);
}

int DataRefDebugger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PanelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

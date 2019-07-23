/****************************************************************************
** Meta object code from reading C++ file 'panelitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/panelitems/panelitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panelitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PanelItem_t {
    QByteArrayData data[25];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PanelItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PanelItem_t qt_meta_stringdata_PanelItem = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PanelItem"
QT_MOC_LITERAL(1, 10, 17), // "panelItemSelected"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "PanelItem*"
QT_MOC_LITERAL(4, 40, 1), // "g"
QT_MOC_LITERAL(5, 42, 3), // "sel"
QT_MOC_LITERAL(6, 46, 13), // "editPanelItem"
QT_MOC_LITERAL(7, 60, 4), // "item"
QT_MOC_LITERAL(8, 65, 16), // "panelItemChanged"
QT_MOC_LITERAL(9, 82, 16), // "setPanelRotation"
QT_MOC_LITERAL(10, 99, 5), // "angle"
QT_MOC_LITERAL(11, 105, 15), // "setItemRotation"
QT_MOC_LITERAL(12, 121, 9), // "setZValue"
QT_MOC_LITERAL(13, 131, 1), // "z"
QT_MOC_LITERAL(14, 133, 8), // "tickTime"
QT_MOC_LITERAL(15, 142, 2), // "dt"
QT_MOC_LITERAL(16, 145, 5), // "total"
QT_MOC_LITERAL(17, 151, 23), // "setInterpolationEnabled"
QT_MOC_LITERAL(18, 175, 2), // "ie"
QT_MOC_LITERAL(19, 178, 19), // "setAntialiasEnabled"
QT_MOC_LITERAL(20, 198, 18), // "setDefaultFontSize"
QT_MOC_LITERAL(21, 217, 3), // "dfs"
QT_MOC_LITERAL(22, 221, 15), // "setItemFontSize"
QT_MOC_LITERAL(23, 237, 3), // "ifs"
QT_MOC_LITERAL(24, 241, 14) // "settingChanged"

    },
    "PanelItem\0panelItemSelected\0\0PanelItem*\0"
    "g\0sel\0editPanelItem\0item\0panelItemChanged\0"
    "setPanelRotation\0angle\0setItemRotation\0"
    "setZValue\0z\0tickTime\0dt\0total\0"
    "setInterpolationEnabled\0ie\0"
    "setAntialiasEnabled\0setDefaultFontSize\0"
    "dfs\0setItemFontSize\0ifs\0settingChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PanelItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       1,    1,   84,    2, 0x26 /* Public | MethodCloned */,
       6,    1,   87,    2, 0x06 /* Public */,
       8,    1,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   93,    2, 0x0a /* Public */,
      11,    1,   96,    2, 0x0a /* Public */,
      12,    1,   99,    2, 0x0a /* Public */,
      14,    2,  102,    2, 0x0a /* Public */,
      17,    1,  107,    2, 0x0a /* Public */,
      19,    1,  110,    2, 0x0a /* Public */,
      20,    1,  113,    2, 0x0a /* Public */,
      22,    1,  116,    2, 0x0a /* Public */,
      24,    0,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, 0x80000000 | 3,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Double,   21,
    QMetaType::Void, QMetaType::Double,   23,
    QMetaType::Void,

       0        // eod
};

void PanelItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PanelItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->panelItemSelected((*reinterpret_cast< PanelItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->panelItemSelected((*reinterpret_cast< PanelItem*(*)>(_a[1]))); break;
        case 2: _t->editPanelItem((*reinterpret_cast< PanelItem*(*)>(_a[1]))); break;
        case 3: _t->panelItemChanged((*reinterpret_cast< PanelItem*(*)>(_a[1]))); break;
        case 4: _t->setPanelRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setItemRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setZValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->tickTime((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->setInterpolationEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setAntialiasEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setDefaultFontSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->setItemFontSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->settingChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PanelItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PanelItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PanelItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PanelItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PanelItem::*)(PanelItem * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PanelItem::panelItemSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PanelItem::*)(PanelItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PanelItem::editPanelItem)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PanelItem::*)(PanelItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PanelItem::panelItemChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PanelItem::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PanelItem.data,
    qt_meta_data_PanelItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PanelItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PanelItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PanelItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int PanelItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PanelItem::panelItemSelected(PanelItem * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void PanelItem::editPanelItem(PanelItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PanelItem::panelItemChanged(PanelItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

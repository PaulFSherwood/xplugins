/****************************************************************************
** Meta object code from reading C++ file 'mapinstrument.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/panelitems/mapinstrument.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapinstrument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapInstrument_t {
    QByteArrayData data[17];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapInstrument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapInstrument_t qt_meta_stringdata_MapInstrument = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MapInstrument"
QT_MOC_LITERAL(1, 14, 8), // "tickTime"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 2), // "dt"
QT_MOC_LITERAL(4, 27, 5), // "total"
QT_MOC_LITERAL(5, 33, 14), // "latlongChanged"
QT_MOC_LITERAL(6, 48, 4), // "name"
QT_MOC_LITERAL(7, 53, 5), // "value"
QT_MOC_LITERAL(8, 59, 9), // "updateMap"
QT_MOC_LITERAL(9, 69, 23), // "mapTileDownloadFinished"
QT_MOC_LITERAL(10, 93, 14), // "QNetworkReply*"
QT_MOC_LITERAL(11, 108, 5), // "reply"
QT_MOC_LITERAL(12, 114, 14), // "setShowHeading"
QT_MOC_LITERAL(13, 129, 3), // "val"
QT_MOC_LITERAL(14, 133, 12), // "setMapSource"
QT_MOC_LITERAL(15, 146, 11), // "setMapRange"
QT_MOC_LITERAL(16, 158, 19) // "setGoogleMapsAPIKey"

    },
    "MapInstrument\0tickTime\0\0dt\0total\0"
    "latlongChanged\0name\0value\0updateMap\0"
    "mapTileDownloadFinished\0QNetworkReply*\0"
    "reply\0setShowHeading\0val\0setMapSource\0"
    "setMapRange\0setGoogleMapsAPIKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapInstrument[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x0a /* Public */,
       5,    2,   59,    2, 0x0a /* Public */,
       8,    0,   64,    2, 0x0a /* Public */,
       9,    1,   65,    2, 0x0a /* Public */,
      12,    1,   68,    2, 0x0a /* Public */,
      14,    1,   71,    2, 0x0a /* Public */,
      15,    1,   74,    2, 0x0a /* Public */,
      16,    1,   77,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void MapInstrument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapInstrument *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tickTime((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->latlongChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->updateMap(); break;
        case 3: _t->mapTileDownloadFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->setShowHeading((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setMapSource((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setMapRange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setGoogleMapsAPIKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapInstrument::staticMetaObject = { {
    &PanelItem::staticMetaObject,
    qt_meta_stringdata_MapInstrument.data,
    qt_meta_data_MapInstrument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapInstrument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapInstrument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapInstrument.stringdata0))
        return static_cast<void*>(this);
    return PanelItem::qt_metacast(_clname);
}

int MapInstrument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PanelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

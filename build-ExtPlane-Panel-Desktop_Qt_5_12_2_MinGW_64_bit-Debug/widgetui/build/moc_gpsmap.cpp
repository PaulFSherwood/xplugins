/****************************************************************************
** Meta object code from reading C++ file 'gpsmap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/panelitems/gpsmap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpsmap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GPSMap_t {
    QByteArrayData data[6];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSMap_t qt_meta_stringdata_GPSMap = {
    {
QT_MOC_LITERAL(0, 0, 6), // "GPSMap"
QT_MOC_LITERAL(1, 7, 0), // ""
QT_MOC_LITERAL(2, 8, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(3, 23, 5), // "panel"
QT_MOC_LITERAL(4, 29, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(5, 49, 4) // "conn"

    },
    "GPSMap\0\0ExtPlanePanel*\0panel\0"
    "ExtPlaneConnection*\0conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSMap[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   19, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, 0x80000000 | 2, 0x80000000 | 4,    3,    5,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   14,    1, 0x0e /* Public */,

       0        // eod
};

void GPSMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { GPSMap *_r = new GPSMap((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject GPSMap::staticMetaObject = { {
    &MapInstrument::staticMetaObject,
    qt_meta_stringdata_GPSMap.data,
    qt_meta_data_GPSMap,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPSMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSMap.stringdata0))
        return static_cast<void*>(this);
    return MapInstrument::qt_metacast(_clname);
}

int GPSMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapInstrument::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'hardwaredialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/dialogs/hardwaredialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hardwaredialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HardwareDialog_t {
    QByteArrayData data[16];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HardwareDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HardwareDialog_t qt_meta_stringdata_HardwareDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "HardwareDialog"
QT_MOC_LITERAL(1, 15, 13), // "deviceEnabled"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "dev"
QT_MOC_LITERAL(4, 34, 6), // "enable"
QT_MOC_LITERAL(5, 41, 10), // "newBinding"
QT_MOC_LITERAL(6, 52, 13), // "deleteBinding"
QT_MOC_LITERAL(7, 66, 11), // "saveChanges"
QT_MOC_LITERAL(8, 78, 17), // "currentRowChanged"
QT_MOC_LITERAL(9, 96, 3), // "row"
QT_MOC_LITERAL(10, 100, 8), // "enableSB"
QT_MOC_LITERAL(11, 109, 12), // "enablePololu"
QT_MOC_LITERAL(12, 122, 12), // "enableChroma"
QT_MOC_LITERAL(13, 135, 15), // "deviceAvailable"
QT_MOC_LITERAL(14, 151, 5), // "avail"
QT_MOC_LITERAL(15, 157, 22) // "showOutputCurvesDialog"

    },
    "HardwareDialog\0deviceEnabled\0\0dev\0"
    "enable\0newBinding\0deleteBinding\0"
    "saveChanges\0currentRowChanged\0row\0"
    "enableSB\0enablePololu\0enableChroma\0"
    "deviceAvailable\0avail\0showOutputCurvesDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HardwareDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   69,    2, 0x08 /* Private */,
       6,    0,   70,    2, 0x08 /* Private */,
       7,    0,   71,    2, 0x08 /* Private */,
       8,    1,   72,    2, 0x08 /* Private */,
      10,    1,   75,    2, 0x08 /* Private */,
      11,    1,   78,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,
      13,    2,   84,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,   14,
    QMetaType::Void,

       0        // eod
};

void HardwareDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HardwareDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceEnabled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->newBinding(); break;
        case 2: _t->deleteBinding(); break;
        case 3: _t->saveChanges(); break;
        case 4: _t->currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->enableSB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->enablePololu((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->enableChroma((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->deviceAvailable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->showOutputCurvesDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HardwareDialog::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareDialog::deviceEnabled)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HardwareDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_HardwareDialog.data,
    qt_meta_data_HardwareDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HardwareDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HardwareDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HardwareDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int HardwareDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void HardwareDialog::deviceEnabled(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

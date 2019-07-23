/****************************************************************************
** Meta object code from reading C++ file 'settingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/dialogs/settingsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsDialog_t {
    QByteArrayData data[25];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsDialog_t qt_meta_stringdata_SettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SettingsDialog"
QT_MOC_LITERAL(1, 15, 15), // "rotationChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 1), // "r"
QT_MOC_LITERAL(4, 34, 17), // "fullscreenChanged"
QT_MOC_LITERAL(5, 52, 2), // "fs"
QT_MOC_LITERAL(6, 55, 15), // "simulateChanged"
QT_MOC_LITERAL(7, 71, 8), // "simulate"
QT_MOC_LITERAL(8, 80, 16), // "setServerAddress"
QT_MOC_LITERAL(9, 97, 4), // "host"
QT_MOC_LITERAL(10, 102, 17), // "setUpdateInterval"
QT_MOC_LITERAL(11, 120, 11), // "newInterval"
QT_MOC_LITERAL(12, 132, 22), // "setPanelUpdateInterval"
QT_MOC_LITERAL(13, 155, 23), // "setInterpolationEnabled"
QT_MOC_LITERAL(14, 179, 2), // "ie"
QT_MOC_LITERAL(15, 182, 19), // "setAntialiasEnabled"
QT_MOC_LITERAL(16, 202, 18), // "setDefaultFontSize"
QT_MOC_LITERAL(17, 221, 7), // "newSize"
QT_MOC_LITERAL(18, 229, 20), // "setAutoPanelsEnabled"
QT_MOC_LITERAL(19, 250, 7), // "enabled"
QT_MOC_LITERAL(20, 258, 21), // "setAdjustPowerEnabled"
QT_MOC_LITERAL(21, 280, 12), // "loadSettings"
QT_MOC_LITERAL(22, 293, 12), // "saveSettings"
QT_MOC_LITERAL(23, 306, 21), // "updateIntervalChanged"
QT_MOC_LITERAL(24, 328, 26) // "panelUpdateIntervalChanged"

    },
    "SettingsDialog\0rotationChanged\0\0r\0"
    "fullscreenChanged\0fs\0simulateChanged\0"
    "simulate\0setServerAddress\0host\0"
    "setUpdateInterval\0newInterval\0"
    "setPanelUpdateInterval\0setInterpolationEnabled\0"
    "ie\0setAntialiasEnabled\0setDefaultFontSize\0"
    "newSize\0setAutoPanelsEnabled\0enabled\0"
    "setAdjustPowerEnabled\0loadSettings\0"
    "saveSettings\0updateIntervalChanged\0"
    "panelUpdateIntervalChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       6,    1,   95,    2, 0x06 /* Public */,
       8,    1,   98,    2, 0x06 /* Public */,
      10,    1,  101,    2, 0x06 /* Public */,
      12,    1,  104,    2, 0x06 /* Public */,
      13,    1,  107,    2, 0x06 /* Public */,
      15,    1,  110,    2, 0x06 /* Public */,
      16,    1,  113,    2, 0x06 /* Public */,
      18,    1,  116,    2, 0x06 /* Public */,
      20,    1,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    0,  122,    2, 0x0a /* Public */,
      22,    0,  123,    2, 0x0a /* Public */,
      23,    0,  124,    2, 0x0a /* Public */,
      24,    0,  125,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->fullscreenChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->simulateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setServerAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setUpdateInterval((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setPanelUpdateInterval((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setInterpolationEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setAntialiasEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setDefaultFontSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->setAutoPanelsEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setAdjustPowerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->loadSettings(); break;
        case 12: _t->saveSettings(); break;
        case 13: _t->updateIntervalChanged(); break;
        case 14: _t->panelUpdateIntervalChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingsDialog::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsDialog::rotationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SettingsDialog::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsDialog::fullscreenChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SettingsDialog::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsDialog::simulateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SettingsDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsDialog::setServerAddress)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SettingsDialog::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsDialog::setUpdateInterval)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SettingsDialog::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsDialog::setPanelUpdateInterval)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SettingsDialog::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsDialog::setInterpolationEnabled)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SettingsDialog::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsDialog::setAntialiasEnabled)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SettingsDialog::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsDialog::setDefaultFontSize)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SettingsDialog::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsDialog::setAutoPanelsEnabled)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SettingsDialog::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsDialog::setAdjustPowerEnabled)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SettingsDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_SettingsDialog.data,
    qt_meta_data_SettingsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void SettingsDialog::rotationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SettingsDialog::fullscreenChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SettingsDialog::simulateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SettingsDialog::setServerAddress(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SettingsDialog::setUpdateInterval(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SettingsDialog::setPanelUpdateInterval(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SettingsDialog::setInterpolationEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SettingsDialog::setAntialiasEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SettingsDialog::setDefaultFontSize(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SettingsDialog::setAutoPanelsEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SettingsDialog::setAdjustPowerEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

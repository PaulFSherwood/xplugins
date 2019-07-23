/****************************************************************************
** Meta object code from reading C++ file 'bindingcurvedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ExtPlane-Panel/widgetui/dialogs/bindingcurvedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bindingcurvedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BindingCurveDialog_t {
    QByteArrayData data[11];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BindingCurveDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BindingCurveDialog_t qt_meta_stringdata_BindingCurveDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "BindingCurveDialog"
QT_MOC_LITERAL(1, 19, 11), // "outputValue"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "value"
QT_MOC_LITERAL(4, 38, 6), // "output"
QT_MOC_LITERAL(5, 45, 5), // "speed"
QT_MOC_LITERAL(6, 51, 11), // "saveChanges"
QT_MOC_LITERAL(7, 63, 12), // "updateValues"
QT_MOC_LITERAL(8, 76, 17), // "limitValueChanged"
QT_MOC_LITERAL(9, 94, 13), // "sliderChanged"
QT_MOC_LITERAL(10, 108, 10) // "resetCurve"

    },
    "BindingCurveDialog\0outputValue\0\0value\0"
    "output\0speed\0saveChanges\0updateValues\0"
    "limitValueChanged\0sliderChanged\0"
    "resetCurve"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BindingCurveDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   51,    2, 0x08 /* Private */,
       7,    0,   52,    2, 0x08 /* Private */,
       8,    0,   53,    2, 0x08 /* Private */,
       9,    0,   54,    2, 0x08 /* Private */,
      10,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Int, QMetaType::Int,    3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BindingCurveDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BindingCurveDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->outputValue((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->saveChanges(); break;
        case 2: _t->updateValues(); break;
        case 3: _t->limitValueChanged(); break;
        case 4: _t->sliderChanged(); break;
        case 5: _t->resetCurve(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BindingCurveDialog::*)(double , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BindingCurveDialog::outputValue)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BindingCurveDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_BindingCurveDialog.data,
    qt_meta_data_BindingCurveDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BindingCurveDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BindingCurveDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BindingCurveDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BindingCurveDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void BindingCurveDialog::outputValue(double _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

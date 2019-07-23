/****************************************************************************
** Meta object code from reading C++ file 'panelsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/dialogs/panelsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panelsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PanelsDialog_t {
    QByteArrayData data[14];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PanelsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PanelsDialog_t qt_meta_stringdata_PanelsDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PanelsDialog"
QT_MOC_LITERAL(1, 13, 8), // "newPanel"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "renamePanel"
QT_MOC_LITERAL(4, 35, 4), // "name"
QT_MOC_LITERAL(5, 40, 7), // "newName"
QT_MOC_LITERAL(6, 48, 9), // "copyPanel"
QT_MOC_LITERAL(7, 58, 11), // "removePanel"
QT_MOC_LITERAL(8, 70, 9), // "loadPanel"
QT_MOC_LITERAL(9, 80, 16), // "refreshPanelList"
QT_MOC_LITERAL(10, 97, 15), // "newPanelClicked"
QT_MOC_LITERAL(11, 113, 16), // "copyPanelClicked"
QT_MOC_LITERAL(12, 130, 18), // "removePanelClicked"
QT_MOC_LITERAL(13, 149, 18) // "selectPanelClicked"

    },
    "PanelsDialog\0newPanel\0\0renamePanel\0"
    "name\0newName\0copyPanel\0removePanel\0"
    "loadPanel\0refreshPanelList\0newPanelClicked\0"
    "copyPanelClicked\0removePanelClicked\0"
    "selectPanelClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PanelsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    2,   65,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       7,    1,   73,    2, 0x06 /* Public */,
       8,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   79,    2, 0x0a /* Public */,
      10,    0,   80,    2, 0x0a /* Public */,
      11,    0,   81,    2, 0x0a /* Public */,
      12,    0,   82,    2, 0x0a /* Public */,
      13,    0,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PanelsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PanelsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newPanel(); break;
        case 1: _t->renamePanel((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->copyPanel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->removePanel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->loadPanel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->refreshPanelList(); break;
        case 6: _t->newPanelClicked(); break;
        case 7: _t->copyPanelClicked(); break;
        case 8: _t->removePanelClicked(); break;
        case 9: _t->selectPanelClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PanelsDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PanelsDialog::newPanel)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PanelsDialog::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PanelsDialog::renamePanel)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PanelsDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PanelsDialog::copyPanel)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PanelsDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PanelsDialog::removePanel)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PanelsDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PanelsDialog::loadPanel)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PanelsDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_PanelsDialog.data,
    qt_meta_data_PanelsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PanelsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PanelsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PanelsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PanelsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void PanelsDialog::newPanel()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PanelsDialog::renamePanel(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PanelsDialog::copyPanel(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PanelsDialog::removePanel(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PanelsDialog::loadPanel(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

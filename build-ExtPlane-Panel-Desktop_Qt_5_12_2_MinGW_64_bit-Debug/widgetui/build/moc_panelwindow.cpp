/****************************************************************************
** Meta object code from reading C++ file 'panelwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/panelwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panelwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PanelWindow_t {
    QByteArrayData data[64];
    char stringdata0[747];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PanelWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PanelWindow_t qt_meta_stringdata_PanelWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PanelWindow"
QT_MOC_LITERAL(1, 12, 8), // "tickTime"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 2), // "dt"
QT_MOC_LITERAL(4, 25, 5), // "total"
QT_MOC_LITERAL(5, 31, 13), // "panelsChanged"
QT_MOC_LITERAL(6, 45, 17), // "connectionMessage"
QT_MOC_LITERAL(7, 63, 3), // "txt"
QT_MOC_LITERAL(8, 67, 13), // "itemDestroyed"
QT_MOC_LITERAL(9, 81, 3), // "obj"
QT_MOC_LITERAL(10, 85, 7), // "addItem"
QT_MOC_LITERAL(11, 93, 10), // "PanelItem*"
QT_MOC_LITERAL(12, 104, 4), // "item"
QT_MOC_LITERAL(13, 109, 8), // "itemName"
QT_MOC_LITERAL(14, 118, 20), // "panelRotationChanged"
QT_MOC_LITERAL(15, 139, 1), // "r"
QT_MOC_LITERAL(16, 141, 17), // "fullscreenChanged"
QT_MOC_LITERAL(17, 159, 2), // "fs"
QT_MOC_LITERAL(18, 162, 16), // "setServerAddress"
QT_MOC_LITERAL(19, 179, 4), // "host"
QT_MOC_LITERAL(20, 184, 15), // "disableBlanking"
QT_MOC_LITERAL(21, 200, 11), // "setEditMode"
QT_MOC_LITERAL(22, 212, 2), // "em"
QT_MOC_LITERAL(23, 215, 17), // "showAddItemDialog"
QT_MOC_LITERAL(24, 233, 18), // "setProfileSettings"
QT_MOC_LITERAL(25, 252, 10), // "QSettings*"
QT_MOC_LITERAL(26, 263, 8), // "settings"
QT_MOC_LITERAL(27, 272, 11), // "saveProfile"
QT_MOC_LITERAL(28, 284, 8), // "filename"
QT_MOC_LITERAL(29, 293, 13), // "saveProfileAs"
QT_MOC_LITERAL(30, 307, 11), // "loadProfile"
QT_MOC_LITERAL(31, 319, 10), // "newProfile"
QT_MOC_LITERAL(32, 330, 12), // "showHardware"
QT_MOC_LITERAL(33, 343, 12), // "showSettings"
QT_MOC_LITERAL(34, 356, 10), // "showPanels"
QT_MOC_LITERAL(35, 367, 8), // "editItem"
QT_MOC_LITERAL(36, 376, 16), // "panelItemChanged"
QT_MOC_LITERAL(37, 393, 4), // "quit"
QT_MOC_LITERAL(38, 398, 20), // "clientDataRefChanged"
QT_MOC_LITERAL(39, 419, 4), // "name"
QT_MOC_LITERAL(40, 424, 3), // "val"
QT_MOC_LITERAL(41, 428, 18), // "getPanelGroupNames"
QT_MOC_LITERAL(42, 447, 13), // "getPanelNames"
QT_MOC_LITERAL(43, 461, 16), // "saveCurrentPanel"
QT_MOC_LITERAL(44, 478, 9), // "loadPanel"
QT_MOC_LITERAL(45, 488, 9), // "copyPanel"
QT_MOC_LITERAL(46, 498, 11), // "removePanel"
QT_MOC_LITERAL(47, 510, 8), // "newPanel"
QT_MOC_LITERAL(48, 519, 16), // "newPanelWithName"
QT_MOC_LITERAL(49, 536, 7), // "newName"
QT_MOC_LITERAL(50, 544, 10), // "clearPanel"
QT_MOC_LITERAL(51, 555, 9), // "prevPanel"
QT_MOC_LITERAL(52, 565, 9), // "nextPanel"
QT_MOC_LITERAL(53, 575, 11), // "existsPanel"
QT_MOC_LITERAL(54, 587, 4), // "tick"
QT_MOC_LITERAL(55, 592, 23), // "setInterpolationEnabled"
QT_MOC_LITERAL(56, 616, 7), // "enabled"
QT_MOC_LITERAL(57, 624, 19), // "setAntialiasEnabled"
QT_MOC_LITERAL(58, 644, 20), // "setAutoPanelsEnabled"
QT_MOC_LITERAL(59, 665, 21), // "setAdjustPowerEnabled"
QT_MOC_LITERAL(60, 687, 22), // "setPanelUpdateInterval"
QT_MOC_LITERAL(61, 710, 11), // "newInterval"
QT_MOC_LITERAL(62, 722, 18), // "setDefaultFontSize"
QT_MOC_LITERAL(63, 741, 5) // "newFs"

    },
    "PanelWindow\0tickTime\0\0dt\0total\0"
    "panelsChanged\0connectionMessage\0txt\0"
    "itemDestroyed\0obj\0addItem\0PanelItem*\0"
    "item\0itemName\0panelRotationChanged\0r\0"
    "fullscreenChanged\0fs\0setServerAddress\0"
    "host\0disableBlanking\0setEditMode\0em\0"
    "showAddItemDialog\0setProfileSettings\0"
    "QSettings*\0settings\0saveProfile\0"
    "filename\0saveProfileAs\0loadProfile\0"
    "newProfile\0showHardware\0showSettings\0"
    "showPanels\0editItem\0panelItemChanged\0"
    "quit\0clientDataRefChanged\0name\0val\0"
    "getPanelGroupNames\0getPanelNames\0"
    "saveCurrentPanel\0loadPanel\0copyPanel\0"
    "removePanel\0newPanel\0newPanelWithName\0"
    "newName\0clearPanel\0prevPanel\0nextPanel\0"
    "existsPanel\0tick\0setInterpolationEnabled\0"
    "enabled\0setAntialiasEnabled\0"
    "setAutoPanelsEnabled\0setAdjustPowerEnabled\0"
    "setPanelUpdateInterval\0newInterval\0"
    "setDefaultFontSize\0newFs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PanelWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  254,    2, 0x06 /* Public */,
       5,    0,  259,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  260,    2, 0x0a /* Public */,
       8,    1,  263,    2, 0x0a /* Public */,
      10,    1,  266,    2, 0x0a /* Public */,
      10,    1,  269,    2, 0x0a /* Public */,
      14,    1,  272,    2, 0x0a /* Public */,
      16,    1,  275,    2, 0x0a /* Public */,
      18,    1,  278,    2, 0x0a /* Public */,
      20,    0,  281,    2, 0x0a /* Public */,
      21,    1,  282,    2, 0x0a /* Public */,
      23,    0,  285,    2, 0x0a /* Public */,
      24,    1,  286,    2, 0x0a /* Public */,
      27,    0,  289,    2, 0x0a /* Public */,
      27,    1,  290,    2, 0x0a /* Public */,
      29,    0,  293,    2, 0x0a /* Public */,
      30,    0,  294,    2, 0x0a /* Public */,
      30,    1,  295,    2, 0x0a /* Public */,
      31,    0,  298,    2, 0x0a /* Public */,
      32,    0,  299,    2, 0x0a /* Public */,
      33,    0,  300,    2, 0x0a /* Public */,
      34,    0,  301,    2, 0x0a /* Public */,
      35,    1,  302,    2, 0x0a /* Public */,
      35,    0,  305,    2, 0x2a /* Public | MethodCloned */,
      36,    1,  306,    2, 0x0a /* Public */,
      36,    0,  309,    2, 0x2a /* Public | MethodCloned */,
      37,    0,  310,    2, 0x0a /* Public */,
      38,    2,  311,    2, 0x0a /* Public */,
      38,    2,  316,    2, 0x0a /* Public */,
      41,    0,  321,    2, 0x08 /* Private */,
      42,    0,  322,    2, 0x08 /* Private */,
      43,    0,  323,    2, 0x08 /* Private */,
      44,    1,  324,    2, 0x08 /* Private */,
      45,    1,  327,    2, 0x08 /* Private */,
      46,    1,  330,    2, 0x08 /* Private */,
      47,    0,  333,    2, 0x08 /* Private */,
      48,    1,  334,    2, 0x08 /* Private */,
      50,    0,  337,    2, 0x08 /* Private */,
      51,    0,  338,    2, 0x08 /* Private */,
      52,    0,  339,    2, 0x08 /* Private */,
      53,    1,  340,    2, 0x08 /* Private */,
      54,    0,  343,    2, 0x08 /* Private */,
      55,    1,  344,    2, 0x08 /* Private */,
      57,    1,  347,    2, 0x08 /* Private */,
      58,    1,  350,    2, 0x08 /* Private */,
      59,    1,  353,    2, 0x08 /* Private */,
      60,    1,  356,    2, 0x08 /* Private */,
      62,    1,  359,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Int,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QObjectStar,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   39,   40,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,   39,   40,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   39,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Void, QMetaType::Double,   61,
    QMetaType::Void, QMetaType::Double,   63,

       0        // eod
};

void PanelWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PanelWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tickTime((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->panelsChanged(); break;
        case 2: _t->connectionMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->itemDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->addItem((*reinterpret_cast< PanelItem*(*)>(_a[1]))); break;
        case 5: _t->addItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->panelRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->fullscreenChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setServerAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->disableBlanking(); break;
        case 10: _t->setEditMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->showAddItemDialog(); break;
        case 12: _t->setProfileSettings((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 13: _t->saveProfile(); break;
        case 14: _t->saveProfile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->saveProfileAs(); break;
        case 16: _t->loadProfile(); break;
        case 17: _t->loadProfile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->newProfile(); break;
        case 19: _t->showHardware(); break;
        case 20: _t->showSettings(); break;
        case 21: _t->showPanels(); break;
        case 22: _t->editItem((*reinterpret_cast< PanelItem*(*)>(_a[1]))); break;
        case 23: _t->editItem(); break;
        case 24: _t->panelItemChanged((*reinterpret_cast< PanelItem*(*)>(_a[1]))); break;
        case 25: _t->panelItemChanged(); break;
        case 26: _t->quit(); break;
        case 27: _t->clientDataRefChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 28: _t->clientDataRefChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 29: { QStringList _r = _t->getPanelGroupNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 30: { QStringList _r = _t->getPanelNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->saveCurrentPanel(); break;
        case 32: _t->loadPanel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: _t->copyPanel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->removePanel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: { QString _r = _t->newPanel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 36: { QString _r = _t->newPanelWithName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->clearPanel(); break;
        case 38: _t->prevPanel(); break;
        case 39: _t->nextPanel(); break;
        case 40: { bool _r = _t->existsPanel((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 41: _t->tick(); break;
        case 42: _t->setInterpolationEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->setAntialiasEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->setAutoPanelsEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->setAdjustPowerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->setPanelUpdateInterval((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 47: _t->setDefaultFontSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSettings* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PanelWindow::*)(double , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PanelWindow::tickTime)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PanelWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PanelWindow::panelsChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PanelWindow::staticMetaObject = { {
    &QGraphicsView::staticMetaObject,
    qt_meta_stringdata_PanelWindow.data,
    qt_meta_data_PanelWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PanelWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PanelWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PanelWindow.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int PanelWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    }
    return _id;
}

// SIGNAL 0
void PanelWindow::tickTime(double _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PanelWindow::panelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'main.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../main.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LaunchyWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x0a,
      48,   15,   14,   14, 0x0a,
      76,   15,   14,   14, 0x0a,
     106,   15,   14,   14, 0x0a,
     135,   15,   14,   14, 0x0a,
     167,   15,   14,   14, 0x0a,
     204,   14,   14,   14, 0x0a,
     224,   14,   14,   14, 0x0a,
     235,   14,   14,   14, 0x0a,
     251,   14,   14,   14, 0x0a,
     271,  265,   14,   14, 0x0a,
     297,  290,   14,   14, 0x0a,
     319,   14,   14,   14, 0x0a,
     349,   14,   14,   14, 0x0a,
     364,   15,   14,   14, 0x0a,
     401,   15,   14,   14, 0x0a,
     427,   15,   14,   14, 0x0a,
     464,  458,   14,   14, 0x0a,
     492,   15,   14,   14, 0x0a,
     530,  265,   14,   14, 0x0a,
     551,   14,   14,   14, 0x0a,
     565,   14,   14,   14, 0x0a,
     595,  580,   14,   14, 0x0a,
     627,  620,   14,   14, 0x0a,
     680,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LaunchyWidget[] = {
    "LaunchyWidget\0\0event\0focusInEvent(QFocusEvent*)\0"
    "focusOutEvent(QFocusEvent*)\0"
    "mousePressEvent(QMouseEvent*)\0"
    "mouseMoveEvent(QMouseEvent*)\0"
    "mouseReleaseEvent(QMouseEvent*)\0"
    "contextMenuEvent(QContextMenuEvent*)\0"
    "showOptionsDialog()\0onHotkey()\0"
    "updateTimeout()\0dropTimeout()\0level\0"
    "setOpaqueness(int)\0result\0"
    "httpGetFinished(bool)\0"
    "catalogProgressUpdated(float)\0"
    "catalogBuilt()\0inputMethodEvent(QInputMethodEvent*)\0"
    "keyPressEvent(QKeyEvent*)\0"
    "inputKeyPressEvent(QKeyEvent*)\0index\0"
    "alternativesRowChanged(int)\0"
    "alternativesKeyPressEvent(QKeyEvent*)\0"
    "setFadeLevel(double)\0showLaunchy()\0"
    "buildCatalog()\0itemIndex,icon\0"
    "iconExtracted(int,QIcon)\0reason\0"
    "trayIconActivated(QSystemTrayIcon::ActivationReason)\0"
    "reloadSkin()\0"
};

void LaunchyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LaunchyWidget *_t = static_cast<LaunchyWidget *>(_o);
        switch (_id) {
        case 0: _t->focusInEvent((*reinterpret_cast< QFocusEvent*(*)>(_a[1]))); break;
        case 1: _t->focusOutEvent((*reinterpret_cast< QFocusEvent*(*)>(_a[1]))); break;
        case 2: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 6: _t->showOptionsDialog(); break;
        case 7: _t->onHotkey(); break;
        case 8: _t->updateTimeout(); break;
        case 9: _t->dropTimeout(); break;
        case 10: _t->setOpaqueness((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->httpGetFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->catalogProgressUpdated((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 13: _t->catalogBuilt(); break;
        case 14: _t->inputMethodEvent((*reinterpret_cast< QInputMethodEvent*(*)>(_a[1]))); break;
        case 15: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 16: _t->inputKeyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 17: _t->alternativesRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->alternativesKeyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 19: _t->setFadeLevel((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->showLaunchy(); break;
        case 21: _t->buildCatalog(); break;
        case 22: _t->iconExtracted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QIcon(*)>(_a[2]))); break;
        case 23: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 24: _t->reloadSkin(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LaunchyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LaunchyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LaunchyWidget,
      qt_meta_data_LaunchyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LaunchyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LaunchyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LaunchyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LaunchyWidget))
        return static_cast<void*>(const_cast< LaunchyWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LaunchyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

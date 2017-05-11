/****************************************************************************
** Meta object code from reading C++ file 'gui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x0a,
      14,    4,    4,    4, 0x0a,
      29,   23,    4,    4, 0x0a,
      57,   23,    4,    4, 0x0a,
      75,    4,    4,    4, 0x0a,
      89,    4,    4,    4, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Gui[] = {
    "Gui\0\0newRow()\0remRow()\0event\0"
    "dragEnter(QDragEnterEvent*)\0"
    "drop(QDropEvent*)\0makeDefault()\0"
    "clearDefault()\0"
};

void Gui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Gui *_t = static_cast<Gui *>(_o);
        switch (_id) {
        case 0: _t->newRow(); break;
        case 1: _t->remRow(); break;
        case 2: _t->dragEnter((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 3: _t->drop((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 4: _t->makeDefault(); break;
        case 5: _t->clearDefault(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui,
      qt_meta_data_Gui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui))
        return static_cast<void*>(const_cast< Gui*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

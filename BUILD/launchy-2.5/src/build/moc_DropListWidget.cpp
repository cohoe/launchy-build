/****************************************************************************
** Meta object code from reading C++ file 'DropListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../common/DropListWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DropListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DropListWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x05,
      50,   16,   15,   15, 0x05,
      76,   16,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_DropListWidget[] = {
    "DropListWidget\0\0event\0dragEnter(QDragEnterEvent*)\0"
    "dragMove(QDragMoveEvent*)\0drop(QDropEvent*)\0"
};

void DropListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DropListWidget *_t = static_cast<DropListWidget *>(_o);
        switch (_id) {
        case 0: _t->dragEnter((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 1: _t->dragMove((*reinterpret_cast< QDragMoveEvent*(*)>(_a[1]))); break;
        case 2: _t->drop((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DropListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DropListWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_DropListWidget,
      qt_meta_data_DropListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DropListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DropListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DropListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DropListWidget))
        return static_cast<void*>(const_cast< DropListWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int DropListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DropListWidget::dragEnter(QDragEnterEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DropListWidget::dragMove(QDragMoveEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DropListWidget::drop(QDropEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

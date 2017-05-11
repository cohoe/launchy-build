/****************************************************************************
** Meta object code from reading C++ file 'options.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../options.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'options.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OptionsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      24,   14,   14,   14, 0x0a,
      39,   33,   14,   14, 0x0a,
      71,   67,   14,   14, 0x0a,
      95,   87,   14,   14, 0x0a,
     120,  116,   14,   14, 0x0a,
     144,  139,   14,   14, 0x0a,
     186,  180,   14,   14, 0x0a,
     220,  180,   14,   14, 0x0a,
     246,  244,   14,   14, 0x0a,
     270,  244,   14,   14, 0x0a,
     295,  139,   14,   14, 0x0a,
     333,  244,   14,   14, 0x0a,
     359,  244,   14,   14, 0x0a,
     386,   14,   14,   14, 0x0a,
     410,   14,   14,   14, 0x0a,
     434,   14,   14,   14, 0x0a,
     455,   14,   14,   14, 0x0a,
     481,   14,   14,   14, 0x0a,
     496,   14,   14,   14, 0x0a,
     519,  116,   14,   14, 0x0a,
     538,   33,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OptionsDialog[] = {
    "OptionsDialog\0\0accept()\0reject()\0state\0"
    "autoUpdateCheckChanged(int)\0tab\0"
    "tabChanged(int)\0newSkin\0skinChanged(QString)\0"
    "row\0dirRowChanged(int)\0item\0"
    "catDirItemChanged(QListWidgetItem*)\0"
    "event\0catDirDragEnter(QDragEnterEvent*)\0"
    "catDirDrop(QDropEvent*)\0c\0"
    "catDirPlusClicked(bool)\0"
    "catDirMinusClicked(bool)\0"
    "catTypesItemChanged(QListWidgetItem*)\0"
    "catTypesPlusClicked(bool)\0"
    "catTypesMinusClicked(bool)\0"
    "catTypesDirChanged(int)\0catTypesExeChanged(int)\0"
    "catDepthChanged(int)\0catProgressUpdated(float)\0"
    "catalogBuilt()\0catRescanClicked(bool)\0"
    "pluginChanged(int)\0"
    "pluginItemChanged(QListWidgetItem*)\0"
};

void OptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OptionsDialog *_t = static_cast<OptionsDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: _t->autoUpdateCheckChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->skinChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->dirRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->catDirItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->catDirDragEnter((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 8: _t->catDirDrop((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 9: _t->catDirPlusClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->catDirMinusClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->catTypesItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->catTypesPlusClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->catTypesMinusClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->catTypesDirChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->catTypesExeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->catDepthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->catProgressUpdated((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->catalogBuilt(); break;
        case 19: _t->catRescanClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->pluginChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->pluginItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OptionsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OptionsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OptionsDialog,
      qt_meta_data_OptionsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OptionsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsDialog))
        return static_cast<void*>(const_cast< OptionsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int OptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

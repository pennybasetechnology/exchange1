/****************************************************************************
** Meta object code from reading C++ file 'senddogecoin.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../exchange/senddogecoin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'senddogecoin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_senddogecoin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      41,   13,   13,   13, 0x08,
      77,   72,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_senddogecoin[] = {
    "senddogecoin\0\0on_ok_pushButton_clicked()\0"
    "on_cancel_pushButton_clicked()\0arg1\0"
    "on_lineEdit_textChanged(QString)\0"
};

void senddogecoin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        senddogecoin *_t = static_cast<senddogecoin *>(_o);
        switch (_id) {
        case 0: _t->on_ok_pushButton_clicked(); break;
        case 1: _t->on_cancel_pushButton_clicked(); break;
        case 2: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData senddogecoin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject senddogecoin::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_senddogecoin,
      qt_meta_data_senddogecoin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &senddogecoin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *senddogecoin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *senddogecoin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_senddogecoin))
        return static_cast<void*>(const_cast< senddogecoin*>(this));
    return QDialog::qt_metacast(_clname);
}

int senddogecoin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

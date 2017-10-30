/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../exchange/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   12,   11,   11, 0x08,
      55,   12,   11,   11, 0x08,
      85,   11,   11,   11, 0x08,
     114,   11,   11,   11, 0x08,
     145,   11,   11,   11, 0x08,
     183,  178,   11,   11, 0x08,
     230,  178,   11,   11, 0x08,
     276,   11,   11,   11, 0x08,
     308,   11,   11,   11, 0x08,
     341,   11,   11,   11, 0x08,
     374,   11,   11,   11, 0x08,
     409,  178,   11,   11, 0x08,
     447,   11,   11,   11, 0x08,
     484,   11,   11,   11, 0x08,
     524,   11,   11,   11, 0x08,
     562,   11,   11,   11, 0x08,
     603,   11,   11,   11, 0x08,
     641,   11,   11,   11, 0x08,
     682,   11,   11,   11, 0x08,
     719,   11,   11,   11, 0x08,
     752,   11,   11,   11, 0x08,
     794,   11,   11,   11, 0x08,
     839,   11,   11,   11, 0x08,
     877,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0pReply\0"
    "bitcoinlitecoinrate(QNetworkReply*)\0"
    "replyfinished(QNetworkReply*)\0"
    "on_home_pushButton_clicked()\0"
    "on_wallet_pushButton_clicked()\0"
    "on_exchange_pushButton_clicked()\0arg1\0"
    "on_select_exchange_comboBox_activated(QString)\0"
    "on_select_recieve_comboBox_activated(QString)\0"
    "on_bitcoin_pushButton_clicked()\0"
    "on_litecoin_pushButton_clicked()\0"
    "on_dogecoin_pushButton_clicked()\0"
    "on_exchange_pushButton_2_clicked()\0"
    "on_doubleSpinBox_valueChanged(double)\0"
    "on_send_bitcoin_pushButton_clicked()\0"
    "on_recieve_bitcoin_pushButton_clicked()\0"
    "on_send_litecoin_pushButton_clicked()\0"
    "on_recieve_litecoin_pushButton_clicked()\0"
    "on_send_dogecoin_pushButton_clicked()\0"
    "on_recieve_docecoin_pushButton_clicked()\0"
    "on_bitcoin_cash_pushButton_clicked()\0"
    "on_ethereum_pushButton_clicked()\0"
    "on_send_bitcoin_cash_pushButton_clicked()\0"
    "on_recieve_bitcoin_cash_pushButton_clicked()\0"
    "on_send_ethereum_pushButton_clicked()\0"
    "on_recieve_ethereum_pushButton_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->bitcoinlitecoinrate((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: _t->replyfinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->on_home_pushButton_clicked(); break;
        case 3: _t->on_wallet_pushButton_clicked(); break;
        case 4: _t->on_exchange_pushButton_clicked(); break;
        case 5: _t->on_select_exchange_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_select_recieve_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_bitcoin_pushButton_clicked(); break;
        case 8: _t->on_litecoin_pushButton_clicked(); break;
        case 9: _t->on_dogecoin_pushButton_clicked(); break;
        case 10: _t->on_exchange_pushButton_2_clicked(); break;
        case 11: _t->on_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->on_send_bitcoin_pushButton_clicked(); break;
        case 13: _t->on_recieve_bitcoin_pushButton_clicked(); break;
        case 14: _t->on_send_litecoin_pushButton_clicked(); break;
        case 15: _t->on_recieve_litecoin_pushButton_clicked(); break;
        case 16: _t->on_send_dogecoin_pushButton_clicked(); break;
        case 17: _t->on_recieve_docecoin_pushButton_clicked(); break;
        case 18: _t->on_bitcoin_cash_pushButton_clicked(); break;
        case 19: _t->on_ethereum_pushButton_clicked(); break;
        case 20: _t->on_send_bitcoin_cash_pushButton_clicked(); break;
        case 21: _t->on_recieve_bitcoin_cash_pushButton_clicked(); break;
        case 22: _t->on_send_ethereum_pushButton_clicked(); break;
        case 23: _t->on_recieve_ethereum_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

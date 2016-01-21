/****************************************************************************
** Meta object code from reading C++ file 'blazecoingui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/blazecoingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blazecoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BlazecoinGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x0a,
      62,   43,   13,   13, 0x0a,
      91,   84,   13,   13, 0x0a,
     140,  116,   13,   13, 0x0a,
     196,  176,   13,   13, 0x2a,
     246,  226,   13,   13, 0x0a,
     274,  267,   13,   13, 0x0a,
     293,   13,   13,   13, 0x08,
     313,   13,   13,   13, 0x08,
     339,   13,   13,   13, 0x08,
     363,   13,   13,   13, 0x08,
     382,   13,   13,   13, 0x08,
     400,   13,   13,   13, 0x08,
     422,   13,   13,   13, 0x08,
     445,   13,   13,   13, 0x08,
     470,  465,   13,   13, 0x08,
     498,   13,   13,   13, 0x28,
     519,  465,   13,   13, 0x08,
     549,   13,   13,   13, 0x28,
     572,   13,   13,   13, 0x08,
     589,   13,   13,   13, 0x08,
     611,  604,   13,   13, 0x08,
     678,  664,   13,   13, 0x08,
     719,   84,   13,   13, 0x08,
     739,   13,   13,   13, 0x08,
     754,   13,   13,   13, 0x08,
     773,   13,   13,   13, 0x08,
     802,  788,   13,   13, 0x08,
     830,   13,   13,   13, 0x28,
     854,   13,   13,   13, 0x08,
     869,   13,   13,   13, 0x08,
     886,   13,   13,   13, 0x08,
     904,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BlazecoinGUI[] = {
    "BlazecoinGUI\0\0count\0setNumConnections(int)\0"
    "count,nTotalBlocks\0setNumBlocks(int,int)\0"
    "status\0setEncryptionStatus(int)\0"
    "title,message,style,ret\0"
    "message(QString,QString,uint,bool*)\0"
    "title,message,style\0message(QString,QString,uint)\0"
    "nFeeRequired,payFee\0askFee(qint64,bool*)\0"
    "strURI\0handleURI(QString)\0menuFileRequested()\0"
    "menuOperationsRequested()\0"
    "menuSettingsRequested()\0gotoOverviewPage()\0"
    "gotoHistoryPage()\0gotoAddressBookPage()\0"
    "gotoReceiveCoinsPage()\0gotoSendCoinsPage()\0"
    "addr\0gotoSignMessageTab(QString)\0"
    "gotoSignMessageTab()\0gotoVerifyMessageTab(QString)\0"
    "gotoVerifyMessageTab()\0optionsClicked()\0"
    "aboutClicked()\0reason\0"
    "trayIconActivated(QSystemTrayIcon::ActivationReason)\0"
    "parent,start,\0incomingTransaction(QModelIndex,int,int)\0"
    "encryptWallet(bool)\0backupWallet()\0"
    "changePassphrase()\0unlockWallet()\0"
    "fToggleHidden\0showNormalIfMinimized(bool)\0"
    "showNormalIfMinimized()\0toggleHidden()\0"
    "detectShutdown()\0onMiningClicked()\0"
    "on_bHelp_clicked()\0"
};

void BlazecoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BlazecoinGUI *_t = static_cast<BlazecoinGUI *>(_o);
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool*(*)>(_a[4]))); break;
        case 4: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 5: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 6: _t->handleURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->menuFileRequested(); break;
        case 8: _t->menuOperationsRequested(); break;
        case 9: _t->menuSettingsRequested(); break;
        case 10: _t->gotoOverviewPage(); break;
        case 11: _t->gotoHistoryPage(); break;
        case 12: _t->gotoAddressBookPage(); break;
        case 13: _t->gotoReceiveCoinsPage(); break;
        case 14: _t->gotoSendCoinsPage(); break;
        case 15: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->gotoSignMessageTab(); break;
        case 17: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->gotoVerifyMessageTab(); break;
        case 19: _t->optionsClicked(); break;
        case 20: _t->aboutClicked(); break;
        case 21: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 22: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 23: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->backupWallet(); break;
        case 25: _t->changePassphrase(); break;
        case 26: _t->unlockWallet(); break;
        case 27: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->showNormalIfMinimized(); break;
        case 29: _t->toggleHidden(); break;
        case 30: _t->detectShutdown(); break;
        case 31: _t->onMiningClicked(); break;
        case 32: _t->on_bHelp_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BlazecoinGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BlazecoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BlazecoinGUI,
      qt_meta_data_BlazecoinGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BlazecoinGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BlazecoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BlazecoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BlazecoinGUI))
        return static_cast<void*>(const_cast< BlazecoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BlazecoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

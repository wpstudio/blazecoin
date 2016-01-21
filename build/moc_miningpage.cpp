/****************************************************************************
** Meta object code from reading C++ file 'miningpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/miningpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'miningpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MiningPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      42,   20,   11,   11, 0x0a,
      85,   68,   11,   11, 0x2a,
     106,   11,   11,   11, 0x0a,
     120,   11,   11,   11, 0x0a,
     138,   11,   11,   11, 0x08,
     164,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MiningPage[] = {
    "MiningPage\0\0clear()\0category,message,html\0"
    "message(int,QString,bool)\0category,message\0"
    "message(int,QString)\0scrollToEnd()\0"
    "slotUpdateSpeed()\0on_bStartMining_clicked()\0"
    "on_bStopMining_clicked()\0"
};

void MiningPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MiningPage *_t = static_cast<MiningPage *>(_o);
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->scrollToEnd(); break;
        case 4: _t->slotUpdateSpeed(); break;
        case 5: _t->on_bStartMining_clicked(); break;
        case 6: _t->on_bStopMining_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MiningPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MiningPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MiningPage,
      qt_meta_data_MiningPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MiningPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MiningPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MiningPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MiningPage))
        return static_cast<void*>(const_cast< MiningPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int MiningPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

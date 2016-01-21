/****************************************************************************
** Meta object code from reading C++ file 'verifymessagepage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/verifymessagepage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'verifymessagepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VerifyMessagePage[] = {

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
      19,   18,   18,   18, 0x08,
      53,   18,   18,   18, 0x08,
      89,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VerifyMessagePage[] = {
    "VerifyMessagePage\0\0on_addressBookButton_VM_clicked()\0"
    "on_verifyMessageButton_VM_clicked()\0"
    "on_clearButton_VM_clicked()\0"
};

void VerifyMessagePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VerifyMessagePage *_t = static_cast<VerifyMessagePage *>(_o);
        switch (_id) {
        case 0: _t->on_addressBookButton_VM_clicked(); break;
        case 1: _t->on_verifyMessageButton_VM_clicked(); break;
        case 2: _t->on_clearButton_VM_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VerifyMessagePage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VerifyMessagePage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VerifyMessagePage,
      qt_meta_data_VerifyMessagePage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VerifyMessagePage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VerifyMessagePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VerifyMessagePage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VerifyMessagePage))
        return static_cast<void*>(const_cast< VerifyMessagePage*>(this));
    return QWidget::qt_metacast(_clname);
}

int VerifyMessagePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

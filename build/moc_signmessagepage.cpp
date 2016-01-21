/****************************************************************************
** Meta object code from reading C++ file 'signmessagepage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/signmessagepage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signmessagepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SignMessagePage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      51,   16,   16,   16, 0x08,
      79,   16,   16,   16, 0x08,
     113,   16,   16,   16, 0x08,
     149,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SignMessagePage[] = {
    "SignMessagePage\0\0on_addressBookButton_SM_clicked()\0"
    "on_pasteButton_SM_clicked()\0"
    "on_signMessageButton_SM_clicked()\0"
    "on_copySignatureButton_SM_clicked()\0"
    "on_clearButton_SM_clicked()\0"
};

void SignMessagePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SignMessagePage *_t = static_cast<SignMessagePage *>(_o);
        switch (_id) {
        case 0: _t->on_addressBookButton_SM_clicked(); break;
        case 1: _t->on_pasteButton_SM_clicked(); break;
        case 2: _t->on_signMessageButton_SM_clicked(); break;
        case 3: _t->on_copySignatureButton_SM_clicked(); break;
        case 4: _t->on_clearButton_SM_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SignMessagePage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SignMessagePage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SignMessagePage,
      qt_meta_data_SignMessagePage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SignMessagePage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SignMessagePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SignMessagePage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SignMessagePage))
        return static_cast<void*>(const_cast< SignMessagePage*>(this));
    return QWidget::qt_metacast(_clname);
}

int SignMessagePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'pinky.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pinky.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pinky.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Pinky[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x08,
      23,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Pinky[] = {
    "Pinky\0\0seekForPlayer()\0DEBUG()\0"
};

void Pinky::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Pinky *_t = static_cast<Pinky *>(_o);
        switch (_id) {
        case 0: _t->seekForPlayer(); break;
        case 1: _t->DEBUG(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Pinky::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Pinky::staticMetaObject = {
    { &Ghost::staticMetaObject, qt_meta_stringdata_Pinky,
      qt_meta_data_Pinky, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Pinky::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Pinky::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Pinky::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Pinky))
        return static_cast<void*>(const_cast< Pinky*>(this));
    return Ghost::qt_metacast(_clname);
}

int Pinky::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Ghost::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

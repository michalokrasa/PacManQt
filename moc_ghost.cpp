/****************************************************************************
** Meta object code from reading C++ file 'ghost.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ghost.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ghost.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Ghost[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,
      22,    6,    6,    6, 0x05,
      35,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,    6,    6,    6, 0x0a,
      61,    6,    6,    6, 0x0a,
      76,    6,    6,    6, 0x0a,
      89,    6,    6,    6, 0x0a,
     102,    6,    6,    6, 0x0a,
     124,    6,    6,    6, 0x0a,
     136,    6,    6,    6, 0x0a,
     153,    6,    6,    6, 0x0a,
     163,    6,    6,    6, 0x0a,
     181,    6,    6,    6, 0x0a,
     196,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Ghost[] = {
    "Ghost\0\0playerCaught()\0ghostEaten()\0"
    "targetReached()\0restart()\0controlModes()\0"
    "controlDir()\0backToDuty()\0"
    "enterFrightenedMode()\0randMoves()\0"
    "isPlayerCaught()\0respawn()\0isTargetReached()\0"
    "hasBeenEaten()\0isOut()\0"
};

void Ghost::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Ghost *_t = static_cast<Ghost *>(_o);
        switch (_id) {
        case 0: _t->playerCaught(); break;
        case 1: _t->ghostEaten(); break;
        case 2: _t->targetReached(); break;
        case 3: _t->restart(); break;
        case 4: _t->controlModes(); break;
        case 5: _t->controlDir(); break;
        case 6: _t->backToDuty(); break;
        case 7: _t->enterFrightenedMode(); break;
        case 8: _t->randMoves(); break;
        case 9: _t->isPlayerCaught(); break;
        case 10: _t->respawn(); break;
        case 11: _t->isTargetReached(); break;
        case 12: _t->hasBeenEaten(); break;
        case 13: _t->isOut(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Ghost::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Ghost::staticMetaObject = {
    { &DynamicObject::staticMetaObject, qt_meta_stringdata_Ghost,
      qt_meta_data_Ghost, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Ghost::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Ghost::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Ghost::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ghost))
        return static_cast<void*>(const_cast< Ghost*>(this));
    return DynamicObject::qt_metacast(_clname);
}

int Ghost::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DynamicObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Ghost::playerCaught()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Ghost::ghostEaten()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Ghost::targetReached()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE

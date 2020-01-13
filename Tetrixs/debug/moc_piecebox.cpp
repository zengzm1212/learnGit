/****************************************************************************
** Meta object code from reading C++ file 'piecebox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Src/piece/piecebox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'piecebox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_pieceBox_t {
    QByteArrayData data[8];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pieceBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pieceBox_t qt_meta_stringdata_pieceBox = {
    {
QT_MOC_LITERAL(0, 0, 8), // "pieceBox"
QT_MOC_LITERAL(1, 9, 17), // "signal_needNewBox"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "signal_gameOver"
QT_MOC_LITERAL(4, 44, 16), // "slot_moveOneStep"
QT_MOC_LITERAL(5, 61, 15), // "slot_startTimer"
QT_MOC_LITERAL(6, 77, 7), // "timeSec"
QT_MOC_LITERAL(7, 85, 14) // "slot_stopTimer"

    },
    "pieceBox\0signal_needNewBox\0\0signal_gameOver\0"
    "slot_moveOneStep\0slot_startTimer\0"
    "timeSec\0slot_stopTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pieceBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void pieceBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pieceBox *_t = static_cast<pieceBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_needNewBox(); break;
        case 1: _t->signal_gameOver(); break;
        case 2: _t->slot_moveOneStep(); break;
        case 3: _t->slot_startTimer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slot_stopTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (pieceBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&pieceBox::signal_needNewBox)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pieceBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&pieceBox::signal_gameOver)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject pieceBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pieceBox.data,
      qt_meta_data_pieceBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *pieceBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pieceBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_pieceBox.stringdata0))
        return static_cast<void*>(const_cast< pieceBox*>(this));
    if (!strcmp(_clname, "QGraphicsItemGroup"))
        return static_cast< QGraphicsItemGroup*>(const_cast< pieceBox*>(this));
    return QObject::qt_metacast(_clname);
}

int pieceBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void pieceBox::signal_needNewBox()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void pieceBox::signal_gameOver()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

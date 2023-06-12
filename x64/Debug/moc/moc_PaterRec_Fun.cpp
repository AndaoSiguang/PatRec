/****************************************************************************
** Meta object code from reading C++ file 'PaterRec_Fun.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../PaterRec_Fun.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PaterRec_Fun.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PaterRec_Fun_t {
    QByteArrayData data[10];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PaterRec_Fun_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PaterRec_Fun_t qt_meta_stringdata_PaterRec_Fun = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PaterRec_Fun"
QT_MOC_LITERAL(1, 13, 9), // "getImgUrl"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "recStart"
QT_MOC_LITERAL(4, 33, 6), // "bool[]"
QT_MOC_LITERAL(5, 40, 9), // "isChecked"
QT_MOC_LITERAL(6, 50, 13), // "changeImgType"
QT_MOC_LITERAL(7, 64, 3), // "Mat"
QT_MOC_LITERAL(8, 68, 14), // "getFileImgName"
QT_MOC_LITERAL(9, 83, 9) // "outPutRec"

    },
    "PaterRec_Fun\0getImgUrl\0\0recStart\0"
    "bool[]\0isChecked\0changeImgType\0Mat\0"
    "getFileImgName\0outPutRec"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaterRec_Fun[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       6,    1,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   46,    2, 0x0a /* Public */,
       9,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void PaterRec_Fun::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaterRec_Fun *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getImgUrl(); break;
        case 1: _t->recStart((*reinterpret_cast< bool(*)[]>(_a[1]))); break;
        case 2: _t->changeImgType((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 3: _t->getFileImgName(); break;
        case 4: _t->outPutRec((*reinterpret_cast< bool(*)[]>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaterRec_Fun::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaterRec_Fun::getImgUrl)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PaterRec_Fun::*)(bool []);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaterRec_Fun::recStart)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PaterRec_Fun::*)(Mat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaterRec_Fun::changeImgType)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PaterRec_Fun::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_PaterRec_Fun.data,
    qt_meta_data_PaterRec_Fun,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PaterRec_Fun::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaterRec_Fun::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PaterRec_Fun.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int PaterRec_Fun::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void PaterRec_Fun::getImgUrl()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PaterRec_Fun::recStart(bool _t1[])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PaterRec_Fun::changeImgType(Mat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'PaterRec.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../PaterRec.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PaterRec.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PaterRec_t {
    QByteArrayData data[19];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PaterRec_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PaterRec_t qt_meta_stringdata_PaterRec = {
    {
QT_MOC_LITERAL(0, 0, 8), // "PaterRec"
QT_MOC_LITERAL(1, 9, 15), // "getReset_Signal"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "chooseImg"
QT_MOC_LITERAL(4, 36, 13), // "changeStrType"
QT_MOC_LITERAL(5, 50, 8), // "OpenFile"
QT_MOC_LITERAL(6, 59, 13), // "setTriChoosed"
QT_MOC_LITERAL(7, 73, 14), // "setRectChoosed"
QT_MOC_LITERAL(8, 88, 13), // "setCirChoosed"
QT_MOC_LITERAL(9, 102, 14), // "setPolyChoosed"
QT_MOC_LITERAL(10, 117, 12), // "resetClicked"
QT_MOC_LITERAL(11, 130, 10), // "appClikced"
QT_MOC_LITERAL(12, 141, 11), // "return_Null"
QT_MOC_LITERAL(13, 153, 7), // "emitUrl"
QT_MOC_LITERAL(14, 161, 8), // "QStr2Str"
QT_MOC_LITERAL(15, 170, 10), // "Mat2QImage"
QT_MOC_LITERAL(16, 181, 3), // "Mat"
QT_MOC_LITERAL(17, 185, 6), // "mImage"
QT_MOC_LITERAL(18, 192, 10) // "setImgNULL"

    },
    "PaterRec\0getReset_Signal\0\0chooseImg\0"
    "changeStrType\0OpenFile\0setTriChoosed\0"
    "setRectChoosed\0setCirChoosed\0"
    "setPolyChoosed\0resetClicked\0appClikced\0"
    "return_Null\0emitUrl\0QStr2Str\0Mat2QImage\0"
    "Mat\0mImage\0setImgNULL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaterRec[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    0,   95,    2, 0x0a /* Public */,
       9,    0,   96,    2, 0x0a /* Public */,
      10,    0,   97,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      12,    0,   99,    2, 0x0a /* Public */,
      13,    0,  100,    2, 0x0a /* Public */,
      14,    0,  101,    2, 0x0a /* Public */,
      15,    1,  102,    2, 0x0a /* Public */,
      18,    0,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,

       0        // eod
};

void PaterRec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaterRec *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getReset_Signal(); break;
        case 1: _t->chooseImg(); break;
        case 2: _t->changeStrType(); break;
        case 3: _t->OpenFile(); break;
        case 4: { bool _r = _t->setTriChoosed();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->setRectChoosed();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->setCirChoosed();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->setPolyChoosed();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->resetClicked(); break;
        case 9: _t->appClikced(); break;
        case 10: _t->return_Null(); break;
        case 11: _t->emitUrl(); break;
        case 12: _t->QStr2Str(); break;
        case 13: _t->Mat2QImage((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 14: _t->setImgNULL(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaterRec::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaterRec::getReset_Signal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PaterRec::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaterRec::chooseImg)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PaterRec::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaterRec::changeStrType)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PaterRec::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_PaterRec.data,
    qt_meta_data_PaterRec,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PaterRec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaterRec::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PaterRec.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int PaterRec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void PaterRec::getReset_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PaterRec::chooseImg()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PaterRec::changeStrType()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

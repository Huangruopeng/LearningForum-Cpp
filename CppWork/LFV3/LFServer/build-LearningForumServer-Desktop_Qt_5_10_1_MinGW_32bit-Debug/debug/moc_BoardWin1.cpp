/****************************************************************************
** Meta object code from reading C++ file 'BoardWin1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../LFServer/BoardWin1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BoardWin1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BoardWin_t {
    QByteArrayData data[12];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoardWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoardWin_t qt_meta_stringdata_BoardWin = {
    {
QT_MOC_LITERAL(0, 0, 8), // "BoardWin"
QT_MOC_LITERAL(1, 9, 21), // "on_listWidget_pressed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "index"
QT_MOC_LITERAL(4, 38, 23), // "on_listWidget_2_pressed"
QT_MOC_LITERAL(5, 62, 23), // "on_listWidget_3_pressed"
QT_MOC_LITERAL(6, 86, 23), // "on_listWidget_4_pressed"
QT_MOC_LITERAL(7, 110, 23), // "on_listWidget_5_pressed"
QT_MOC_LITERAL(8, 134, 23), // "on_listWidget_6_pressed"
QT_MOC_LITERAL(9, 158, 23), // "on_listWidget_7_pressed"
QT_MOC_LITERAL(10, 182, 23), // "on_listWidget_8_pressed"
QT_MOC_LITERAL(11, 206, 22) // "on_refresh_btn_clicked"

    },
    "BoardWin\0on_listWidget_pressed\0\0index\0"
    "on_listWidget_2_pressed\0on_listWidget_3_pressed\0"
    "on_listWidget_4_pressed\0on_listWidget_5_pressed\0"
    "on_listWidget_6_pressed\0on_listWidget_7_pressed\0"
    "on_listWidget_8_pressed\0on_refresh_btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoardWin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       5,    1,   65,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       7,    1,   71,    2, 0x08 /* Private */,
       8,    1,   74,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      10,    1,   80,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,

       0        // eod
};

void BoardWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BoardWin *_t = static_cast<BoardWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_listWidget_pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_listWidget_2_pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_listWidget_3_pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_listWidget_4_pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_listWidget_5_pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_listWidget_6_pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_listWidget_7_pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_listWidget_8_pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_refresh_btn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BoardWin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BoardWin.data,
      qt_meta_data_BoardWin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BoardWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoardWin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoardWin.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BoardWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

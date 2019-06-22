/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[385];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 34), // "on_comboCamera_currentIndexCh..."
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "index"
QT_MOC_LITERAL(4, 53, 23), // "on_sliderH_valueChanged"
QT_MOC_LITERAL(5, 77, 5), // "value"
QT_MOC_LITERAL(6, 83, 23), // "on_sliderV_valueChanged"
QT_MOC_LITERAL(7, 107, 25), // "on_slideZoom_valueChanged"
QT_MOC_LITERAL(8, 133, 32), // "on_cBoxTheme_currentIndexChanged"
QT_MOC_LITERAL(9, 166, 27), // "on_choBoxBackground_clicked"
QT_MOC_LITERAL(10, 194, 7), // "checked"
QT_MOC_LITERAL(11, 202, 21), // "on_chkBoxGrid_clicked"
QT_MOC_LITERAL(12, 224, 31), // "on_chkBoxAxisBackground_clicked"
QT_MOC_LITERAL(13, 256, 40), // "on_cBoxSelectionMode_currentI..."
QT_MOC_LITERAL(14, 297, 35), // "on_cBoxBarStyle_currentIndexC..."
QT_MOC_LITERAL(15, 333, 26), // "on_chkBoxItemLabel_clicked"
QT_MOC_LITERAL(16, 360, 24) // "on_chkBoxReverse_clicked"

    },
    "MainWindow\0on_comboCamera_currentIndexChanged\0"
    "\0index\0on_sliderH_valueChanged\0value\0"
    "on_sliderV_valueChanged\0"
    "on_slideZoom_valueChanged\0"
    "on_cBoxTheme_currentIndexChanged\0"
    "on_choBoxBackground_clicked\0checked\0"
    "on_chkBoxGrid_clicked\0"
    "on_chkBoxAxisBackground_clicked\0"
    "on_cBoxSelectionMode_currentIndexChanged\0"
    "on_cBoxBarStyle_currentIndexChanged\0"
    "on_chkBoxItemLabel_clicked\0"
    "on_chkBoxReverse_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    1,   77,    2, 0x08 /* Private */,
       6,    1,   80,    2, 0x08 /* Private */,
       7,    1,   83,    2, 0x08 /* Private */,
       8,    1,   86,    2, 0x08 /* Private */,
       9,    1,   89,    2, 0x08 /* Private */,
      11,    1,   92,    2, 0x08 /* Private */,
      12,    1,   95,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      14,    1,  101,    2, 0x08 /* Private */,
      15,    1,  104,    2, 0x08 /* Private */,
      16,    1,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_comboCamera_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_sliderH_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_sliderV_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_slideZoom_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_cBoxTheme_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_choBoxBackground_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_chkBoxGrid_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_chkBoxAxisBackground_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_cBoxSelectionMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_cBoxBarStyle_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_chkBoxItemLabel_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_chkBoxReverse_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

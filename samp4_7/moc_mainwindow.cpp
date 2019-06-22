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
    QByteArrayData data[21];
    char stringdata0[423];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "on_actListIni_triggered"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 26), // "on_actListInsert_triggered"
QT_MOC_LITERAL(4, 63, 26), // "on_actListDelete_triggered"
QT_MOC_LITERAL(5, 90, 25), // "on_actListClear_triggered"
QT_MOC_LITERAL(6, 116, 20), // "on_btnSelAll_clicked"
QT_MOC_LITERAL(7, 137, 21), // "on_btnSelNone_clicked"
QT_MOC_LITERAL(8, 159, 21), // "on_btnSelInvs_clicked"
QT_MOC_LITERAL(9, 181, 32), // "on_listWidget_currentItemChanged"
QT_MOC_LITERAL(10, 214, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(11, 231, 7), // "current"
QT_MOC_LITERAL(12, 239, 8), // "previous"
QT_MOC_LITERAL(13, 248, 26), // "on_actListAppend_triggered"
QT_MOC_LITERAL(14, 275, 22), // "on_actSelAll_triggered"
QT_MOC_LITERAL(15, 298, 23), // "on_actSelNone_triggered"
QT_MOC_LITERAL(16, 322, 23), // "on_actSelInvs_triggered"
QT_MOC_LITERAL(17, 346, 40), // "on_listWidget_customContextMe..."
QT_MOC_LITERAL(18, 387, 3), // "pos"
QT_MOC_LITERAL(19, 391, 25), // "on_toolBox_currentChanged"
QT_MOC_LITERAL(20, 417, 5) // "index"

    },
    "MainWindow\0on_actListIni_triggered\0\0"
    "on_actListInsert_triggered\0"
    "on_actListDelete_triggered\0"
    "on_actListClear_triggered\0"
    "on_btnSelAll_clicked\0on_btnSelNone_clicked\0"
    "on_btnSelInvs_clicked\0"
    "on_listWidget_currentItemChanged\0"
    "QListWidgetItem*\0current\0previous\0"
    "on_actListAppend_triggered\0"
    "on_actSelAll_triggered\0on_actSelNone_triggered\0"
    "on_actSelInvs_triggered\0"
    "on_listWidget_customContextMenuRequested\0"
    "pos\0on_toolBox_currentChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    2,   91,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,
      17,    1,  100,    2, 0x08 /* Private */,
      19,    1,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   18,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actListIni_triggered(); break;
        case 1: _t->on_actListInsert_triggered(); break;
        case 2: _t->on_actListDelete_triggered(); break;
        case 3: _t->on_actListClear_triggered(); break;
        case 4: _t->on_btnSelAll_clicked(); break;
        case 5: _t->on_btnSelNone_clicked(); break;
        case 6: _t->on_btnSelInvs_clicked(); break;
        case 7: _t->on_listWidget_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 8: _t->on_actListAppend_triggered(); break;
        case 9: _t->on_actSelAll_triggered(); break;
        case 10: _t->on_actSelNone_triggered(); break;
        case 11: _t->on_actSelInvs_triggered(); break;
        case 12: _t->on_listWidget_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->on_toolBox_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

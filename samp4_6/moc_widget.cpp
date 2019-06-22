/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[16];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 22), // "on_btnIniItems_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "on_btnClear_clicked"
QT_MOC_LITERAL(4, 51, 22), // "on_btnAddItems_clicked"
QT_MOC_LITERAL(5, 74, 18), // "on_btnIni2_clicked"
QT_MOC_LITERAL(6, 93, 32), // "on_comboBox1_currentIndexChanged"
QT_MOC_LITERAL(7, 126, 4), // "arg1"
QT_MOC_LITERAL(8, 131, 32), // "on_comboBox2_currentIndexChanged"
QT_MOC_LITERAL(9, 164, 25), // "on_btnAddToCombo1_clicked"
QT_MOC_LITERAL(10, 190, 43), // "on_plainTextEdit_customContex..."
QT_MOC_LITERAL(11, 234, 3), // "pos"
QT_MOC_LITERAL(12, 238, 32), // "on_btnClearPlainTextEdit_clicked"
QT_MOC_LITERAL(13, 271, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(14, 291, 7), // "checked"
QT_MOC_LITERAL(15, 299, 22) // "on_chkReadOnly_clicked"

    },
    "Widget\0on_btnIniItems_clicked\0\0"
    "on_btnClear_clicked\0on_btnAddItems_clicked\0"
    "on_btnIni2_clicked\0on_comboBox1_currentIndexChanged\0"
    "arg1\0on_comboBox2_currentIndexChanged\0"
    "on_btnAddToCombo1_clicked\0"
    "on_plainTextEdit_customContextMenuRequested\0"
    "pos\0on_btnClearPlainTextEdit_clicked\0"
    "on_checkBox_clicked\0checked\0"
    "on_chkReadOnly_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    1,   80,    2, 0x08 /* Private */,
      12,    0,   83,    2, 0x08 /* Private */,
      13,    1,   84,    2, 0x08 /* Private */,
      15,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnIniItems_clicked(); break;
        case 1: _t->on_btnClear_clicked(); break;
        case 2: _t->on_btnAddItems_clicked(); break;
        case 3: _t->on_btnIni2_clicked(); break;
        case 4: _t->on_comboBox1_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_comboBox2_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_btnAddToCombo1_clicked(); break;
        case 7: _t->on_plainTextEdit_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 8: _t->on_btnClearPlainTextEdit_clicked(); break;
        case 9: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_chkReadOnly_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

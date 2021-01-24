/****************************************************************************
** Meta object code from reading C++ file 'group.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Users/chels/Desktop/ProjDAS/Project File/group.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'group.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_group_t {
    QByteArrayData data[10];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_group_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_group_t qt_meta_stringdata_group = {
    {
QT_MOC_LITERAL(0, 0, 5), // "group"
QT_MOC_LITERAL(1, 6, 15), // "on_AddG_clicked"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 18), // "on_RemoveG_clicked"
QT_MOC_LITERAL(4, 42, 18), // "on_refresh_clicked"
QT_MOC_LITERAL(5, 61, 17), // "on_select_clicked"
QT_MOC_LITERAL(6, 79, 17), // "on_Export_clicked"
QT_MOC_LITERAL(7, 97, 10), // "queryToCsv"
QT_MOC_LITERAL(8, 108, 19), // "on_PHistory_clicked"
QT_MOC_LITERAL(9, 128, 18) // "on_SignOut_clicked"

    },
    "group\0on_AddG_clicked\0\0on_RemoveG_clicked\0"
    "on_refresh_clicked\0on_select_clicked\0"
    "on_Export_clicked\0queryToCsv\0"
    "on_PHistory_clicked\0on_SignOut_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_group[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void group::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<group *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_AddG_clicked(); break;
        case 1: _t->on_RemoveG_clicked(); break;
        case 2: _t->on_refresh_clicked(); break;
        case 3: _t->on_select_clicked(); break;
        case 4: _t->on_Export_clicked(); break;
        case 5: { bool _r = _t->queryToCsv();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->on_PHistory_clicked(); break;
        case 7: _t->on_SignOut_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject group::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_group.data,
    qt_meta_data_group,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *group::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *group::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_group.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int group::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

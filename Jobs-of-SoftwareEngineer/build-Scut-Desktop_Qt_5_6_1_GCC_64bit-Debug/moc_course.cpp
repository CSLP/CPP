/****************************************************************************
** Meta object code from reading C++ file 'course.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Scut/course.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'course.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Course_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Course_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Course_t qt_meta_stringdata_Course = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Course"
QT_MOC_LITERAL(1, 7, 7), // "perfect"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 25), // "on_backPushButton_clicked"
QT_MOC_LITERAL(4, 42, 27), // "on_submitPushButton_clicked"
QT_MOC_LITERAL(5, 70, 10), // "courseInfo"
QT_MOC_LITERAL(6, 81, 6), // "string"
QT_MOC_LITERAL(7, 88, 7), // "display"
QT_MOC_LITERAL(8, 96, 9) // "changeTag"

    },
    "Course\0perfect\0\0on_backPushButton_clicked\0"
    "on_submitPushButton_clicked\0courseInfo\0"
    "string\0display\0changeTag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Course[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   47,    2, 0x08 /* Private */,
       4,    0,   48,    2, 0x08 /* Private */,
       5,    1,   49,    2, 0x0a /* Public */,
       7,    1,   52,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Course::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Course *_t = static_cast<Course *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->perfect((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_backPushButton_clicked(); break;
        case 2: _t->on_submitPushButton_clicked(); break;
        case 3: _t->courseInfo((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 4: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->changeTag((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Course::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Course::perfect)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Course::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Course.data,
      qt_meta_data_Course,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Course::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Course::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Course.stringdata0))
        return static_cast<void*>(const_cast< Course*>(this));
    return QDialog::qt_metacast(_clname);
}

int Course::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Course::perfect(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'student.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Scut/student.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'student.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Student_t {
    QByteArrayData data[15];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Student_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Student_t qt_meta_stringdata_Student = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Student"
QT_MOC_LITERAL(1, 8, 7), // "corInfo"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 6), // "string"
QT_MOC_LITERAL(4, 24, 31), // "on_loginAgainPushButton_clicked"
QT_MOC_LITERAL(5, 56, 22), // "on_pushButton1_clicked"
QT_MOC_LITERAL(6, 79, 22), // "on_pushButton2_clicked"
QT_MOC_LITERAL(7, 102, 22), // "on_pushButton3_clicked"
QT_MOC_LITERAL(8, 125, 22), // "on_pushButton4_clicked"
QT_MOC_LITERAL(9, 148, 22), // "on_pushButton5_clicked"
QT_MOC_LITERAL(10, 171, 22), // "on_pushButton6_clicked"
QT_MOC_LITERAL(11, 194, 27), // "on_modifyPushButton_clicked"
QT_MOC_LITERAL(12, 222, 12), // "idInfomation"
QT_MOC_LITERAL(13, 235, 17), // "courseInformation"
QT_MOC_LITERAL(14, 253, 10) // "completUpd"

    },
    "Student\0corInfo\0\0string\0"
    "on_loginAgainPushButton_clicked\0"
    "on_pushButton1_clicked\0on_pushButton2_clicked\0"
    "on_pushButton3_clicked\0on_pushButton4_clicked\0"
    "on_pushButton5_clicked\0on_pushButton6_clicked\0"
    "on_modifyPushButton_clicked\0idInfomation\0"
    "courseInformation\0completUpd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Student[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    2,   85,    2, 0x0a /* Public */,
      13,    2,   90,    2, 0x0a /* Public */,
      14,    1,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void Student::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Student *_t = static_cast<Student *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->corInfo((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 1: _t->on_loginAgainPushButton_clicked(); break;
        case 2: _t->on_pushButton1_clicked(); break;
        case 3: _t->on_pushButton2_clicked(); break;
        case 4: _t->on_pushButton3_clicked(); break;
        case 5: _t->on_pushButton4_clicked(); break;
        case 6: _t->on_pushButton5_clicked(); break;
        case 7: _t->on_pushButton6_clicked(); break;
        case 8: _t->on_modifyPushButton_clicked(); break;
        case 9: _t->idInfomation((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 10: _t->courseInformation((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 11: _t->completUpd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Student::*_t)(string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Student::corInfo)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Student::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Student.data,
      qt_meta_data_Student,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Student::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Student::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Student.stringdata0))
        return static_cast<void*>(const_cast< Student*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Student::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Student::corInfo(string _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

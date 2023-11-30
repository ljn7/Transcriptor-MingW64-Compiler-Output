/****************************************************************************
** Meta object code from reading C++ file 'editor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Transcriptor/editor/editor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Editor_t {
    QByteArrayData data[68];
    char stringdata0[994];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Editor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Editor_t qt_meta_stringdata_Editor = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Editor"
QT_MOC_LITERAL(1, 7, 12), // "jumpToPlayer"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "time"
QT_MOC_LITERAL(4, 26, 14), // "refreshTagList"
QT_MOC_LITERAL(5, 41, 7), // "tagList"
QT_MOC_LITERAL(6, 49, 9), // "replyCame"
QT_MOC_LITERAL(7, 59, 14), // "transcriptOpen"
QT_MOC_LITERAL(8, 74, 14), // "transcriptSave"
QT_MOC_LITERAL(9, 89, 16), // "transcriptSaveAs"
QT_MOC_LITERAL(10, 106, 15), // "transcriptClose"
QT_MOC_LITERAL(11, 122, 19), // "highlightTranscript"
QT_MOC_LITERAL(12, 142, 11), // "elapsedTime"
QT_MOC_LITERAL(13, 154, 18), // "addCustomDictonary"
QT_MOC_LITERAL(14, 173, 18), // "showBlocksFromData"
QT_MOC_LITERAL(15, 192, 21), // "jumpToHighlightedLine"
QT_MOC_LITERAL(16, 214, 9), // "splitLine"
QT_MOC_LITERAL(17, 224, 7), // "mergeUp"
QT_MOC_LITERAL(18, 232, 9), // "mergeDown"
QT_MOC_LITERAL(19, 242, 25), // "createChangeSpeakerDialog"
QT_MOC_LITERAL(20, 268, 27), // "createTimePropagationDialog"
QT_MOC_LITERAL(21, 296, 24), // "createTagSelectionDialog"
QT_MOC_LITERAL(22, 321, 15), // "insertTimeStamp"
QT_MOC_LITERAL(23, 337, 10), // "pushbutton"
QT_MOC_LITERAL(24, 348, 13), // "removespeaker"
QT_MOC_LITERAL(25, 362, 20), // "changeTranscriptLang"
QT_MOC_LITERAL(26, 383, 15), // "removetimestamp"
QT_MOC_LITERAL(27, 399, 29), // "on_actionword_count_triggered"
QT_MOC_LITERAL(28, 429, 13), // "showwordcount"
QT_MOC_LITERAL(29, 443, 23), // "on_actionLink_triggered"
QT_MOC_LITERAL(30, 467, 24), // "on_actionVoice_triggered"
QT_MOC_LITERAL(31, 492, 15), // "speakerWiseJump"
QT_MOC_LITERAL(32, 508, 13), // "jumpDirection"
QT_MOC_LITERAL(33, 522, 12), // "wordWiseJump"
QT_MOC_LITERAL(34, 535, 13), // "blockWiseJump"
QT_MOC_LITERAL(35, 549, 18), // "useTransliteration"
QT_MOC_LITERAL(36, 568, 5), // "value"
QT_MOC_LITERAL(37, 574, 8), // "langCode"
QT_MOC_LITERAL(38, 583, 11), // "useAutoSave"
QT_MOC_LITERAL(39, 595, 7), // "suggest"
QT_MOC_LITERAL(40, 603, 24), // "realTimeDataSavingToggle"
QT_MOC_LITERAL(41, 628, 9), // "saveAsPDF"
QT_MOC_LITERAL(42, 638, 9), // "saveAsTXT"
QT_MOC_LITERAL(43, 648, 14), // "contentChanged"
QT_MOC_LITERAL(44, 663, 8), // "position"
QT_MOC_LITERAL(45, 672, 12), // "charsRemoved"
QT_MOC_LITERAL(46, 685, 10), // "charsAdded"
QT_MOC_LITERAL(47, 696, 17), // "wordEditorChanged"
QT_MOC_LITERAL(48, 714, 16), // "updateWordEditor"
QT_MOC_LITERAL(49, 731, 13), // "changeSpeaker"
QT_MOC_LITERAL(50, 745, 10), // "newSpeaker"
QT_MOC_LITERAL(51, 756, 21), // "replaceAllOccurrences"
QT_MOC_LITERAL(52, 778, 13), // "propagateTime"
QT_MOC_LITERAL(53, 792, 5), // "start"
QT_MOC_LITERAL(54, 798, 3), // "end"
QT_MOC_LITERAL(55, 802, 10), // "negateTime"
QT_MOC_LITERAL(56, 813, 10), // "selectTags"
QT_MOC_LITERAL(57, 824, 10), // "newTagList"
QT_MOC_LITERAL(58, 835, 17), // "markWordAsCorrect"
QT_MOC_LITERAL(59, 853, 11), // "blockNumber"
QT_MOC_LITERAL(60, 865, 10), // "wordNumber"
QT_MOC_LITERAL(61, 876, 23), // "insertSpeakerCompletion"
QT_MOC_LITERAL(62, 900, 10), // "completion"
QT_MOC_LITERAL(63, 911, 20), // "insertTextCompletion"
QT_MOC_LITERAL(64, 932, 31), // "insertTransliterationCompletion"
QT_MOC_LITERAL(65, 964, 11), // "handleReply"
QT_MOC_LITERAL(66, 976, 11), // "sendRequest"
QT_MOC_LITERAL(67, 988, 5) // "input"

    },
    "Editor\0jumpToPlayer\0\0time\0refreshTagList\0"
    "tagList\0replyCame\0transcriptOpen\0"
    "transcriptSave\0transcriptSaveAs\0"
    "transcriptClose\0highlightTranscript\0"
    "elapsedTime\0addCustomDictonary\0"
    "showBlocksFromData\0jumpToHighlightedLine\0"
    "splitLine\0mergeUp\0mergeDown\0"
    "createChangeSpeakerDialog\0"
    "createTimePropagationDialog\0"
    "createTagSelectionDialog\0insertTimeStamp\0"
    "pushbutton\0removespeaker\0changeTranscriptLang\0"
    "removetimestamp\0on_actionword_count_triggered\0"
    "showwordcount\0on_actionLink_triggered\0"
    "on_actionVoice_triggered\0speakerWiseJump\0"
    "jumpDirection\0wordWiseJump\0blockWiseJump\0"
    "useTransliteration\0value\0langCode\0"
    "useAutoSave\0suggest\0realTimeDataSavingToggle\0"
    "saveAsPDF\0saveAsTXT\0contentChanged\0"
    "position\0charsRemoved\0charsAdded\0"
    "wordEditorChanged\0updateWordEditor\0"
    "changeSpeaker\0newSpeaker\0replaceAllOccurrences\0"
    "propagateTime\0start\0end\0negateTime\0"
    "selectTags\0newTagList\0markWordAsCorrect\0"
    "blockNumber\0wordNumber\0insertSpeakerCompletion\0"
    "completion\0insertTextCompletion\0"
    "insertTransliterationCompletion\0"
    "handleReply\0sendRequest\0input"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Editor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  254,    2, 0x06 /* Public */,
       4,    1,  257,    2, 0x06 /* Public */,
       6,    0,  260,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  261,    2, 0x0a /* Public */,
       8,    0,  262,    2, 0x0a /* Public */,
       9,    0,  263,    2, 0x0a /* Public */,
      10,    0,  264,    2, 0x0a /* Public */,
      11,    1,  265,    2, 0x0a /* Public */,
      13,    0,  268,    2, 0x0a /* Public */,
      14,    0,  269,    2, 0x0a /* Public */,
      15,    0,  270,    2, 0x0a /* Public */,
      16,    1,  271,    2, 0x0a /* Public */,
      17,    0,  274,    2, 0x0a /* Public */,
      18,    0,  275,    2, 0x0a /* Public */,
      19,    0,  276,    2, 0x0a /* Public */,
      20,    0,  277,    2, 0x0a /* Public */,
      21,    0,  278,    2, 0x0a /* Public */,
      22,    1,  279,    2, 0x0a /* Public */,
      23,    1,  282,    2, 0x0a /* Public */,
      24,    0,  285,    2, 0x0a /* Public */,
      25,    0,  286,    2, 0x0a /* Public */,
      26,    0,  287,    2, 0x0a /* Public */,
      27,    0,  288,    2, 0x0a /* Public */,
      28,    0,  289,    2, 0x0a /* Public */,
      29,    0,  290,    2, 0x0a /* Public */,
      30,    0,  291,    2, 0x0a /* Public */,
      31,    1,  292,    2, 0x0a /* Public */,
      33,    1,  295,    2, 0x0a /* Public */,
      34,    1,  298,    2, 0x0a /* Public */,
      35,    2,  301,    2, 0x0a /* Public */,
      35,    1,  306,    2, 0x2a /* Public | MethodCloned */,
      38,    1,  309,    2, 0x0a /* Public */,
      39,    1,  312,    2, 0x0a /* Public */,
      40,    0,  315,    2, 0x0a /* Public */,
      41,    0,  316,    2, 0x0a /* Public */,
      42,    0,  317,    2, 0x0a /* Public */,
      43,    3,  318,    2, 0x08 /* Private */,
      47,    0,  325,    2, 0x08 /* Private */,
      48,    0,  326,    2, 0x08 /* Private */,
      49,    2,  327,    2, 0x08 /* Private */,
      52,    4,  332,    2, 0x08 /* Private */,
      56,    1,  341,    2, 0x08 /* Private */,
      58,    2,  344,    2, 0x08 /* Private */,
      61,    1,  349,    2, 0x08 /* Private */,
      63,    1,  352,    2, 0x08 /* Private */,
      64,    1,  355,    2, 0x08 /* Private */,
      65,    0,  358,    2, 0x08 /* Private */,
      66,    2,  359,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QTime,    3,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QTime,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QTime,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QTime,   12,
    QMetaType::Void, QMetaType::QTime,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   36,   37,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   44,   45,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   50,   51,
    QMetaType::Void, QMetaType::QTime, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    3,   53,   54,   55,
    QMetaType::Void, QMetaType::QStringList,   57,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   59,   60,
    QMetaType::Void, QMetaType::QString,   62,
    QMetaType::Void, QMetaType::QString,   62,
    QMetaType::Void, QMetaType::QString,   62,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   67,   37,

       0        // eod
};

void Editor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Editor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->jumpToPlayer((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 1: _t->refreshTagList((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->replyCame(); break;
        case 3: _t->transcriptOpen(); break;
        case 4: _t->transcriptSave(); break;
        case 5: _t->transcriptSaveAs(); break;
        case 6: _t->transcriptClose(); break;
        case 7: _t->highlightTranscript((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 8: _t->addCustomDictonary(); break;
        case 9: _t->showBlocksFromData(); break;
        case 10: _t->jumpToHighlightedLine(); break;
        case 11: _t->splitLine((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 12: _t->mergeUp(); break;
        case 13: _t->mergeDown(); break;
        case 14: _t->createChangeSpeakerDialog(); break;
        case 15: _t->createTimePropagationDialog(); break;
        case 16: _t->createTagSelectionDialog(); break;
        case 17: _t->insertTimeStamp((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 18: _t->pushbutton((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 19: _t->removespeaker(); break;
        case 20: _t->changeTranscriptLang(); break;
        case 21: _t->removetimestamp(); break;
        case 22: _t->on_actionword_count_triggered(); break;
        case 23: _t->showwordcount(); break;
        case 24: _t->on_actionLink_triggered(); break;
        case 25: _t->on_actionVoice_triggered(); break;
        case 26: _t->speakerWiseJump((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->wordWiseJump((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->blockWiseJump((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->useTransliteration((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->useTransliteration((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->useAutoSave((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->suggest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: _t->realTimeDataSavingToggle(); break;
        case 34: _t->saveAsPDF(); break;
        case 35: _t->saveAsTXT(); break;
        case 36: _t->contentChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 37: _t->wordEditorChanged(); break;
        case 38: _t->updateWordEditor(); break;
        case 39: _t->changeSpeaker((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->propagateTime((*reinterpret_cast< const QTime(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 41: _t->selectTags((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 42: _t->markWordAsCorrect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->insertSpeakerCompletion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 44: _t->insertTextCompletion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 45: _t->insertTransliterationCompletion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 46: _t->handleReply(); break;
        case 47: _t->sendRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Editor::*)(const QTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Editor::jumpToPlayer)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Editor::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Editor::refreshTagList)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Editor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Editor::replyCame)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Editor::staticMetaObject = { {
    QMetaObject::SuperData::link<TextEditor::staticMetaObject>(),
    qt_meta_stringdata_Editor.data,
    qt_meta_data_Editor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Editor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Editor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Editor.stringdata0))
        return static_cast<void*>(this);
    return TextEditor::qt_metacast(_clname);
}

int Editor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TextEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 48;
    }
    return _id;
}

// SIGNAL 0
void Editor::jumpToPlayer(const QTime & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Editor::refreshTagList(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Editor::replyCame()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_Highlighter_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Highlighter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Highlighter_t qt_meta_stringdata_Highlighter = {
    {
QT_MOC_LITERAL(0, 0, 11) // "Highlighter"

    },
    "Highlighter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Highlighter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Highlighter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Highlighter::staticMetaObject = { {
    QMetaObject::SuperData::link<QSyntaxHighlighter::staticMetaObject>(),
    qt_meta_stringdata_Highlighter.data,
    qt_meta_data_Highlighter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Highlighter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Highlighter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Highlighter.stringdata0))
        return static_cast<void*>(this);
    return QSyntaxHighlighter::qt_metacast(_clname);
}

int Highlighter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSyntaxHighlighter::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

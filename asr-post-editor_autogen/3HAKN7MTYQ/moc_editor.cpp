/****************************************************************************
** Meta object code from reading C++ file 'editor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Transcriptor/editor/editor.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSEditorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSEditorENDCLASS = QtMocHelpers::stringData(
    "Editor",
    "jumpToPlayer",
    "",
    "time",
    "refreshTagList",
    "tagList",
    "replyCame",
    "transcriptOpen",
    "transcriptSave",
    "transcriptSaveAs",
    "transcriptClose",
    "highlightTranscript",
    "elapsedTime",
    "addCustomDictonary",
    "showBlocksFromData",
    "jumpToHighlightedLine",
    "splitLine",
    "mergeUp",
    "mergeDown",
    "createChangeSpeakerDialog",
    "createTimePropagationDialog",
    "createTagSelectionDialog",
    "insertTimeStamp",
    "pushbutton",
    "removespeaker",
    "changeTranscriptLang",
    "removetimestamp",
    "on_actionword_count_triggered",
    "showwordcount",
    "on_actionLink_triggered",
    "speakerWiseJump",
    "jumpDirection",
    "wordWiseJump",
    "blockWiseJump",
    "useTransliteration",
    "value",
    "langCode",
    "useAutoSave",
    "suggest",
    "realTimeDataSavingToggle",
    "saveAsPDF",
    "saveAsTXT",
    "contentChanged",
    "position",
    "charsRemoved",
    "charsAdded",
    "wordEditorChanged",
    "updateWordEditor",
    "changeSpeaker",
    "newSpeaker",
    "replaceAllOccurrences",
    "propagateTime",
    "start",
    "end",
    "negateTime",
    "selectTags",
    "newTagList",
    "markWordAsCorrect",
    "blockNumber",
    "wordNumber",
    "insertSpeakerCompletion",
    "completion",
    "insertTextCompletion",
    "insertTransliterationCompletion",
    "handleReply",
    "sendRequest",
    "input"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSEditorENDCLASS_t {
    uint offsetsAndSizes[134];
    char stringdata0[7];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[15];
    char stringdata5[8];
    char stringdata6[10];
    char stringdata7[15];
    char stringdata8[15];
    char stringdata9[17];
    char stringdata10[16];
    char stringdata11[20];
    char stringdata12[12];
    char stringdata13[19];
    char stringdata14[19];
    char stringdata15[22];
    char stringdata16[10];
    char stringdata17[8];
    char stringdata18[10];
    char stringdata19[26];
    char stringdata20[28];
    char stringdata21[25];
    char stringdata22[16];
    char stringdata23[11];
    char stringdata24[14];
    char stringdata25[21];
    char stringdata26[16];
    char stringdata27[30];
    char stringdata28[14];
    char stringdata29[24];
    char stringdata30[16];
    char stringdata31[14];
    char stringdata32[13];
    char stringdata33[14];
    char stringdata34[19];
    char stringdata35[6];
    char stringdata36[9];
    char stringdata37[12];
    char stringdata38[8];
    char stringdata39[25];
    char stringdata40[10];
    char stringdata41[10];
    char stringdata42[15];
    char stringdata43[9];
    char stringdata44[13];
    char stringdata45[11];
    char stringdata46[18];
    char stringdata47[17];
    char stringdata48[14];
    char stringdata49[11];
    char stringdata50[22];
    char stringdata51[14];
    char stringdata52[6];
    char stringdata53[4];
    char stringdata54[11];
    char stringdata55[11];
    char stringdata56[11];
    char stringdata57[18];
    char stringdata58[12];
    char stringdata59[11];
    char stringdata60[24];
    char stringdata61[11];
    char stringdata62[21];
    char stringdata63[32];
    char stringdata64[12];
    char stringdata65[12];
    char stringdata66[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSEditorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSEditorENDCLASS_t qt_meta_stringdata_CLASSEditorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Editor"
        QT_MOC_LITERAL(7, 12),  // "jumpToPlayer"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 4),  // "time"
        QT_MOC_LITERAL(26, 14),  // "refreshTagList"
        QT_MOC_LITERAL(41, 7),  // "tagList"
        QT_MOC_LITERAL(49, 9),  // "replyCame"
        QT_MOC_LITERAL(59, 14),  // "transcriptOpen"
        QT_MOC_LITERAL(74, 14),  // "transcriptSave"
        QT_MOC_LITERAL(89, 16),  // "transcriptSaveAs"
        QT_MOC_LITERAL(106, 15),  // "transcriptClose"
        QT_MOC_LITERAL(122, 19),  // "highlightTranscript"
        QT_MOC_LITERAL(142, 11),  // "elapsedTime"
        QT_MOC_LITERAL(154, 18),  // "addCustomDictonary"
        QT_MOC_LITERAL(173, 18),  // "showBlocksFromData"
        QT_MOC_LITERAL(192, 21),  // "jumpToHighlightedLine"
        QT_MOC_LITERAL(214, 9),  // "splitLine"
        QT_MOC_LITERAL(224, 7),  // "mergeUp"
        QT_MOC_LITERAL(232, 9),  // "mergeDown"
        QT_MOC_LITERAL(242, 25),  // "createChangeSpeakerDialog"
        QT_MOC_LITERAL(268, 27),  // "createTimePropagationDialog"
        QT_MOC_LITERAL(296, 24),  // "createTagSelectionDialog"
        QT_MOC_LITERAL(321, 15),  // "insertTimeStamp"
        QT_MOC_LITERAL(337, 10),  // "pushbutton"
        QT_MOC_LITERAL(348, 13),  // "removespeaker"
        QT_MOC_LITERAL(362, 20),  // "changeTranscriptLang"
        QT_MOC_LITERAL(383, 15),  // "removetimestamp"
        QT_MOC_LITERAL(399, 29),  // "on_actionword_count_triggered"
        QT_MOC_LITERAL(429, 13),  // "showwordcount"
        QT_MOC_LITERAL(443, 23),  // "on_actionLink_triggered"
        QT_MOC_LITERAL(467, 15),  // "speakerWiseJump"
        QT_MOC_LITERAL(483, 13),  // "jumpDirection"
        QT_MOC_LITERAL(497, 12),  // "wordWiseJump"
        QT_MOC_LITERAL(510, 13),  // "blockWiseJump"
        QT_MOC_LITERAL(524, 18),  // "useTransliteration"
        QT_MOC_LITERAL(543, 5),  // "value"
        QT_MOC_LITERAL(549, 8),  // "langCode"
        QT_MOC_LITERAL(558, 11),  // "useAutoSave"
        QT_MOC_LITERAL(570, 7),  // "suggest"
        QT_MOC_LITERAL(578, 24),  // "realTimeDataSavingToggle"
        QT_MOC_LITERAL(603, 9),  // "saveAsPDF"
        QT_MOC_LITERAL(613, 9),  // "saveAsTXT"
        QT_MOC_LITERAL(623, 14),  // "contentChanged"
        QT_MOC_LITERAL(638, 8),  // "position"
        QT_MOC_LITERAL(647, 12),  // "charsRemoved"
        QT_MOC_LITERAL(660, 10),  // "charsAdded"
        QT_MOC_LITERAL(671, 17),  // "wordEditorChanged"
        QT_MOC_LITERAL(689, 16),  // "updateWordEditor"
        QT_MOC_LITERAL(706, 13),  // "changeSpeaker"
        QT_MOC_LITERAL(720, 10),  // "newSpeaker"
        QT_MOC_LITERAL(731, 21),  // "replaceAllOccurrences"
        QT_MOC_LITERAL(753, 13),  // "propagateTime"
        QT_MOC_LITERAL(767, 5),  // "start"
        QT_MOC_LITERAL(773, 3),  // "end"
        QT_MOC_LITERAL(777, 10),  // "negateTime"
        QT_MOC_LITERAL(788, 10),  // "selectTags"
        QT_MOC_LITERAL(799, 10),  // "newTagList"
        QT_MOC_LITERAL(810, 17),  // "markWordAsCorrect"
        QT_MOC_LITERAL(828, 11),  // "blockNumber"
        QT_MOC_LITERAL(840, 10),  // "wordNumber"
        QT_MOC_LITERAL(851, 23),  // "insertSpeakerCompletion"
        QT_MOC_LITERAL(875, 10),  // "completion"
        QT_MOC_LITERAL(886, 20),  // "insertTextCompletion"
        QT_MOC_LITERAL(907, 31),  // "insertTransliterationCompletion"
        QT_MOC_LITERAL(939, 11),  // "handleReply"
        QT_MOC_LITERAL(951, 11),  // "sendRequest"
        QT_MOC_LITERAL(963, 5)   // "input"
    },
    "Editor",
    "jumpToPlayer",
    "",
    "time",
    "refreshTagList",
    "tagList",
    "replyCame",
    "transcriptOpen",
    "transcriptSave",
    "transcriptSaveAs",
    "transcriptClose",
    "highlightTranscript",
    "elapsedTime",
    "addCustomDictonary",
    "showBlocksFromData",
    "jumpToHighlightedLine",
    "splitLine",
    "mergeUp",
    "mergeDown",
    "createChangeSpeakerDialog",
    "createTimePropagationDialog",
    "createTagSelectionDialog",
    "insertTimeStamp",
    "pushbutton",
    "removespeaker",
    "changeTranscriptLang",
    "removetimestamp",
    "on_actionword_count_triggered",
    "showwordcount",
    "on_actionLink_triggered",
    "speakerWiseJump",
    "jumpDirection",
    "wordWiseJump",
    "blockWiseJump",
    "useTransliteration",
    "value",
    "langCode",
    "useAutoSave",
    "suggest",
    "realTimeDataSavingToggle",
    "saveAsPDF",
    "saveAsTXT",
    "contentChanged",
    "position",
    "charsRemoved",
    "charsAdded",
    "wordEditorChanged",
    "updateWordEditor",
    "changeSpeaker",
    "newSpeaker",
    "replaceAllOccurrences",
    "propagateTime",
    "start",
    "end",
    "negateTime",
    "selectTags",
    "newTagList",
    "markWordAsCorrect",
    "blockNumber",
    "wordNumber",
    "insertSpeakerCompletion",
    "completion",
    "insertTextCompletion",
    "insertTransliterationCompletion",
    "handleReply",
    "sendRequest",
    "input"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEditorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  296,    2, 0x06,    1 /* Public */,
       4,    1,  299,    2, 0x06,    3 /* Public */,
       6,    0,  302,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,  303,    2, 0x0a,    6 /* Public */,
       8,    0,  304,    2, 0x0a,    7 /* Public */,
       9,    0,  305,    2, 0x0a,    8 /* Public */,
      10,    0,  306,    2, 0x0a,    9 /* Public */,
      11,    1,  307,    2, 0x0a,   10 /* Public */,
      13,    0,  310,    2, 0x0a,   12 /* Public */,
      14,    0,  311,    2, 0x0a,   13 /* Public */,
      15,    0,  312,    2, 0x0a,   14 /* Public */,
      16,    1,  313,    2, 0x0a,   15 /* Public */,
      17,    0,  316,    2, 0x0a,   17 /* Public */,
      18,    0,  317,    2, 0x0a,   18 /* Public */,
      19,    0,  318,    2, 0x0a,   19 /* Public */,
      20,    0,  319,    2, 0x0a,   20 /* Public */,
      21,    0,  320,    2, 0x0a,   21 /* Public */,
      22,    1,  321,    2, 0x0a,   22 /* Public */,
      23,    1,  324,    2, 0x0a,   24 /* Public */,
      24,    0,  327,    2, 0x0a,   26 /* Public */,
      25,    0,  328,    2, 0x0a,   27 /* Public */,
      26,    0,  329,    2, 0x0a,   28 /* Public */,
      27,    0,  330,    2, 0x0a,   29 /* Public */,
      28,    0,  331,    2, 0x0a,   30 /* Public */,
      29,    0,  332,    2, 0x0a,   31 /* Public */,
      30,    1,  333,    2, 0x0a,   32 /* Public */,
      32,    1,  336,    2, 0x0a,   34 /* Public */,
      33,    1,  339,    2, 0x0a,   36 /* Public */,
      34,    2,  342,    2, 0x0a,   38 /* Public */,
      34,    1,  347,    2, 0x2a,   41 /* Public | MethodCloned */,
      37,    1,  350,    2, 0x0a,   43 /* Public */,
      38,    1,  353,    2, 0x0a,   45 /* Public */,
      39,    0,  356,    2, 0x0a,   47 /* Public */,
      40,    0,  357,    2, 0x0a,   48 /* Public */,
      41,    0,  358,    2, 0x0a,   49 /* Public */,
      42,    3,  359,    2, 0x08,   50 /* Private */,
      46,    0,  366,    2, 0x08,   54 /* Private */,
      47,    0,  367,    2, 0x08,   55 /* Private */,
      48,    2,  368,    2, 0x08,   56 /* Private */,
      51,    4,  373,    2, 0x08,   59 /* Private */,
      55,    1,  382,    2, 0x08,   64 /* Private */,
      57,    2,  385,    2, 0x08,   66 /* Private */,
      60,    1,  390,    2, 0x08,   69 /* Private */,
      62,    1,  393,    2, 0x08,   71 /* Private */,
      63,    1,  396,    2, 0x08,   73 /* Private */,
      64,    0,  399,    2, 0x08,   75 /* Private */,
      65,    2,  400,    2, 0x08,   76 /* Private */,

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
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   35,   36,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   43,   44,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   49,   50,
    QMetaType::Void, QMetaType::QTime, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    3,   52,   53,   54,
    QMetaType::Void, QMetaType::QStringList,   56,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   58,   59,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   66,   36,

       0        // eod
};

Q_CONSTINIT const QMetaObject Editor::staticMetaObject = { {
    QMetaObject::SuperData::link<TextEditor::staticMetaObject>(),
    qt_meta_stringdata_CLASSEditorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEditorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSEditorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Editor, std::true_type>,
        // method 'jumpToPlayer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'refreshTagList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'replyCame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'transcriptOpen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'transcriptSave'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'transcriptSaveAs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'transcriptClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'highlightTranscript'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'addCustomDictonary'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showBlocksFromData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'jumpToHighlightedLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'splitLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'mergeUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mergeDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createChangeSpeakerDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createTimePropagationDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createTagSelectionDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'insertTimeStamp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'pushbutton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'removespeaker'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeTranscriptLang'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removetimestamp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionword_count_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showwordcount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLink_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'speakerWiseJump'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'wordWiseJump'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'blockWiseJump'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'useTransliteration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'useTransliteration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'useAutoSave'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'suggest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'realTimeDataSavingToggle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveAsPDF'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveAsTXT'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'contentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'wordEditorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateWordEditor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeSpeaker'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'propagateTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'selectTags'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'markWordAsCorrect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'insertSpeakerCompletion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'insertTextCompletion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'insertTransliterationCompletion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'handleReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Editor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Editor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->jumpToPlayer((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 1: _t->refreshTagList((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 2: _t->replyCame(); break;
        case 3: _t->transcriptOpen(); break;
        case 4: _t->transcriptSave(); break;
        case 5: _t->transcriptSaveAs(); break;
        case 6: _t->transcriptClose(); break;
        case 7: _t->highlightTranscript((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 8: _t->addCustomDictonary(); break;
        case 9: _t->showBlocksFromData(); break;
        case 10: _t->jumpToHighlightedLine(); break;
        case 11: _t->splitLine((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 12: _t->mergeUp(); break;
        case 13: _t->mergeDown(); break;
        case 14: _t->createChangeSpeakerDialog(); break;
        case 15: _t->createTimePropagationDialog(); break;
        case 16: _t->createTagSelectionDialog(); break;
        case 17: _t->insertTimeStamp((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 18: _t->pushbutton((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 19: _t->removespeaker(); break;
        case 20: _t->changeTranscriptLang(); break;
        case 21: _t->removetimestamp(); break;
        case 22: _t->on_actionword_count_triggered(); break;
        case 23: _t->showwordcount(); break;
        case 24: _t->on_actionLink_triggered(); break;
        case 25: _t->speakerWiseJump((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->wordWiseJump((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->blockWiseJump((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->useTransliteration((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 29: _t->useTransliteration((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->useAutoSave((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->suggest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 32: _t->realTimeDataSavingToggle(); break;
        case 33: _t->saveAsPDF(); break;
        case 34: _t->saveAsTXT(); break;
        case 35: _t->contentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 36: _t->wordEditorChanged(); break;
        case 37: _t->updateWordEditor(); break;
        case 38: _t->changeSpeaker((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 39: _t->propagateTime((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 40: _t->selectTags((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 41: _t->markWordAsCorrect((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 42: _t->insertSpeakerCompletion((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 43: _t->insertTextCompletion((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 44: _t->insertTransliterationCompletion((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 45: _t->handleReply(); break;
        case 46: _t->sendRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Editor::*)(const QTime & );
            if (_t _q_method = &Editor::jumpToPlayer; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Editor::*)(const QStringList & );
            if (_t _q_method = &Editor::refreshTagList; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Editor::*)();
            if (_t _q_method = &Editor::replyCame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *Editor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Editor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEditorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TextEditor::qt_metacast(_clname);
}

int Editor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TextEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 47;
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSHighlighterENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSHighlighterENDCLASS = QtMocHelpers::stringData(
    "Highlighter"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSHighlighterENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSHighlighterENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSHighlighterENDCLASS_t qt_meta_stringdata_CLASSHighlighterENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11)   // "Highlighter"
    },
    "Highlighter"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSHighlighterENDCLASS[] = {

 // content:
      12,       // revision
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

Q_CONSTINIT const QMetaObject Highlighter::staticMetaObject = { {
    QMetaObject::SuperData::link<QSyntaxHighlighter::staticMetaObject>(),
    qt_meta_stringdata_CLASSHighlighterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSHighlighterENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSHighlighterENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Highlighter, std::true_type>
    >,
    nullptr
} };

void Highlighter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Highlighter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Highlighter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSHighlighterENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QSyntaxHighlighter::qt_metacast(_clname);
}

int Highlighter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSyntaxHighlighter::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP

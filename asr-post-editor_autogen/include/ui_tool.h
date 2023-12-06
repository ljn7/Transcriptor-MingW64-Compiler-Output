/********************************************************************************
** Form generated from reading UI file 'tool.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOL_H
#define UI_TOOL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "editor/editor.h"
#include "editor/utilities/taglistdisplaywidget.h"
#include "editor/wordeditor.h"
#include "mediaplayer/playercontrols.h"
#include "mediaplayer/videowidget.h"

QT_BEGIN_NAMESPACE

class Ui_Tool
{
public:
    QAction *close;
    QAction *player_open;
    QAction *editor_open;
    QAction *editor_save;
    QAction *editor_openTranscript;
    QAction *editor_debugBlocks;
    QAction *editor_jumpToLine;
    QAction *player_togglePlay;
    QAction *editor_splitLine;
    QAction *editor_mergeUp;
    QAction *editor_mergeDown;
    QAction *editor_findReplace;
    QAction *editor_toggleWords;
    QAction *player_seekForward;
    QAction *player_seekBackward;
    QAction *edit_undo;
    QAction *edit_redo;
    QAction *edit_cut;
    QAction *edit_copy;
    QAction *edit_paste;
    QAction *edit_findReplace;
    QAction *view_incFont;
    QAction *view_decFont;
    QAction *editor_changeSpeaker;
    QAction *editor_propagateTime;
    QAction *help_keyboardShortcuts;
    QAction *view_font;
    QAction *view_toggleTagList;
    QAction *editor_editTags;
    QAction *action_2;
    QAction *editor_saveAs;
    QAction *editor_close;
    QAction *editor_changeLang;
    QAction *editor_autoSave;
    QAction *Add_Custom_Dictonary;
    QAction *Show_Time_Stamps;
    QAction *Upload_and_generate_Transcript;
    QAction *Real_Time_Data_Saver;
    QAction *Save_as_PDF;
    QAction *Open_File_in_Editor1;
    QAction *Open_File_in_Editor2;
    QAction *editor_save2;
    QAction *editor_save3;
    QAction *move_along_timestamps;
    QAction *actionShowLineTimeStamp;
    QAction *actionRemove_Speaker;
    QAction *actionSave_as_Text;
    QAction *actionVoice_Typing;
    QAction *actionword_count;
    QAction *actionLink;
    QAction *actionVoice_Typing_2;
    QAction *actionRemove_Time_Stamp;
    QAction *actionAbout;
    QAction *actionSave_as_XML;
    QAction *actionVersion_1_0_3;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *add_video;
    QSpacerItem *horizontalSpacer_7;
    QToolButton *open_transcript;
    QSpacerItem *horizontalSpacer_8;
    QToolButton *new_transcript;
    QSpacerItem *horizontalSpacer_6;
    QToolButton *save_transcript;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *save_as_transcript;
    QSpacerItem *horizontalSpacer_4;
    QFontComboBox *fontComboBox;
    QSpacerItem *horizontalSpacer_14;
    QToolButton *load_a_custom_dict;
    QSpacerItem *horizontalSpacer_10;
    QToolButton *get_PDF;
    QSpacerItem *horizontalSpacer_11;
    QToolButton *decreseFontSize;
    QSpacerItem *horizontalSpacer_12;
    QToolButton *increaseFontSize;
    QSpacerItem *horizontalSpacer_13;
    QToolButton *toggleWordEditor;
    QSpacerItem *horizontalSpacer_9;
    QToolButton *keyboard_shortcuts;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter_tool;
    QWidget *layoutWidget;
    QVBoxLayout *playerLayout;
    VideoWidget *m_videoWidget;
    QHBoxLayout *horizontalLayout;
    QSlider *slider_position;
    QLabel *label_position;
    PlayerControls *m_playerControls;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_editor;
    Editor *m_editor;
    WordEditor *m_wordEditor;
    TagListDisplayWidget *m_tagListDisplay;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter_editor_2;
    Editor *m_editor_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QPushButton *btn_translate;
    TagListDisplayWidget *m_tagListDisplay_2;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_editor_3;
    Editor *m_editor_3;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    TagListDisplayWidget *m_tagListDisplay_3;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuMedia_Player;
    QMenu *menuEditor;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuHelp;
    QMenu *menuTranslation;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Tool)
    {
        if (Tool->objectName().isEmpty())
            Tool->setObjectName("Tool");
        Tool->resize(800, 600);
        close = new QAction(Tool);
        close->setObjectName("close");
        player_open = new QAction(Tool);
        player_open->setObjectName("player_open");
        editor_open = new QAction(Tool);
        editor_open->setObjectName("editor_open");
        editor_save = new QAction(Tool);
        editor_save->setObjectName("editor_save");
        editor_openTranscript = new QAction(Tool);
        editor_openTranscript->setObjectName("editor_openTranscript");
        editor_openTranscript->setCheckable(false);
        editor_openTranscript->setEnabled(true);
        editor_debugBlocks = new QAction(Tool);
        editor_debugBlocks->setObjectName("editor_debugBlocks");
        editor_jumpToLine = new QAction(Tool);
        editor_jumpToLine->setObjectName("editor_jumpToLine");
        player_togglePlay = new QAction(Tool);
        player_togglePlay->setObjectName("player_togglePlay");
        player_togglePlay->setCheckable(false);
        editor_splitLine = new QAction(Tool);
        editor_splitLine->setObjectName("editor_splitLine");
        editor_mergeUp = new QAction(Tool);
        editor_mergeUp->setObjectName("editor_mergeUp");
        editor_mergeDown = new QAction(Tool);
        editor_mergeDown->setObjectName("editor_mergeDown");
        editor_findReplace = new QAction(Tool);
        editor_findReplace->setObjectName("editor_findReplace");
        editor_toggleWords = new QAction(Tool);
        editor_toggleWords->setObjectName("editor_toggleWords");
        player_seekForward = new QAction(Tool);
        player_seekForward->setObjectName("player_seekForward");
        player_seekForward->setCheckable(true);
        player_seekForward->setEnabled(true);
        player_seekBackward = new QAction(Tool);
        player_seekBackward->setObjectName("player_seekBackward");
        edit_undo = new QAction(Tool);
        edit_undo->setObjectName("edit_undo");
        edit_redo = new QAction(Tool);
        edit_redo->setObjectName("edit_redo");
        edit_cut = new QAction(Tool);
        edit_cut->setObjectName("edit_cut");
        edit_copy = new QAction(Tool);
        edit_copy->setObjectName("edit_copy");
        edit_paste = new QAction(Tool);
        edit_paste->setObjectName("edit_paste");
        edit_findReplace = new QAction(Tool);
        edit_findReplace->setObjectName("edit_findReplace");
        view_incFont = new QAction(Tool);
        view_incFont->setObjectName("view_incFont");
        view_decFont = new QAction(Tool);
        view_decFont->setObjectName("view_decFont");
        editor_changeSpeaker = new QAction(Tool);
        editor_changeSpeaker->setObjectName("editor_changeSpeaker");
        editor_propagateTime = new QAction(Tool);
        editor_propagateTime->setObjectName("editor_propagateTime");
        help_keyboardShortcuts = new QAction(Tool);
        help_keyboardShortcuts->setObjectName("help_keyboardShortcuts");
        view_font = new QAction(Tool);
        view_font->setObjectName("view_font");
        view_toggleTagList = new QAction(Tool);
        view_toggleTagList->setObjectName("view_toggleTagList");
        editor_editTags = new QAction(Tool);
        editor_editTags->setObjectName("editor_editTags");
        action_2 = new QAction(Tool);
        action_2->setObjectName("action_2");
        editor_saveAs = new QAction(Tool);
        editor_saveAs->setObjectName("editor_saveAs");
        editor_close = new QAction(Tool);
        editor_close->setObjectName("editor_close");
        editor_changeLang = new QAction(Tool);
        editor_changeLang->setObjectName("editor_changeLang");
        editor_autoSave = new QAction(Tool);
        editor_autoSave->setObjectName("editor_autoSave");
        editor_autoSave->setCheckable(true);
        Add_Custom_Dictonary = new QAction(Tool);
        Add_Custom_Dictonary->setObjectName("Add_Custom_Dictonary");
        Show_Time_Stamps = new QAction(Tool);
        Show_Time_Stamps->setObjectName("Show_Time_Stamps");
        Show_Time_Stamps->setCheckable(true);
        Upload_and_generate_Transcript = new QAction(Tool);
        Upload_and_generate_Transcript->setObjectName("Upload_and_generate_Transcript");
        Upload_and_generate_Transcript->setEnabled(false);
        Real_Time_Data_Saver = new QAction(Tool);
        Real_Time_Data_Saver->setObjectName("Real_Time_Data_Saver");
        Real_Time_Data_Saver->setCheckable(true);
        Save_as_PDF = new QAction(Tool);
        Save_as_PDF->setObjectName("Save_as_PDF");
        Open_File_in_Editor1 = new QAction(Tool);
        Open_File_in_Editor1->setObjectName("Open_File_in_Editor1");
        Open_File_in_Editor2 = new QAction(Tool);
        Open_File_in_Editor2->setObjectName("Open_File_in_Editor2");
        editor_save2 = new QAction(Tool);
        editor_save2->setObjectName("editor_save2");
        editor_save3 = new QAction(Tool);
        editor_save3->setObjectName("editor_save3");
        move_along_timestamps = new QAction(Tool);
        move_along_timestamps->setObjectName("move_along_timestamps");
        move_along_timestamps->setCheckable(true);
        move_along_timestamps->setChecked(false);
        actionShowLineTimeStamp = new QAction(Tool);
        actionShowLineTimeStamp->setObjectName("actionShowLineTimeStamp");
        actionShowLineTimeStamp->setCheckable(false);
        actionRemove_Speaker = new QAction(Tool);
        actionRemove_Speaker->setObjectName("actionRemove_Speaker");
        actionSave_as_Text = new QAction(Tool);
        actionSave_as_Text->setObjectName("actionSave_as_Text");
        actionVoice_Typing = new QAction(Tool);
        actionVoice_Typing->setObjectName("actionVoice_Typing");
        actionword_count = new QAction(Tool);
        actionword_count->setObjectName("actionword_count");
        actionLink = new QAction(Tool);
        actionLink->setObjectName("actionLink");
        actionVoice_Typing_2 = new QAction(Tool);
        actionVoice_Typing_2->setObjectName("actionVoice_Typing_2");
        actionRemove_Time_Stamp = new QAction(Tool);
        actionRemove_Time_Stamp->setObjectName("actionRemove_Time_Stamp");
        actionAbout = new QAction(Tool);
        actionAbout->setObjectName("actionAbout");
        actionSave_as_XML = new QAction(Tool);
        actionSave_as_XML->setObjectName("actionSave_as_XML");
        actionVersion_1_0_3 = new QAction(Tool);
        actionVersion_1_0_3->setObjectName("actionVersion_1_0_3");
        actionVersion_1_0_3->setEnabled(false);
        centralwidget = new QWidget(Tool);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        add_video = new QToolButton(centralwidget);
        add_video->setObjectName("add_video");
        add_video->setToolTipDuration(-1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_video->setIcon(icon);
        add_video->setIconSize(QSize(25, 25));
        add_video->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout_2->addWidget(add_video);

        horizontalSpacer_7 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        open_transcript = new QToolButton(centralwidget);
        open_transcript->setObjectName("open_transcript");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/open file.png"), QSize(), QIcon::Normal, QIcon::Off);
        open_transcript->setIcon(icon1);
        open_transcript->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(open_transcript);

        horizontalSpacer_8 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        new_transcript = new QToolButton(centralwidget);
        new_transcript->setObjectName("new_transcript");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/font color.png"), QSize(), QIcon::Normal, QIcon::Off);
        new_transcript->setIcon(icon2);
        new_transcript->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(new_transcript);

        horizontalSpacer_6 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        save_transcript = new QToolButton(centralwidget);
        save_transcript->setObjectName("save_transcript");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        save_transcript->setIcon(icon3);
        save_transcript->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(save_transcript);

        horizontalSpacer_5 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        save_as_transcript = new QToolButton(centralwidget);
        save_as_transcript->setObjectName("save_as_transcript");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/save as.png"), QSize(), QIcon::Normal, QIcon::Off);
        save_as_transcript->setIcon(icon4);
        save_as_transcript->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(save_as_transcript);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        fontComboBox = new QFontComboBox(centralwidget);
        fontComboBox->setObjectName("fontComboBox");

        horizontalLayout_2->addWidget(fontComboBox);

        horizontalSpacer_14 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);

        load_a_custom_dict = new QToolButton(centralwidget);
        load_a_custom_dict->setObjectName("load_a_custom_dict");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/english to hindi.png"), QSize(), QIcon::Normal, QIcon::Off);
        load_a_custom_dict->setIcon(icon5);
        load_a_custom_dict->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(load_a_custom_dict);

        horizontalSpacer_10 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        get_PDF = new QToolButton(centralwidget);
        get_PDF->setObjectName("get_PDF");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/load data.png"), QSize(), QIcon::Normal, QIcon::Off);
        get_PDF->setIcon(icon6);
        get_PDF->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(get_PDF);

        horizontalSpacer_11 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);

        decreseFontSize = new QToolButton(centralwidget);
        decreseFontSize->setObjectName("decreseFontSize");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/zoom out.png"), QSize(), QIcon::Normal, QIcon::Off);
        decreseFontSize->setIcon(icon7);
        decreseFontSize->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(decreseFontSize);

        horizontalSpacer_12 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        increaseFontSize = new QToolButton(centralwidget);
        increaseFontSize->setObjectName("increaseFontSize");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/zoom in.png"), QSize(), QIcon::Normal, QIcon::Off);
        increaseFontSize->setIcon(icon8);
        increaseFontSize->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(increaseFontSize);

        horizontalSpacer_13 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);

        toggleWordEditor = new QToolButton(centralwidget);
        toggleWordEditor->setObjectName("toggleWordEditor");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/font black.png"), QSize(), QIcon::Normal, QIcon::Off);
        toggleWordEditor->setIcon(icon9);
        toggleWordEditor->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(toggleWordEditor);

        horizontalSpacer_9 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        keyboard_shortcuts = new QToolButton(centralwidget);
        keyboard_shortcuts->setObjectName("keyboard_shortcuts");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/information.png"), QSize(), QIcon::Normal, QIcon::Off);
        keyboard_shortcuts->setIcon(icon10);
        keyboard_shortcuts->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(keyboard_shortcuts);


        verticalLayout_4->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        horizontalLayout_3 = new QHBoxLayout(tab);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        splitter_tool = new QSplitter(tab);
        splitter_tool->setObjectName("splitter_tool");
        splitter_tool->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter_tool);
        layoutWidget->setObjectName("layoutWidget");
        playerLayout = new QVBoxLayout(layoutWidget);
        playerLayout->setObjectName("playerLayout");
        playerLayout->setContentsMargins(0, 0, 0, 0);
        m_videoWidget = new VideoWidget(layoutWidget);
        m_videoWidget->setObjectName("m_videoWidget");

        playerLayout->addWidget(m_videoWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        slider_position = new QSlider(layoutWidget);
        slider_position->setObjectName("slider_position");
        slider_position->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(slider_position);

        label_position = new QLabel(layoutWidget);
        label_position->setObjectName("label_position");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_position->sizePolicy().hasHeightForWidth());
        label_position->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_position);


        playerLayout->addLayout(horizontalLayout);

        m_playerControls = new PlayerControls(layoutWidget);
        m_playerControls->setObjectName("m_playerControls");
        sizePolicy.setHeightForWidth(m_playerControls->sizePolicy().hasHeightForWidth());
        m_playerControls->setSizePolicy(sizePolicy);

        playerLayout->addWidget(m_playerControls);

        splitter_tool->addWidget(layoutWidget);
        verticalLayoutWidget = new QWidget(splitter_tool);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter_editor = new QSplitter(verticalLayoutWidget);
        splitter_editor->setObjectName("splitter_editor");
        splitter_editor->setOrientation(Qt::Vertical);
        m_editor = new Editor(splitter_editor);
        m_editor->setObjectName("m_editor");
        splitter_editor->addWidget(m_editor);
        m_wordEditor = new WordEditor(splitter_editor);
        m_wordEditor->setObjectName("m_wordEditor");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_wordEditor->sizePolicy().hasHeightForWidth());
        m_wordEditor->setSizePolicy(sizePolicy1);
        splitter_editor->addWidget(m_wordEditor);

        verticalLayout->addWidget(splitter_editor);

        m_tagListDisplay = new TagListDisplayWidget(verticalLayoutWidget);
        m_tagListDisplay->setObjectName("m_tagListDisplay");
        sizePolicy.setHeightForWidth(m_tagListDisplay->sizePolicy().hasHeightForWidth());
        m_tagListDisplay->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(m_tagListDisplay);

        splitter_tool->addWidget(verticalLayoutWidget);

        verticalLayout_5->addWidget(splitter_tool);


        horizontalLayout_3->addLayout(verticalLayout_5);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        horizontalLayout_4 = new QHBoxLayout(tab_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        splitter_editor_2 = new QSplitter(tab_2);
        splitter_editor_2->setObjectName("splitter_editor_2");
        splitter_editor_2->setOrientation(Qt::Vertical);
        m_editor_2 = new Editor(splitter_editor_2);
        m_editor_2->setObjectName("m_editor_2");
        splitter_editor_2->addWidget(m_editor_2);

        verticalLayout_2->addWidget(splitter_editor_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_8->addWidget(pushButton_3);

        btn_translate = new QPushButton(tab_2);
        btn_translate->setObjectName("btn_translate");

        horizontalLayout_8->addWidget(btn_translate);


        verticalLayout_2->addLayout(horizontalLayout_8);

        m_tagListDisplay_2 = new TagListDisplayWidget(tab_2);
        m_tagListDisplay_2->setObjectName("m_tagListDisplay_2");
        sizePolicy.setHeightForWidth(m_tagListDisplay_2->sizePolicy().hasHeightForWidth());
        m_tagListDisplay_2->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(m_tagListDisplay_2);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        splitter_editor_3 = new QSplitter(tab_2);
        splitter_editor_3->setObjectName("splitter_editor_3");
        splitter_editor_3->setOrientation(Qt::Vertical);
        m_editor_3 = new Editor(splitter_editor_3);
        m_editor_3->setObjectName("m_editor_3");
        splitter_editor_3->addWidget(m_editor_3);

        verticalLayout_3->addWidget(splitter_editor_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout_9->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_9->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_9);

        m_tagListDisplay_3 = new TagListDisplayWidget(tab_2);
        m_tagListDisplay_3->setObjectName("m_tagListDisplay_3");
        sizePolicy.setHeightForWidth(m_tagListDisplay_3->sizePolicy().hasHeightForWidth());
        m_tagListDisplay_3->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(m_tagListDisplay_3);


        horizontalLayout_4->addLayout(verticalLayout_3);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_4->addWidget(tabWidget);

        Tool->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tool);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuMedia_Player = new QMenu(menubar);
        menuMedia_Player->setObjectName("menuMedia_Player");
        menuEditor = new QMenu(menubar);
        menuEditor->setObjectName("menuEditor");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuTranslation = new QMenu(menubar);
        menuTranslation->setObjectName("menuTranslation");
        Tool->setMenuBar(menubar);
        statusbar = new QStatusBar(Tool);
        statusbar->setObjectName("statusbar");
        Tool->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuMedia_Player->menuAction());
        menubar->addAction(menuEditor->menuAction());
        menubar->addAction(menuTranslation->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(Upload_and_generate_Transcript);
        menuFile->addAction(Save_as_PDF);
        menuFile->addAction(close);
        menuFile->addAction(actionSave_as_Text);
        menuFile->addAction(actionVersion_1_0_3);
        menuMedia_Player->addAction(player_open);
        menuMedia_Player->addAction(player_togglePlay);
        menuMedia_Player->addAction(player_seekForward);
        menuMedia_Player->addAction(player_seekBackward);
        menuMedia_Player->addAction(actionRemove_Time_Stamp);
        menuEditor->addAction(editor_openTranscript);
        menuEditor->addAction(editor_save);
        menuEditor->addAction(editor_saveAs);
        menuEditor->addAction(editor_close);
        menuEditor->addSeparator();
        menuEditor->addAction(editor_debugBlocks);
        menuEditor->addAction(editor_jumpToLine);
        menuEditor->addSeparator();
        menuEditor->addAction(editor_splitLine);
        menuEditor->addAction(editor_mergeUp);
        menuEditor->addAction(editor_mergeDown);
        menuEditor->addAction(editor_toggleWords);
        menuEditor->addSeparator();
        menuEditor->addAction(editor_changeLang);
        menuEditor->addAction(editor_changeSpeaker);
        menuEditor->addAction(editor_propagateTime);
        menuEditor->addAction(editor_editTags);
        menuEditor->addSeparator();
        menuEditor->addAction(editor_autoSave);
        menuEditor->addSeparator();
        menuEditor->addSeparator();
        menuEditor->addAction(Add_Custom_Dictonary);
        menuEditor->addAction(Show_Time_Stamps);
        menuEditor->addAction(Real_Time_Data_Saver);
        menuEditor->addAction(move_along_timestamps);
        menuEditor->addAction(actionShowLineTimeStamp);
        menuEditor->addAction(actionRemove_Speaker);
        menuEditor->addAction(actionword_count);
        menuEditor->addAction(actionVoice_Typing_2);
        menuEdit->addAction(edit_undo);
        menuEdit->addAction(edit_redo);
        menuEdit->addSeparator();
        menuEdit->addAction(edit_cut);
        menuEdit->addAction(edit_copy);
        menuEdit->addAction(edit_paste);
        menuEdit->addSeparator();
        menuEdit->addAction(edit_findReplace);
        menuEdit->addAction(actionLink);
        menuView->addAction(view_incFont);
        menuView->addAction(view_decFont);
        menuView->addAction(view_font);
        menuView->addAction(view_toggleTagList);
        menuHelp->addAction(help_keyboardShortcuts);
        menuHelp->addAction(actionAbout);
        menuTranslation->addAction(Open_File_in_Editor1);
        menuTranslation->addAction(editor_save2);
        menuTranslation->addSeparator();
        menuTranslation->addAction(Open_File_in_Editor2);
        menuTranslation->addAction(editor_save3);

        retranslateUi(Tool);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Tool);
    } // setupUi

    void retranslateUi(QMainWindow *Tool)
    {
        Tool->setWindowTitle(QCoreApplication::translate("Tool", "ASR Post Editor", nullptr));
        close->setText(QCoreApplication::translate("Tool", "Close", nullptr));
#if QT_CONFIG(shortcut)
        close->setShortcut(QCoreApplication::translate("Tool", "Alt+F4", nullptr));
#endif // QT_CONFIG(shortcut)
        player_open->setText(QCoreApplication::translate("Tool", "Open", nullptr));
        editor_open->setText(QCoreApplication::translate("Tool", "Open", nullptr));
        editor_save->setText(QCoreApplication::translate("Tool", "Save", nullptr));
#if QT_CONFIG(shortcut)
        editor_save->setShortcut(QCoreApplication::translate("Tool", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        editor_openTranscript->setText(QCoreApplication::translate("Tool", "Open", nullptr));
        editor_debugBlocks->setText(QCoreApplication::translate("Tool", "Debug Blocks", nullptr));
        editor_jumpToLine->setText(QCoreApplication::translate("Tool", "Jump to Highlighted Line", nullptr));
#if QT_CONFIG(shortcut)
        editor_jumpToLine->setShortcut(QCoreApplication::translate("Tool", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        player_togglePlay->setText(QCoreApplication::translate("Tool", "Play / Pause", nullptr));
#if QT_CONFIG(shortcut)
        player_togglePlay->setShortcut(QCoreApplication::translate("Tool", "Ctrl+Space", nullptr));
#endif // QT_CONFIG(shortcut)
        editor_splitLine->setText(QCoreApplication::translate("Tool", "Split Line", nullptr));
#if QT_CONFIG(shortcut)
        editor_splitLine->setShortcut(QCoreApplication::translate("Tool", "Ctrl+;", nullptr));
#endif // QT_CONFIG(shortcut)
        editor_mergeUp->setText(QCoreApplication::translate("Tool", "Merge Up", nullptr));
#if QT_CONFIG(shortcut)
        editor_mergeUp->setShortcut(QCoreApplication::translate("Tool", "Alt+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        editor_mergeDown->setText(QCoreApplication::translate("Tool", "Merge Down", nullptr));
#if QT_CONFIG(shortcut)
        editor_mergeDown->setShortcut(QCoreApplication::translate("Tool", "Alt+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        editor_findReplace->setText(QCoreApplication::translate("Tool", "Find Replace", nullptr));
        editor_toggleWords->setText(QCoreApplication::translate("Tool", "Toggle Word Editor", nullptr));
#if QT_CONFIG(shortcut)
        editor_toggleWords->setShortcut(QCoreApplication::translate("Tool", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        player_seekForward->setText(QCoreApplication::translate("Tool", "Seek Forward", nullptr));
#if QT_CONFIG(shortcut)
        player_seekForward->setShortcut(QCoreApplication::translate("Tool", "Ctrl+.", nullptr));
#endif // QT_CONFIG(shortcut)
        player_seekBackward->setText(QCoreApplication::translate("Tool", "Seek Backward", nullptr));
#if QT_CONFIG(shortcut)
        player_seekBackward->setShortcut(QCoreApplication::translate("Tool", "Ctrl+,", nullptr));
#endif // QT_CONFIG(shortcut)
        edit_undo->setText(QCoreApplication::translate("Tool", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        edit_undo->setShortcut(QCoreApplication::translate("Tool", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        edit_redo->setText(QCoreApplication::translate("Tool", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        edit_redo->setShortcut(QCoreApplication::translate("Tool", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        edit_cut->setText(QCoreApplication::translate("Tool", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        edit_cut->setShortcut(QCoreApplication::translate("Tool", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        edit_copy->setText(QCoreApplication::translate("Tool", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        edit_copy->setShortcut(QCoreApplication::translate("Tool", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        edit_paste->setText(QCoreApplication::translate("Tool", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        edit_paste->setShortcut(QCoreApplication::translate("Tool", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        edit_findReplace->setText(QCoreApplication::translate("Tool", "Find / Replace", nullptr));
#if QT_CONFIG(shortcut)
        edit_findReplace->setShortcut(QCoreApplication::translate("Tool", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        view_incFont->setText(QCoreApplication::translate("Tool", "Increase Font Size", nullptr));
#if QT_CONFIG(shortcut)
        view_incFont->setShortcut(QCoreApplication::translate("Tool", "Ctrl+=", nullptr));
#endif // QT_CONFIG(shortcut)
        view_decFont->setText(QCoreApplication::translate("Tool", "Decrease Font Size", nullptr));
#if QT_CONFIG(shortcut)
        view_decFont->setShortcut(QCoreApplication::translate("Tool", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        editor_changeSpeaker->setText(QCoreApplication::translate("Tool", "Change Speaker", nullptr));
#if QT_CONFIG(shortcut)
        editor_changeSpeaker->setShortcut(QCoreApplication::translate("Tool", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        editor_propagateTime->setText(QCoreApplication::translate("Tool", "Propagate Time", nullptr));
#if QT_CONFIG(shortcut)
        editor_propagateTime->setShortcut(QCoreApplication::translate("Tool", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        help_keyboardShortcuts->setText(QCoreApplication::translate("Tool", "Keyboard Shortcuts", nullptr));
        view_font->setText(QCoreApplication::translate("Tool", "Change Font", nullptr));
        view_toggleTagList->setText(QCoreApplication::translate("Tool", "Toggle TagList", nullptr));
        editor_editTags->setText(QCoreApplication::translate("Tool", "Edit Tags", nullptr));
#if QT_CONFIG(shortcut)
        editor_editTags->setShortcut(QCoreApplication::translate("Tool", "Ctrl+'", nullptr));
#endif // QT_CONFIG(shortcut)
        action_2->setText(QCoreApplication::translate("Tool", "jd", nullptr));
        editor_saveAs->setText(QCoreApplication::translate("Tool", "Save As", nullptr));
        editor_close->setText(QCoreApplication::translate("Tool", "Close", nullptr));
        editor_changeLang->setText(QCoreApplication::translate("Tool", "Change Transcript Language", nullptr));
        editor_autoSave->setText(QCoreApplication::translate("Tool", "Auto Save", nullptr));
        Add_Custom_Dictonary->setText(QCoreApplication::translate("Tool", "Add Custom Dictonary", nullptr));
        Show_Time_Stamps->setText(QCoreApplication::translate("Tool", "Show Time Stamps", nullptr));
        Upload_and_generate_Transcript->setText(QCoreApplication::translate("Tool", "Upload and generate Transcript", nullptr));
        Real_Time_Data_Saver->setText(QCoreApplication::translate("Tool", "Real Time Data Saver", nullptr));
        Save_as_PDF->setText(QCoreApplication::translate("Tool", "Save as PDF", nullptr));
        Open_File_in_Editor1->setText(QCoreApplication::translate("Tool", "Open File in Editor1", nullptr));
        Open_File_in_Editor2->setText(QCoreApplication::translate("Tool", "Open File in Editor2", nullptr));
        editor_save2->setText(QCoreApplication::translate("Tool", "Save Editor1", nullptr));
        editor_save3->setText(QCoreApplication::translate("Tool", "Save Editor2", nullptr));
        move_along_timestamps->setText(QCoreApplication::translate("Tool", "Move Along TimeStamps", nullptr));
        actionShowLineTimeStamp->setText(QCoreApplication::translate("Tool", "ShowLineTimeStamp", nullptr));
        actionRemove_Speaker->setText(QCoreApplication::translate("Tool", "Remove Speaker", nullptr));
        actionSave_as_Text->setText(QCoreApplication::translate("Tool", "Save as Text", nullptr));
        actionVoice_Typing->setText(QCoreApplication::translate("Tool", "Voice Typing", nullptr));
        actionword_count->setText(QCoreApplication::translate("Tool", "word count", nullptr));
        actionLink->setText(QCoreApplication::translate("Tool", "Link", nullptr));
        actionVoice_Typing_2->setText(QCoreApplication::translate("Tool", "Voice Typing", nullptr));
        actionRemove_Time_Stamp->setText(QCoreApplication::translate("Tool", "Remove Time Stamp", nullptr));
        actionAbout->setText(QCoreApplication::translate("Tool", "About", nullptr));
        actionSave_as_XML->setText(QCoreApplication::translate("Tool", "Save as XML", nullptr));
        actionVersion_1_0_3->setText(QCoreApplication::translate("Tool", "Version 3.0.1", nullptr));
#if QT_CONFIG(tooltip)
        add_video->setToolTip(QCoreApplication::translate("Tool", "Add video", nullptr));
#endif // QT_CONFIG(tooltip)
        add_video->setText(QCoreApplication::translate("Tool", "...", nullptr));
#if QT_CONFIG(tooltip)
        open_transcript->setToolTip(QCoreApplication::translate("Tool", "Open Transcript", nullptr));
#endif // QT_CONFIG(tooltip)
        open_transcript->setText(QCoreApplication::translate("Tool", "...", nullptr));
#if QT_CONFIG(tooltip)
        new_transcript->setToolTip(QCoreApplication::translate("Tool", "New Transcript", nullptr));
#endif // QT_CONFIG(tooltip)
        new_transcript->setText(QString());
#if QT_CONFIG(tooltip)
        save_transcript->setToolTip(QCoreApplication::translate("Tool", "Save ", nullptr));
#endif // QT_CONFIG(tooltip)
        save_transcript->setText(QCoreApplication::translate("Tool", "...", nullptr));
#if QT_CONFIG(tooltip)
        save_as_transcript->setToolTip(QCoreApplication::translate("Tool", "Save as", nullptr));
#endif // QT_CONFIG(tooltip)
        save_as_transcript->setText(QCoreApplication::translate("Tool", "...", nullptr));
#if QT_CONFIG(tooltip)
        load_a_custom_dict->setToolTip(QCoreApplication::translate("Tool", "Load Custom Dictonary", nullptr));
#endif // QT_CONFIG(tooltip)
        load_a_custom_dict->setText(QCoreApplication::translate("Tool", "...", nullptr));
#if QT_CONFIG(tooltip)
        get_PDF->setToolTip(QCoreApplication::translate("Tool", "Get PDF", nullptr));
#endif // QT_CONFIG(tooltip)
        get_PDF->setText(QCoreApplication::translate("Tool", "...", nullptr));
#if QT_CONFIG(tooltip)
        decreseFontSize->setToolTip(QCoreApplication::translate("Tool", "Decrese Font Size", nullptr));
#endif // QT_CONFIG(tooltip)
        decreseFontSize->setText(QCoreApplication::translate("Tool", "...", nullptr));
#if QT_CONFIG(tooltip)
        increaseFontSize->setToolTip(QCoreApplication::translate("Tool", "Increase Font Size", nullptr));
#endif // QT_CONFIG(tooltip)
        increaseFontSize->setText(QCoreApplication::translate("Tool", "...", nullptr));
#if QT_CONFIG(tooltip)
        toggleWordEditor->setToolTip(QCoreApplication::translate("Tool", "Toggle Word Editor", nullptr));
#endif // QT_CONFIG(tooltip)
        toggleWordEditor->setText(QCoreApplication::translate("Tool", "...", nullptr));
        keyboard_shortcuts->setText(QCoreApplication::translate("Tool", "...", nullptr));
        label_position->setText(QCoreApplication::translate("Tool", "00:00 / 00:00", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Tool", "Video", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Tool", "Speak", nullptr));
        btn_translate->setText(QCoreApplication::translate("Tool", "Translate", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Tool", "Speak", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Tool", "Save", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Tool", "Translation", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Tool", "File", nullptr));
        menuMedia_Player->setTitle(QCoreApplication::translate("Tool", "Player", nullptr));
        menuEditor->setTitle(QCoreApplication::translate("Tool", "Editor", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Tool", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("Tool", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Tool", "Help", nullptr));
        menuTranslation->setTitle(QCoreApplication::translate("Tool", "Translation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tool: public Ui_Tool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOL_H

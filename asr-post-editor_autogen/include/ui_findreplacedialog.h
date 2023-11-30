/********************************************************************************
** Form generated from reading UI file 'findreplacedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDREPLACEDIALOG_H
#define UI_FINDREPLACEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FindReplaceDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *text_find;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *button_find_previous;
    QPushButton *button_find_next;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *text_replace;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *button_replace;
    QPushButton *button_replace_all;
    QCheckBox *whole_words;
    QCheckBox *case_sensitive;

    void setupUi(QDialog *FindReplaceDialog)
    {
        if (FindReplaceDialog->objectName().isEmpty())
            FindReplaceDialog->setObjectName(QString::fromUtf8("FindReplaceDialog"));
        FindReplaceDialog->resize(436, 287);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FindReplaceDialog->sizePolicy().hasHeightForWidth());
        FindReplaceDialog->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(FindReplaceDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(FindReplaceDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        text_find = new QLineEdit(FindReplaceDialog);
        text_find->setObjectName(QString::fromUtf8("text_find"));

        horizontalLayout_2->addWidget(text_find);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        button_find_previous = new QPushButton(FindReplaceDialog);
        button_find_previous->setObjectName(QString::fromUtf8("button_find_previous"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_find_previous->sizePolicy().hasHeightForWidth());
        button_find_previous->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(button_find_previous);

        button_find_next = new QPushButton(FindReplaceDialog);
        button_find_next->setObjectName(QString::fromUtf8("button_find_next"));

        horizontalLayout_4->addWidget(button_find_next);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(FindReplaceDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        text_replace = new QLineEdit(FindReplaceDialog);
        text_replace->setObjectName(QString::fromUtf8("text_replace"));

        horizontalLayout_3->addWidget(text_replace);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        button_replace = new QPushButton(FindReplaceDialog);
        button_replace->setObjectName(QString::fromUtf8("button_replace"));

        horizontalLayout_5->addWidget(button_replace);

        button_replace_all = new QPushButton(FindReplaceDialog);
        button_replace_all->setObjectName(QString::fromUtf8("button_replace_all"));

        horizontalLayout_5->addWidget(button_replace_all);


        verticalLayout->addLayout(horizontalLayout_5);

        whole_words = new QCheckBox(FindReplaceDialog);
        whole_words->setObjectName(QString::fromUtf8("whole_words"));

        verticalLayout->addWidget(whole_words);

        case_sensitive = new QCheckBox(FindReplaceDialog);
        case_sensitive->setObjectName(QString::fromUtf8("case_sensitive"));
        case_sensitive->setChecked(true);

        verticalLayout->addWidget(case_sensitive);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(FindReplaceDialog);

        QMetaObject::connectSlotsByName(FindReplaceDialog);
    } // setupUi

    void retranslateUi(QDialog *FindReplaceDialog)
    {
        FindReplaceDialog->setWindowTitle(QCoreApplication::translate("FindReplaceDialog", "Find Replace", nullptr));
        label->setText(QCoreApplication::translate("FindReplaceDialog", "Find:      ", nullptr));
        button_find_previous->setText(QCoreApplication::translate("FindReplaceDialog", "Find Previous", nullptr));
        button_find_next->setText(QCoreApplication::translate("FindReplaceDialog", "Find Next", nullptr));
        label_2->setText(QCoreApplication::translate("FindReplaceDialog", "Replace:", nullptr));
        button_replace->setText(QCoreApplication::translate("FindReplaceDialog", "Replace", nullptr));
        button_replace_all->setText(QCoreApplication::translate("FindReplaceDialog", "Replace All", nullptr));
        whole_words->setText(QCoreApplication::translate("FindReplaceDialog", "Find Whole Words", nullptr));
        case_sensitive->setText(QCoreApplication::translate("FindReplaceDialog", "Case Sensitive", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindReplaceDialog: public Ui_FindReplaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDREPLACEDIALOG_H

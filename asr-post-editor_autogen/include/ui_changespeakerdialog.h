/********************************************************************************
** Form generated from reading UI file 'changespeakerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGESPEAKERDIALOG_H
#define UI_CHANGESPEAKERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangeSpeakerDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_currentSpeaker;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_speaker;
    QCheckBox *checkBox_changeAllOccurences;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChangeSpeakerDialog)
    {
        if (ChangeSpeakerDialog->objectName().isEmpty())
            ChangeSpeakerDialog->setObjectName(QString::fromUtf8("ChangeSpeakerDialog"));
        ChangeSpeakerDialog->resize(344, 131);
        horizontalLayout_3 = new QHBoxLayout(ChangeSpeakerDialog);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(ChangeSpeakerDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        label_currentSpeaker = new QLabel(ChangeSpeakerDialog);
        label_currentSpeaker->setObjectName(QString::fromUtf8("label_currentSpeaker"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_currentSpeaker->sizePolicy().hasHeightForWidth());
        label_currentSpeaker->setSizePolicy(sizePolicy1);
        label_currentSpeaker->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_currentSpeaker);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ChangeSpeakerDialog);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        comboBox_speaker = new QComboBox(ChangeSpeakerDialog);
        comboBox_speaker->setObjectName(QString::fromUtf8("comboBox_speaker"));
        sizePolicy1.setHeightForWidth(comboBox_speaker->sizePolicy().hasHeightForWidth());
        comboBox_speaker->setSizePolicy(sizePolicy1);
        comboBox_speaker->setEditable(true);

        horizontalLayout->addWidget(comboBox_speaker);


        verticalLayout->addLayout(horizontalLayout);

        checkBox_changeAllOccurences = new QCheckBox(ChangeSpeakerDialog);
        checkBox_changeAllOccurences->setObjectName(QString::fromUtf8("checkBox_changeAllOccurences"));

        verticalLayout->addWidget(checkBox_changeAllOccurences);


        horizontalLayout_3->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(ChangeSpeakerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        retranslateUi(ChangeSpeakerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ChangeSpeakerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ChangeSpeakerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChangeSpeakerDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeSpeakerDialog)
    {
        ChangeSpeakerDialog->setWindowTitle(QCoreApplication::translate("ChangeSpeakerDialog", "Change Speaker", nullptr));
        label_2->setText(QCoreApplication::translate("ChangeSpeakerDialog", "Current  Speaker:", nullptr));
        label_currentSpeaker->setText(QCoreApplication::translate("ChangeSpeakerDialog", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("ChangeSpeakerDialog", "New Speaker:", nullptr));
        checkBox_changeAllOccurences->setText(QCoreApplication::translate("ChangeSpeakerDialog", "Change all occurences", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeSpeakerDialog: public Ui_ChangeSpeakerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGESPEAKERDIALOG_H

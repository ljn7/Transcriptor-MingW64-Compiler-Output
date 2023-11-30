/********************************************************************************
** Form generated from reading UI file 'tagselectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAGSELECTIONDIALOG_H
#define UI_TAGSELECTIONDIALOG_H

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

class Ui_TagSelectionDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_noisy;
    QCheckBox *checkBox_mltsp;
    QCheckBox *checkBox_slacked;
    QCheckBox *checkBox_l1infl;
    QCheckBox *checkBox_invs;
    QCheckBox *checkBox_lang;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_lang;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TagSelectionDialog)
    {
        if (TagSelectionDialog->objectName().isEmpty())
            TagSelectionDialog->setObjectName(QString::fromUtf8("TagSelectionDialog"));
        TagSelectionDialog->resize(422, 273);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TagSelectionDialog->sizePolicy().hasHeightForWidth());
        TagSelectionDialog->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(TagSelectionDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox_noisy = new QCheckBox(TagSelectionDialog);
        checkBox_noisy->setObjectName(QString::fromUtf8("checkBox_noisy"));

        verticalLayout->addWidget(checkBox_noisy);

        checkBox_mltsp = new QCheckBox(TagSelectionDialog);
        checkBox_mltsp->setObjectName(QString::fromUtf8("checkBox_mltsp"));

        verticalLayout->addWidget(checkBox_mltsp);

        checkBox_slacked = new QCheckBox(TagSelectionDialog);
        checkBox_slacked->setObjectName(QString::fromUtf8("checkBox_slacked"));

        verticalLayout->addWidget(checkBox_slacked);

        checkBox_l1infl = new QCheckBox(TagSelectionDialog);
        checkBox_l1infl->setObjectName(QString::fromUtf8("checkBox_l1infl"));

        verticalLayout->addWidget(checkBox_l1infl);

        checkBox_invs = new QCheckBox(TagSelectionDialog);
        checkBox_invs->setObjectName(QString::fromUtf8("checkBox_invs"));

        verticalLayout->addWidget(checkBox_invs);

        checkBox_lang = new QCheckBox(TagSelectionDialog);
        checkBox_lang->setObjectName(QString::fromUtf8("checkBox_lang"));

        verticalLayout->addWidget(checkBox_lang);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(TagSelectionDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        comboBox_lang = new QComboBox(TagSelectionDialog);
        comboBox_lang->setObjectName(QString::fromUtf8("comboBox_lang"));
        comboBox_lang->setEditable(true);

        horizontalLayout->addWidget(comboBox_lang);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(TagSelectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        retranslateUi(TagSelectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TagSelectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TagSelectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TagSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *TagSelectionDialog)
    {
        TagSelectionDialog->setWindowTitle(QCoreApplication::translate("TagSelectionDialog", "Tag Selection", nullptr));
        checkBox_noisy->setText(QCoreApplication::translate("TagSelectionDialog", "Noisy Audio (Noisy)", nullptr));
        checkBox_mltsp->setText(QCoreApplication::translate("TagSelectionDialog", "Multiple Speakers Speaking (MltSp)", nullptr));
        checkBox_slacked->setText(QCoreApplication::translate("TagSelectionDialog", "Slacked Pronunciation (Slacked)", nullptr));
        checkBox_l1infl->setText(QCoreApplication::translate("TagSelectionDialog", "L1 Language Influence (L1Infl)", nullptr));
        checkBox_invs->setText(QCoreApplication::translate("TagSelectionDialog", "Invalid Sentence (InvS)", nullptr));
        checkBox_lang->setText(QCoreApplication::translate("TagSelectionDialog", "Different Language (Lang_)", nullptr));
        label->setText(QCoreApplication::translate("TagSelectionDialog", "Language:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TagSelectionDialog: public Ui_TagSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAGSELECTIONDIALOG_H

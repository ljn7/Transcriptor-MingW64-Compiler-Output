/********************************************************************************
** Form generated from reading UI file 'timepropagationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMEPROPAGATIONDIALOG_H
#define UI_TIMEPROPAGATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TimePropagationDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpinBox *spinBox_h;
    QLabel *label_5;
    QSpinBox *spinBox_m;
    QLabel *label_6;
    QDoubleSpinBox *spinBox_s;
    QCheckBox *checkBox_negateTime;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinBox_start;
    QLabel *label_3;
    QSpinBox *spinBox_end;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TimePropagationDialog)
    {
        if (TimePropagationDialog->objectName().isEmpty())
            TimePropagationDialog->setObjectName(QString::fromUtf8("TimePropagationDialog"));
        TimePropagationDialog->resize(495, 195);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TimePropagationDialog->sizePolicy().hasHeightForWidth());
        TimePropagationDialog->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(TimePropagationDialog);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(TimePropagationDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(TimePropagationDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_4);

        spinBox_h = new QSpinBox(TimePropagationDialog);
        spinBox_h->setObjectName(QString::fromUtf8("spinBox_h"));

        horizontalLayout->addWidget(spinBox_h);

        label_5 = new QLabel(TimePropagationDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_5);

        spinBox_m = new QSpinBox(TimePropagationDialog);
        spinBox_m->setObjectName(QString::fromUtf8("spinBox_m"));

        horizontalLayout->addWidget(spinBox_m);

        label_6 = new QLabel(TimePropagationDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_6);

        spinBox_s = new QDoubleSpinBox(TimePropagationDialog);
        spinBox_s->setObjectName(QString::fromUtf8("spinBox_s"));
        spinBox_s->setDecimals(3);
        spinBox_s->setMaximum(99.998999999999995);

        horizontalLayout->addWidget(spinBox_s);


        verticalLayout->addLayout(horizontalLayout);

        checkBox_negateTime = new QCheckBox(TimePropagationDialog);
        checkBox_negateTime->setObjectName(QString::fromUtf8("checkBox_negateTime"));

        verticalLayout->addWidget(checkBox_negateTime);

        label_2 = new QLabel(TimePropagationDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spinBox_start = new QSpinBox(TimePropagationDialog);
        spinBox_start->setObjectName(QString::fromUtf8("spinBox_start"));

        horizontalLayout_2->addWidget(spinBox_start);

        label_3 = new QLabel(TimePropagationDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_3);

        spinBox_end = new QSpinBox(TimePropagationDialog);
        spinBox_end->setObjectName(QString::fromUtf8("spinBox_end"));

        horizontalLayout_2->addWidget(spinBox_end);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(TimePropagationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        retranslateUi(TimePropagationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TimePropagationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TimePropagationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TimePropagationDialog);
    } // setupUi

    void retranslateUi(QDialog *TimePropagationDialog)
    {
        TimePropagationDialog->setWindowTitle(QCoreApplication::translate("TimePropagationDialog", "Time Propagation", nullptr));
        label->setText(QCoreApplication::translate("TimePropagationDialog", "Time to propagate :", nullptr));
        label_4->setText(QCoreApplication::translate("TimePropagationDialog", "h:", nullptr));
        label_5->setText(QCoreApplication::translate("TimePropagationDialog", "m:", nullptr));
        label_6->setText(QCoreApplication::translate("TimePropagationDialog", "s:", nullptr));
        checkBox_negateTime->setText(QCoreApplication::translate("TimePropagationDialog", "Negate Time", nullptr));
        label_2->setText(QCoreApplication::translate("TimePropagationDialog", "Block Range:", nullptr));
        label_3->setText(QCoreApplication::translate("TimePropagationDialog", "--", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimePropagationDialog: public Ui_TimePropagationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMEPROPAGATIONDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'addgroup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGROUP_H
#define UI_ADDGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addgroup
{
public:
    QPushButton *add;
    QWidget *layoutWidget;
    QHBoxLayout *AGLayout;
    QVBoxLayout *AGLLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *AGELayout;
    QLineEdit *LStream;
    QLineEdit *LBatch;
    QComboBox *SemC;
    QComboBox *YearC;
    QPushButton *Cancel;

    void setupUi(QDialog *addgroup)
    {
        if (addgroup->objectName().isEmpty())
            addgroup->setObjectName(QString::fromUtf8("addgroup"));
        addgroup->resize(372, 320);
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        addgroup->setFont(font);
        add = new QPushButton(addgroup);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(250, 200, 93, 28));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Georgia"));
        font1.setPointSize(11);
        add->setFont(font1);
        layoutWidget = new QWidget(addgroup);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 321, 161));
        AGLayout = new QHBoxLayout(layoutWidget);
        AGLayout->setSpacing(10);
        AGLayout->setObjectName(QString::fromUtf8("AGLayout"));
        AGLayout->setContentsMargins(0, 0, 0, 0);
        AGLLayout = new QVBoxLayout();
        AGLLayout->setObjectName(QString::fromUtf8("AGLLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        AGLLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        AGLLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        AGLLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        AGLLayout->addWidget(label_4);


        AGLayout->addLayout(AGLLayout);

        AGELayout = new QVBoxLayout();
        AGELayout->setObjectName(QString::fromUtf8("AGELayout"));
        LStream = new QLineEdit(layoutWidget);
        LStream->setObjectName(QString::fromUtf8("LStream"));
        LStream->setFont(font1);

        AGELayout->addWidget(LStream);

        LBatch = new QLineEdit(layoutWidget);
        LBatch->setObjectName(QString::fromUtf8("LBatch"));
        LBatch->setFont(font1);

        AGELayout->addWidget(LBatch);

        SemC = new QComboBox(layoutWidget);
        SemC->addItem(QString());
        SemC->addItem(QString());
        SemC->setObjectName(QString::fromUtf8("SemC"));

        AGELayout->addWidget(SemC);

        YearC = new QComboBox(layoutWidget);
        YearC->addItem(QString());
        YearC->addItem(QString());
        YearC->addItem(QString());
        YearC->addItem(QString());
        YearC->addItem(QString());
        YearC->setObjectName(QString::fromUtf8("YearC"));

        AGELayout->addWidget(YearC);


        AGLayout->addLayout(AGELayout);

        Cancel = new QPushButton(addgroup);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setGeometry(QRect(250, 260, 93, 28));
        QWidget::setTabOrder(LStream, LBatch);
        QWidget::setTabOrder(LBatch, add);
        QWidget::setTabOrder(add, Cancel);

        retranslateUi(addgroup);

        QMetaObject::connectSlotsByName(addgroup);
    } // setupUi

    void retranslateUi(QDialog *addgroup)
    {
        addgroup->setWindowTitle(QApplication::translate("addgroup", "Add Group", nullptr));
        add->setText(QApplication::translate("addgroup", "Add", nullptr));
        label->setText(QApplication::translate("addgroup", "Stream", nullptr));
        label_2->setText(QApplication::translate("addgroup", "Batch", nullptr));
        label_3->setText(QApplication::translate("addgroup", "Semester", nullptr));
        label_4->setText(QApplication::translate("addgroup", "Year", nullptr));
        LStream->setPlaceholderText(QApplication::translate("addgroup", "Example: CE", nullptr));
        LBatch->setPlaceholderText(QApplication::translate("addgroup", "Example: 2018", nullptr));
        SemC->setItemText(0, QApplication::translate("addgroup", "I", nullptr));
        SemC->setItemText(1, QApplication::translate("addgroup", "II", nullptr));

        YearC->setItemText(0, QApplication::translate("addgroup", "1", nullptr));
        YearC->setItemText(1, QApplication::translate("addgroup", "2", nullptr));
        YearC->setItemText(2, QApplication::translate("addgroup", "3", nullptr));
        YearC->setItemText(3, QApplication::translate("addgroup", "4", nullptr));
        YearC->setItemText(4, QApplication::translate("addgroup", "5", nullptr));

        Cancel->setText(QApplication::translate("addgroup", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addgroup: public Ui_addgroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGROUP_H

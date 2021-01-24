/********************************************************************************
** Form generated from reading UI file 'editeach.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITEACH_H
#define UI_EDITEACH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EdiTeach
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *ARTLayout;
    QGroupBox *ATGBox;
    QPushButton *AddT;
    QWidget *layoutWidget1;
    QHBoxLayout *ATLayout;
    QVBoxLayout *ATLLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *ATELayout;
    QLineEdit *LName;
    QLineEdit *LUserName;
    QLineEdit *LPassword;
    QLineEdit *LRetype;
    QGroupBox *RTGBox;
    QPushButton *RemT;
    QWidget *layoutWidget2;
    QHBoxLayout *RTLayout;
    QVBoxLayout *RTLLayout;
    QLabel *label_6;
    QLabel *label_5;
    QVBoxLayout *RTELayout;
    QLineEdit *RUsername;
    QLineEdit *RPassword;
    QPushButton *CancelT;

    void setupUi(QDialog *EdiTeach)
    {
        if (EdiTeach->objectName().isEmpty())
            EdiTeach->setObjectName(QString::fromUtf8("EdiTeach"));
        EdiTeach->resize(751, 409);
        QFont font;
        font.setPointSize(11);
        EdiTeach->setFont(font);
        layoutWidget = new QWidget(EdiTeach);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 691, 341));
        ARTLayout = new QHBoxLayout(layoutWidget);
        ARTLayout->setObjectName(QString::fromUtf8("ARTLayout"));
        ARTLayout->setContentsMargins(0, 0, 0, 0);
        ATGBox = new QGroupBox(layoutWidget);
        ATGBox->setObjectName(QString::fromUtf8("ATGBox"));
        AddT = new QPushButton(ATGBox);
        AddT->setObjectName(QString::fromUtf8("AddT"));
        AddT->setGeometry(QRect(230, 290, 93, 28));
        layoutWidget1 = new QWidget(ATGBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 40, 331, 221));
        ATLayout = new QHBoxLayout(layoutWidget1);
        ATLayout->setObjectName(QString::fromUtf8("ATLayout"));
        ATLayout->setContentsMargins(0, 0, 0, 0);
        ATLLayout = new QVBoxLayout();
        ATLLayout->setObjectName(QString::fromUtf8("ATLLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        ATLLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        ATLLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        ATLLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        ATLLayout->addWidget(label_4);


        ATLayout->addLayout(ATLLayout);

        ATELayout = new QVBoxLayout();
        ATELayout->setObjectName(QString::fromUtf8("ATELayout"));
        LName = new QLineEdit(layoutWidget1);
        LName->setObjectName(QString::fromUtf8("LName"));

        ATELayout->addWidget(LName);

        LUserName = new QLineEdit(layoutWidget1);
        LUserName->setObjectName(QString::fromUtf8("LUserName"));

        ATELayout->addWidget(LUserName);

        LPassword = new QLineEdit(layoutWidget1);
        LPassword->setObjectName(QString::fromUtf8("LPassword"));
        LPassword->setEchoMode(QLineEdit::Password);

        ATELayout->addWidget(LPassword);

        LRetype = new QLineEdit(layoutWidget1);
        LRetype->setObjectName(QString::fromUtf8("LRetype"));
        LRetype->setEchoMode(QLineEdit::Password);

        ATELayout->addWidget(LRetype);


        ATLayout->addLayout(ATELayout);


        ARTLayout->addWidget(ATGBox);

        RTGBox = new QGroupBox(layoutWidget);
        RTGBox->setObjectName(QString::fromUtf8("RTGBox"));
        RemT = new QPushButton(RTGBox);
        RemT->setObjectName(QString::fromUtf8("RemT"));
        RemT->setGeometry(QRect(230, 290, 93, 28));
        layoutWidget2 = new QWidget(RTGBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 70, 291, 141));
        RTLayout = new QHBoxLayout(layoutWidget2);
        RTLayout->setObjectName(QString::fromUtf8("RTLayout"));
        RTLayout->setContentsMargins(0, 0, 0, 0);
        RTLLayout = new QVBoxLayout();
        RTLLayout->setObjectName(QString::fromUtf8("RTLLayout"));
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        RTLLayout->addWidget(label_6);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        RTLLayout->addWidget(label_5);


        RTLayout->addLayout(RTLLayout);

        RTELayout = new QVBoxLayout();
        RTELayout->setObjectName(QString::fromUtf8("RTELayout"));
        RUsername = new QLineEdit(layoutWidget2);
        RUsername->setObjectName(QString::fromUtf8("RUsername"));

        RTELayout->addWidget(RUsername);

        RPassword = new QLineEdit(layoutWidget2);
        RPassword->setObjectName(QString::fromUtf8("RPassword"));
        RPassword->setEchoMode(QLineEdit::Password);

        RTELayout->addWidget(RPassword);


        RTLayout->addLayout(RTELayout);


        ARTLayout->addWidget(RTGBox);

        CancelT = new QPushButton(EdiTeach);
        CancelT->setObjectName(QString::fromUtf8("CancelT"));
        CancelT->setGeometry(QRect(580, 370, 93, 28));
        QWidget::setTabOrder(LName, LUserName);
        QWidget::setTabOrder(LUserName, LPassword);
        QWidget::setTabOrder(LPassword, LRetype);
        QWidget::setTabOrder(LRetype, AddT);
        QWidget::setTabOrder(AddT, RUsername);
        QWidget::setTabOrder(RUsername, RPassword);
        QWidget::setTabOrder(RPassword, RemT);

        retranslateUi(EdiTeach);

        QMetaObject::connectSlotsByName(EdiTeach);
    } // setupUi

    void retranslateUi(QDialog *EdiTeach)
    {
        EdiTeach->setWindowTitle(QApplication::translate("EdiTeach", "Add/Remove Account", nullptr));
        ATGBox->setTitle(QApplication::translate("EdiTeach", "Add Teacher", nullptr));
        AddT->setText(QApplication::translate("EdiTeach", "Add", nullptr));
        label->setText(QApplication::translate("EdiTeach", "Name", nullptr));
        label_2->setText(QApplication::translate("EdiTeach", "Username", nullptr));
        label_3->setText(QApplication::translate("EdiTeach", "Password", nullptr));
        label_4->setText(QApplication::translate("EdiTeach", "Retype Password", nullptr));
        RTGBox->setTitle(QApplication::translate("EdiTeach", "Remove Teacher", nullptr));
        RemT->setText(QApplication::translate("EdiTeach", "Remove", nullptr));
        label_6->setText(QApplication::translate("EdiTeach", "Username", nullptr));
        label_5->setText(QApplication::translate("EdiTeach", "Password", nullptr));
        CancelT->setText(QApplication::translate("EdiTeach", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EdiTeach: public Ui_EdiTeach {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITEACH_H

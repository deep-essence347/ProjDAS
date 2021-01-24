/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *centralwidget;
    QGroupBox *ASGBox;
    QWidget *layoutWidget;
    QVBoxLayout *ASLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *ASLLayout;
    QLabel *sidLabel;
    QLabel *nameLabel;
    QLabel *rollLabel;
    QVBoxLayout *ASELayout;
    QLineEdit *sid_i;
    QLineEdit *name_i;
    QLineEdit *roll_no_i;
    QWidget *layoutWidget1;
    QHBoxLayout *ASPLayout;
    QPushButton *update;
    QPushButton *register_2;
    QGroupBox *RSGBox;
    QLineEdit *LRemove;
    QWidget *layoutWidget2;
    QHBoxLayout *RSRBLayout;
    QRadioButton *RSid;
    QRadioButton *RName;
    QRadioButton *RRoll;
    QPushButton *RemoveStd;
    QPushButton *CancelF;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(702, 427);
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        Form->setFont(font);
        centralwidget = new QWidget(Form);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ASGBox = new QGroupBox(centralwidget);
        ASGBox->setObjectName(QString::fromUtf8("ASGBox"));
        ASGBox->setGeometry(QRect(10, 30, 371, 301));
        QFont font1;
        font1.setPointSize(12);
        ASGBox->setFont(font1);
        layoutWidget = new QWidget(ASGBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 40, 301, 181));
        ASLayout = new QVBoxLayout(layoutWidget);
        ASLayout->setObjectName(QString::fromUtf8("ASLayout"));
        ASLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ASLLayout = new QVBoxLayout();
        ASLLayout->setObjectName(QString::fromUtf8("ASLLayout"));
        sidLabel = new QLabel(layoutWidget);
        sidLabel->setObjectName(QString::fromUtf8("sidLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sidLabel->sizePolicy().hasHeightForWidth());
        sidLabel->setSizePolicy(sizePolicy);
        sidLabel->setFont(font);

        ASLLayout->addWidget(sidLabel);

        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        sizePolicy.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy);
        nameLabel->setFont(font);

        ASLLayout->addWidget(nameLabel);

        rollLabel = new QLabel(layoutWidget);
        rollLabel->setObjectName(QString::fromUtf8("rollLabel"));
        sizePolicy.setHeightForWidth(rollLabel->sizePolicy().hasHeightForWidth());
        rollLabel->setSizePolicy(sizePolicy);
        rollLabel->setFont(font);

        ASLLayout->addWidget(rollLabel);


        horizontalLayout->addLayout(ASLLayout);

        ASELayout = new QVBoxLayout();
        ASELayout->setObjectName(QString::fromUtf8("ASELayout"));
        sid_i = new QLineEdit(layoutWidget);
        sid_i->setObjectName(QString::fromUtf8("sid_i"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sid_i->sizePolicy().hasHeightForWidth());
        sid_i->setSizePolicy(sizePolicy1);
        sid_i->setFont(font);

        ASELayout->addWidget(sid_i);

        name_i = new QLineEdit(layoutWidget);
        name_i->setObjectName(QString::fromUtf8("name_i"));
        sizePolicy1.setHeightForWidth(name_i->sizePolicy().hasHeightForWidth());
        name_i->setSizePolicy(sizePolicy1);
        name_i->setFont(font);

        ASELayout->addWidget(name_i);

        roll_no_i = new QLineEdit(layoutWidget);
        roll_no_i->setObjectName(QString::fromUtf8("roll_no_i"));
        sizePolicy1.setHeightForWidth(roll_no_i->sizePolicy().hasHeightForWidth());
        roll_no_i->setSizePolicy(sizePolicy1);
        roll_no_i->setFont(font1);

        ASELayout->addWidget(roll_no_i);


        horizontalLayout->addLayout(ASELayout);


        ASLayout->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(ASGBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(90, 240, 195, 41));
        ASPLayout = new QHBoxLayout(layoutWidget1);
        ASPLayout->setObjectName(QString::fromUtf8("ASPLayout"));
        ASPLayout->setContentsMargins(0, 0, 0, 0);
        update = new QPushButton(layoutWidget1);
        update->setObjectName(QString::fromUtf8("update"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(update->sizePolicy().hasHeightForWidth());
        update->setSizePolicy(sizePolicy2);
        update->setMinimumSize(QSize(0, 30));
        update->setBaseSize(QSize(0, 20));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(true);
        font2.setUnderline(true);
        font2.setWeight(50);
        font2.setKerning(false);
        update->setFont(font2);

        ASPLayout->addWidget(update);

        register_2 = new QPushButton(layoutWidget1);
        register_2->setObjectName(QString::fromUtf8("register_2"));
        sizePolicy2.setHeightForWidth(register_2->sizePolicy().hasHeightForWidth());
        register_2->setSizePolicy(sizePolicy2);
        register_2->setMinimumSize(QSize(0, 30));
        register_2->setBaseSize(QSize(0, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Georgia"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setUnderline(true);
        font3.setWeight(50);
        font3.setKerning(false);
        register_2->setFont(font3);
        register_2->setCursor(QCursor(Qt::PointingHandCursor));

        ASPLayout->addWidget(register_2);

        RSGBox = new QGroupBox(centralwidget);
        RSGBox->setObjectName(QString::fromUtf8("RSGBox"));
        RSGBox->setGeometry(QRect(390, 30, 301, 301));
        RSGBox->setFont(font1);
        LRemove = new QLineEdit(RSGBox);
        LRemove->setObjectName(QString::fromUtf8("LRemove"));
        LRemove->setGeometry(QRect(20, 50, 251, 51));
        layoutWidget2 = new QWidget(RSGBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 120, 281, 51));
        RSRBLayout = new QHBoxLayout(layoutWidget2);
        RSRBLayout->setObjectName(QString::fromUtf8("RSRBLayout"));
        RSRBLayout->setContentsMargins(0, 0, 0, 0);
        RSid = new QRadioButton(layoutWidget2);
        RSid->setObjectName(QString::fromUtf8("RSid"));

        RSRBLayout->addWidget(RSid);

        RName = new QRadioButton(layoutWidget2);
        RName->setObjectName(QString::fromUtf8("RName"));
        RName->setChecked(true);

        RSRBLayout->addWidget(RName);

        RRoll = new QRadioButton(layoutWidget2);
        RRoll->setObjectName(QString::fromUtf8("RRoll"));

        RSRBLayout->addWidget(RRoll);

        RemoveStd = new QPushButton(RSGBox);
        RemoveStd->setObjectName(QString::fromUtf8("RemoveStd"));
        RemoveStd->setGeometry(QRect(180, 190, 93, 28));
        CancelF = new QPushButton(centralwidget);
        CancelF->setObjectName(QString::fromUtf8("CancelF"));
        CancelF->setGeometry(QRect(600, 340, 93, 28));
        Form->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Form);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 702, 26));
        Form->setMenuBar(menubar);
        statusbar = new QStatusBar(Form);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Form->setStatusBar(statusbar);
        QWidget::setTabOrder(sid_i, name_i);
        QWidget::setTabOrder(name_i, roll_no_i);
        QWidget::setTabOrder(roll_no_i, update);
        QWidget::setTabOrder(update, register_2);
        QWidget::setTabOrder(register_2, LRemove);
        QWidget::setTabOrder(LRemove, RemoveStd);
        QWidget::setTabOrder(RemoveStd, RSid);
        QWidget::setTabOrder(RSid, RName);
        QWidget::setTabOrder(RName, RRoll);
        QWidget::setTabOrder(RRoll, CancelF);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QMainWindow *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Edit Student Information", nullptr));
        ASGBox->setTitle(QApplication::translate("Form", "Add/Update Student", nullptr));
        sidLabel->setText(QApplication::translate("Form", "SID", nullptr));
        nameLabel->setText(QApplication::translate("Form", "Name", nullptr));
        rollLabel->setText(QApplication::translate("Form", "Roll_No", nullptr));
        name_i->setText(QString());
        roll_no_i->setText(QString());
        update->setText(QApplication::translate("Form", "Update", nullptr));
        register_2->setText(QApplication::translate("Form", "Register", nullptr));
        RSGBox->setTitle(QApplication::translate("Form", "Remove Student", nullptr));
        LRemove->setPlaceholderText(QApplication::translate("Form", "SID or Name or Roll No.", nullptr));
        RSid->setText(QApplication::translate("Form", "SID", nullptr));
        RName->setText(QApplication::translate("Form", "Name", nullptr));
        RRoll->setText(QApplication::translate("Form", "Roll No.", nullptr));
        RemoveStd->setText(QApplication::translate("Form", "Remove", nullptr));
        CancelF->setText(QApplication::translate("Form", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H

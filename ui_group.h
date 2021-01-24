/********************************************************************************
** Form generated from reading UI file 'group.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUP_H
#define UI_GROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_group
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *GARPBLayout;
    QPushButton *AddG;
    QPushButton *RemoveG;
    QWidget *layoutWidget1;
    QHBoxLayout *GCBLayout;
    QLabel *label;
    QComboBox *Group;
    QPushButton *select;
    QWidget *layoutWidget2;
    QHBoxLayout *GREHLayout;
    QPushButton *refresh;
    QSpacerItem *RESpacer;
    QPushButton *Export;
    QSpacerItem *EHSpacer;
    QPushButton *PHistory;
    QSpacerItem *EHSpacer_2;
    QPushButton *SignOut;

    void setupUi(QDialog *group)
    {
        if (group->objectName().isEmpty())
            group->setObjectName(QString::fromUtf8("group"));
        group->resize(509, 354);
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(11);
        group->setFont(font);
        layoutWidget = new QWidget(group);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 260, 261, 41));
        GARPBLayout = new QHBoxLayout(layoutWidget);
        GARPBLayout->setObjectName(QString::fromUtf8("GARPBLayout"));
        GARPBLayout->setContentsMargins(0, 0, 0, 0);
        AddG = new QPushButton(layoutWidget);
        AddG->setObjectName(QString::fromUtf8("AddG"));
        AddG->setFont(font);

        GARPBLayout->addWidget(AddG);

        RemoveG = new QPushButton(layoutWidget);
        RemoveG->setObjectName(QString::fromUtf8("RemoveG"));
        RemoveG->setFont(font);

        GARPBLayout->addWidget(RemoveG);

        layoutWidget1 = new QWidget(group);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 110, 321, 71));
        GCBLayout = new QHBoxLayout(layoutWidget1);
        GCBLayout->setObjectName(QString::fromUtf8("GCBLayout"));
        GCBLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        GCBLayout->addWidget(label);

        Group = new QComboBox(layoutWidget1);
        Group->setObjectName(QString::fromUtf8("Group"));
        Group->setFont(font);

        GCBLayout->addWidget(Group);

        select = new QPushButton(group);
        select->setObjectName(QString::fromUtf8("select"));
        select->setGeometry(QRect(300, 180, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Georgia"));
        font1.setPointSize(12);
        select->setFont(font1);
        layoutWidget2 = new QWidget(group);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 20, 461, 51));
        GREHLayout = new QHBoxLayout(layoutWidget2);
        GREHLayout->setObjectName(QString::fromUtf8("GREHLayout"));
        GREHLayout->setContentsMargins(0, 0, 0, 0);
        refresh = new QPushButton(layoutWidget2);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setFont(font1);

        GREHLayout->addWidget(refresh);

        RESpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        GREHLayout->addItem(RESpacer);

        Export = new QPushButton(layoutWidget2);
        Export->setObjectName(QString::fromUtf8("Export"));
        Export->setFont(font1);

        GREHLayout->addWidget(Export);

        EHSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        GREHLayout->addItem(EHSpacer);

        PHistory = new QPushButton(layoutWidget2);
        PHistory->setObjectName(QString::fromUtf8("PHistory"));
        PHistory->setFont(font1);

        GREHLayout->addWidget(PHistory);

        EHSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        GREHLayout->addItem(EHSpacer_2);

        SignOut = new QPushButton(layoutWidget2);
        SignOut->setObjectName(QString::fromUtf8("SignOut"));
        SignOut->setFont(font1);

        GREHLayout->addWidget(SignOut);

        QWidget::setTabOrder(Group, select);
        QWidget::setTabOrder(select, AddG);
        QWidget::setTabOrder(AddG, RemoveG);
        QWidget::setTabOrder(RemoveG, refresh);
        QWidget::setTabOrder(refresh, Export);
        QWidget::setTabOrder(Export, PHistory);

        retranslateUi(group);

        QMetaObject::connectSlotsByName(group);
    } // setupUi

    void retranslateUi(QDialog *group)
    {
        group->setWindowTitle(QApplication::translate("group", "Welcome!", nullptr));
        AddG->setText(QApplication::translate("group", "Add Group", nullptr));
        RemoveG->setText(QApplication::translate("group", "Remove Group", nullptr));
        label->setText(QApplication::translate("group", "Select the group:", nullptr));
        select->setText(QApplication::translate("group", "Select", nullptr));
        refresh->setText(QApplication::translate("group", "Refresh", nullptr));
        Export->setText(QApplication::translate("group", "Export", nullptr));
        PHistory->setText(QApplication::translate("group", "History", nullptr));
        SignOut->setText(QApplication::translate("group", "Sign Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class group: public Ui_group {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUP_H

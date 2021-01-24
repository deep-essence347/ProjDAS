/********************************************************************************
** Form generated from reading UI file 'attendance.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCE_H
#define UI_ATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Attendance
{
public:
    QTableView *tableView;
    QWidget *layoutWidget;
    QVBoxLayout *ATTlayout;
    QPushButton *view;
    QSpacerItem *ATTSpacer;
    QPushButton *PresentP;
    QPushButton *AbsentP;
    QPushButton *ConsiderP;

    void setupUi(QDialog *Attendance)
    {
        if (Attendance->objectName().isEmpty())
            Attendance->setObjectName(QString::fromUtf8("Attendance"));
        Attendance->resize(511, 493);
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        Attendance->setFont(font);
        tableView = new QTableView(Attendance);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 20, 361, 461));
        layoutWidget = new QWidget(Attendance);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(390, 18, 118, 461));
        ATTlayout = new QVBoxLayout(layoutWidget);
        ATTlayout->setObjectName(QString::fromUtf8("ATTlayout"));
        ATTlayout->setContentsMargins(0, 0, 0, 0);
        view = new QPushButton(layoutWidget);
        view->setObjectName(QString::fromUtf8("view"));

        ATTlayout->addWidget(view);

        ATTSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        ATTlayout->addItem(ATTSpacer);

        PresentP = new QPushButton(layoutWidget);
        PresentP->setObjectName(QString::fromUtf8("PresentP"));

        ATTlayout->addWidget(PresentP);

        AbsentP = new QPushButton(layoutWidget);
        AbsentP->setObjectName(QString::fromUtf8("AbsentP"));

        ATTlayout->addWidget(AbsentP);

        ConsiderP = new QPushButton(layoutWidget);
        ConsiderP->setObjectName(QString::fromUtf8("ConsiderP"));

        ATTlayout->addWidget(ConsiderP);


        retranslateUi(Attendance);

        QMetaObject::connectSlotsByName(Attendance);
    } // setupUi

    void retranslateUi(QDialog *Attendance)
    {
        Attendance->setWindowTitle(QApplication::translate("Attendance", "Attendance", nullptr));
        view->setText(QApplication::translate("Attendance", "View", nullptr));
        PresentP->setText(QApplication::translate("Attendance", "Present", nullptr));
        AbsentP->setText(QApplication::translate("Attendance", "Absent", nullptr));
        ConsiderP->setText(QApplication::translate("Attendance", "Consider", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Attendance: public Ui_Attendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCE_H

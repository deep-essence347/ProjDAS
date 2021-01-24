/********************************************************************************
** Form generated from reading UI file 'teacher.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_H
#define UI_TEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Teacher
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTableView *tableView;
    QWidget *layoutWidget;
    QHBoxLayout *TPBLayout;
    QPushButton *take;
    QPushButton *view;
    QPushButton *edit;
    QLineEdit *search_edit;
    QPushButton *search;
    QWidget *layoutWidget1;
    QHBoxLayout *TRBLayout;
    QLabel *label_2;
    QRadioButton *RName;
    QRadioButton *RRoll;
    QWidget *layoutWidget2;
    QHBoxLayout *TGTLayout;
    QLabel *LGroup;
    QLabel *LYear;
    QLabel *LSem;
    QPushButton *backT;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Teacher)
    {
        if (Teacher->objectName().isEmpty())
            Teacher->setObjectName(QString::fromUtf8("Teacher"));
        Teacher->resize(779, 690);
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        Teacher->setFont(font);
        centralwidget = new QWidget(Teacher);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(411, 122, 16, 16));
        label->setFont(font);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 160, 761, 451));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setMinimumSize(QSize(0, 0));
        tableView->setBaseSize(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(227, 221, 224, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        tableView->setPalette(palette);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 761, 71));
        TPBLayout = new QHBoxLayout(layoutWidget);
        TPBLayout->setSpacing(0);
        TPBLayout->setObjectName(QString::fromUtf8("TPBLayout"));
        TPBLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        TPBLayout->setContentsMargins(0, 0, 0, 0);
        take = new QPushButton(layoutWidget);
        take->setObjectName(QString::fromUtf8("take"));
        sizePolicy.setHeightForWidth(take->sizePolicy().hasHeightForWidth());
        take->setSizePolicy(sizePolicy);
        take->setFont(font);
        take->setCursor(QCursor(Qt::PointingHandCursor));

        TPBLayout->addWidget(take);

        view = new QPushButton(layoutWidget);
        view->setObjectName(QString::fromUtf8("view"));
        sizePolicy.setHeightForWidth(view->sizePolicy().hasHeightForWidth());
        view->setSizePolicy(sizePolicy);
        view->setFont(font);
        view->setCursor(QCursor(Qt::PointingHandCursor));

        TPBLayout->addWidget(view);

        edit = new QPushButton(layoutWidget);
        edit->setObjectName(QString::fromUtf8("edit"));
        sizePolicy.setHeightForWidth(edit->sizePolicy().hasHeightForWidth());
        edit->setSizePolicy(sizePolicy);
        edit->setFont(font);
        edit->setCursor(QCursor(Qt::PointingHandCursor));

        TPBLayout->addWidget(edit);

        search_edit = new QLineEdit(layoutWidget);
        search_edit->setObjectName(QString::fromUtf8("search_edit"));
        sizePolicy.setHeightForWidth(search_edit->sizePolicy().hasHeightForWidth());
        search_edit->setSizePolicy(sizePolicy);

        TPBLayout->addWidget(search_edit);

        search = new QPushButton(layoutWidget);
        search->setObjectName(QString::fromUtf8("search"));
        sizePolicy.setHeightForWidth(search->sizePolicy().hasHeightForWidth());
        search->setSizePolicy(sizePolicy);
        search->setFont(font);
        search->setCursor(QCursor(Qt::PointingHandCursor));

        TPBLayout->addWidget(search);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(500, 130, 271, 30));
        TRBLayout = new QHBoxLayout(layoutWidget1);
        TRBLayout->setObjectName(QString::fromUtf8("TRBLayout"));
        TRBLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        TRBLayout->addWidget(label_2);

        RName = new QRadioButton(layoutWidget1);
        RName->setObjectName(QString::fromUtf8("RName"));
        RName->setFont(font);
        RName->setChecked(true);

        TRBLayout->addWidget(RName);

        RRoll = new QRadioButton(layoutWidget1);
        RRoll->setObjectName(QString::fromUtf8("RRoll"));
        RRoll->setFont(font);

        TRBLayout->addWidget(RRoll);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 20, 261, 26));
        TGTLayout = new QHBoxLayout(layoutWidget2);
        TGTLayout->setObjectName(QString::fromUtf8("TGTLayout"));
        TGTLayout->setContentsMargins(0, 0, 0, 0);
        LGroup = new QLabel(layoutWidget2);
        LGroup->setObjectName(QString::fromUtf8("LGroup"));

        TGTLayout->addWidget(LGroup);

        LYear = new QLabel(layoutWidget2);
        LYear->setObjectName(QString::fromUtf8("LYear"));

        TGTLayout->addWidget(LYear);

        LSem = new QLabel(layoutWidget2);
        LSem->setObjectName(QString::fromUtf8("LSem"));

        TGTLayout->addWidget(LSem);

        backT = new QPushButton(centralwidget);
        backT->setObjectName(QString::fromUtf8("backT"));
        backT->setGeometry(QRect(680, 620, 93, 28));
        Teacher->setCentralWidget(centralwidget);
        layoutWidget->raise();
        tableView->raise();
        label->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        backT->raise();
        menubar = new QMenuBar(Teacher);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 779, 26));
        Teacher->setMenuBar(menubar);
        QWidget::setTabOrder(take, view);
        QWidget::setTabOrder(view, edit);
        QWidget::setTabOrder(edit, search_edit);
        QWidget::setTabOrder(search_edit, search);
        QWidget::setTabOrder(search, RName);
        QWidget::setTabOrder(RName, RRoll);
        QWidget::setTabOrder(RRoll, backT);
        QWidget::setTabOrder(backT, tableView);

        retranslateUi(Teacher);

        QMetaObject::connectSlotsByName(Teacher);
    } // setupUi

    void retranslateUi(QMainWindow *Teacher)
    {
        Teacher->setWindowTitle(QApplication::translate("Teacher", "Home", nullptr));
        label->setText(QString());
        take->setText(QApplication::translate("Teacher", "Take Attendence", nullptr));
        view->setText(QApplication::translate("Teacher", "View", nullptr));
        edit->setText(QApplication::translate("Teacher", "Edit", nullptr));
        search->setText(QApplication::translate("Teacher", "Search", nullptr));
        label_2->setText(QApplication::translate("Teacher", "Search By:", nullptr));
        RName->setText(QApplication::translate("Teacher", "Name", nullptr));
        RRoll->setText(QApplication::translate("Teacher", "Roll", nullptr));
        LGroup->setText(QApplication::translate("Teacher", "Group", nullptr));
        LYear->setText(QApplication::translate("Teacher", "Year", nullptr));
        LSem->setText(QApplication::translate("Teacher", "Semester", nullptr));
        backT->setText(QApplication::translate("Teacher", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Teacher: public Ui_Teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_H

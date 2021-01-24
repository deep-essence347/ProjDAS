/********************************************************************************
** Form generated from reading UI file 'insidehist.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSIDEHIST_H
#define UI_INSIDEHIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_insideHist
{
public:
    QTableView *tableView;
    QWidget *layoutWidget;
    QVBoxLayout *SLPRLayout;
    QHBoxLayout *SLELayout;
    QLineEdit *search_edit;
    QPushButton *search;
    QHBoxLayout *SRBSLayout;
    QSpacerItem *SRbSpacer;
    QLabel *label;
    QRadioButton *RName;
    QRadioButton *RRoll;
    QWidget *layoutWidget1;
    QVBoxLayout *SHGTLayout;
    QLabel *HGroup;
    QLabel *HYear;
    QLabel *HSem;
    QPushButton *BackIH;
    QPushButton *refreshH;

    void setupUi(QDialog *insideHist)
    {
        if (insideHist->objectName().isEmpty())
            insideHist->setObjectName(QString::fromUtf8("insideHist"));
        insideHist->resize(568, 669);
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        insideHist->setFont(font);
        tableView = new QTableView(insideHist);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 110, 521, 511));
        layoutWidget = new QWidget(insideHist);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 10, 357, 91));
        SLPRLayout = new QVBoxLayout(layoutWidget);
        SLPRLayout->setObjectName(QString::fromUtf8("SLPRLayout"));
        SLPRLayout->setContentsMargins(0, 0, 0, 0);
        SLELayout = new QHBoxLayout();
        SLELayout->setObjectName(QString::fromUtf8("SLELayout"));
        search_edit = new QLineEdit(layoutWidget);
        search_edit->setObjectName(QString::fromUtf8("search_edit"));

        SLELayout->addWidget(search_edit);

        search = new QPushButton(layoutWidget);
        search->setObjectName(QString::fromUtf8("search"));

        SLELayout->addWidget(search);


        SLPRLayout->addLayout(SLELayout);

        SRBSLayout = new QHBoxLayout();
        SRBSLayout->setObjectName(QString::fromUtf8("SRBSLayout"));
        SRbSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        SRBSLayout->addItem(SRbSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        SRBSLayout->addWidget(label);

        RName = new QRadioButton(layoutWidget);
        RName->setObjectName(QString::fromUtf8("RName"));
        RName->setChecked(true);

        SRBSLayout->addWidget(RName);

        RRoll = new QRadioButton(layoutWidget);
        RRoll->setObjectName(QString::fromUtf8("RRoll"));

        SRBSLayout->addWidget(RRoll);


        SLPRLayout->addLayout(SRBSLayout);

        layoutWidget1 = new QWidget(insideHist);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 20, 90, 88));
        SHGTLayout = new QVBoxLayout(layoutWidget1);
        SHGTLayout->setObjectName(QString::fromUtf8("SHGTLayout"));
        SHGTLayout->setContentsMargins(0, 0, 0, 0);
        HGroup = new QLabel(layoutWidget1);
        HGroup->setObjectName(QString::fromUtf8("HGroup"));

        SHGTLayout->addWidget(HGroup);

        HYear = new QLabel(layoutWidget1);
        HYear->setObjectName(QString::fromUtf8("HYear"));

        SHGTLayout->addWidget(HYear);

        HSem = new QLabel(layoutWidget1);
        HSem->setObjectName(QString::fromUtf8("HSem"));

        SHGTLayout->addWidget(HSem);

        BackIH = new QPushButton(insideHist);
        BackIH->setObjectName(QString::fromUtf8("BackIH"));
        BackIH->setGeometry(QRect(450, 630, 93, 28));
        refreshH = new QPushButton(insideHist);
        refreshH->setObjectName(QString::fromUtf8("refreshH"));
        refreshH->setGeometry(QRect(110, 50, 93, 28));
        QWidget::setTabOrder(search_edit, search);
        QWidget::setTabOrder(search, RName);
        QWidget::setTabOrder(RName, RRoll);
        QWidget::setTabOrder(RRoll, BackIH);
        QWidget::setTabOrder(BackIH, tableView);

        retranslateUi(insideHist);

        QMetaObject::connectSlotsByName(insideHist);
    } // setupUi

    void retranslateUi(QDialog *insideHist)
    {
        insideHist->setWindowTitle(QApplication::translate("insideHist", "History", nullptr));
        search->setText(QApplication::translate("insideHist", "Search", nullptr));
        label->setText(QApplication::translate("insideHist", "Search by:", nullptr));
        RName->setText(QApplication::translate("insideHist", "Name", nullptr));
        RRoll->setText(QApplication::translate("insideHist", "Roll No.", nullptr));
        HGroup->setText(QApplication::translate("insideHist", "Group", nullptr));
        HYear->setText(QApplication::translate("insideHist", "Year", nullptr));
        HSem->setText(QApplication::translate("insideHist", "Sem", nullptr));
        BackIH->setText(QApplication::translate("insideHist", "Back", nullptr));
        refreshH->setText(QApplication::translate("insideHist", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insideHist: public Ui_insideHist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSIDEHIST_H

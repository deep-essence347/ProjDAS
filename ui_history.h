/********************************************************************************
** Form generated from reading UI file 'history.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_H
#define UI_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_history
{
public:
    QPushButton *HSelect;
    QWidget *layoutWidget;
    QHBoxLayout *HGCLayout;
    QLabel *label;
    QComboBox *Histcom;
    QPushButton *BackH;
    QPushButton *ExportH;

    void setupUi(QDialog *history)
    {
        if (history->objectName().isEmpty())
            history->setObjectName(QString::fromUtf8("history"));
        history->resize(403, 289);
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        history->setFont(font);
        HSelect = new QPushButton(history);
        HSelect->setObjectName(QString::fromUtf8("HSelect"));
        HSelect->setGeometry(QRect(240, 150, 91, 31));
        HSelect->setFont(font);
        layoutWidget = new QWidget(history);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 100, 291, 51));
        HGCLayout = new QHBoxLayout(layoutWidget);
        HGCLayout->setObjectName(QString::fromUtf8("HGCLayout"));
        HGCLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        HGCLayout->addWidget(label);

        Histcom = new QComboBox(layoutWidget);
        Histcom->setObjectName(QString::fromUtf8("Histcom"));
        Histcom->setFont(font);

        HGCLayout->addWidget(Histcom);

        BackH = new QPushButton(history);
        BackH->setObjectName(QString::fromUtf8("BackH"));
        BackH->setGeometry(QRect(300, 240, 93, 28));
        BackH->setFont(font);
        ExportH = new QPushButton(history);
        ExportH->setObjectName(QString::fromUtf8("ExportH"));
        ExportH->setGeometry(QRect(150, 20, 91, 31));
        QWidget::setTabOrder(Histcom, HSelect);
        QWidget::setTabOrder(HSelect, BackH);

        retranslateUi(history);

        QMetaObject::connectSlotsByName(history);
    } // setupUi

    void retranslateUi(QDialog *history)
    {
        history->setWindowTitle(QApplication::translate("history", "History", nullptr));
        HSelect->setText(QApplication::translate("history", "Select", nullptr));
        label->setText(QApplication::translate("history", "Select a Group", nullptr));
        BackH->setText(QApplication::translate("history", "Back", nullptr));
        ExportH->setText(QApplication::translate("history", "Export", nullptr));
    } // retranslateUi

};

namespace Ui {
    class history: public Ui_history {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H

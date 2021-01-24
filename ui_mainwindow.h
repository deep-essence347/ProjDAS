/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *LTGBox;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *LGUPLayout;
    QHBoxLayout *LGULayout;
    QLabel *label;
    QLineEdit *Lusername;
    QHBoxLayout *LGPLayout;
    QLabel *label_2;
    QLineEdit *Lpassword;
    QVBoxLayout *LGPBLayout;
    QPushButton *login;
    QPushButton *EditT;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(360, 404);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        LTGBox = new QGroupBox(centralWidget);
        LTGBox->setObjectName(QString::fromUtf8("LTGBox"));
        QFont font;
        font.setPointSize(10);
        LTGBox->setFont(font);
        verticalLayout_3 = new QVBoxLayout(LTGBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        LGUPLayout = new QVBoxLayout();
        LGUPLayout->setSpacing(6);
        LGUPLayout->setObjectName(QString::fromUtf8("LGUPLayout"));
        LGULayout = new QHBoxLayout();
        LGULayout->setSpacing(6);
        LGULayout->setObjectName(QString::fromUtf8("LGULayout"));
        label = new QLabel(LTGBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Georgia"));
        font1.setPointSize(11);
        label->setFont(font1);

        LGULayout->addWidget(label);

        Lusername = new QLineEdit(LTGBox);
        Lusername->setObjectName(QString::fromUtf8("Lusername"));

        LGULayout->addWidget(Lusername);


        LGUPLayout->addLayout(LGULayout);

        LGPLayout = new QHBoxLayout();
        LGPLayout->setSpacing(6);
        LGPLayout->setObjectName(QString::fromUtf8("LGPLayout"));
        label_2 = new QLabel(LTGBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setMargin(2);

        LGPLayout->addWidget(label_2);

        Lpassword = new QLineEdit(LTGBox);
        Lpassword->setObjectName(QString::fromUtf8("Lpassword"));
        Lpassword->setEchoMode(QLineEdit::Password);

        LGPLayout->addWidget(Lpassword);


        LGUPLayout->addLayout(LGPLayout);


        verticalLayout_3->addLayout(LGUPLayout);

        LGPBLayout = new QVBoxLayout();
        LGPBLayout->setSpacing(6);
        LGPBLayout->setObjectName(QString::fromUtf8("LGPBLayout"));
        login = new QPushButton(LTGBox);
        login->setObjectName(QString::fromUtf8("login"));
        QFont font2;
        font2.setPointSize(11);
        login->setFont(font2);
        login->setAcceptDrops(false);
        login->setAutoFillBackground(false);

        LGPBLayout->addWidget(login);

        EditT = new QPushButton(LTGBox);
        EditT->setObjectName(QString::fromUtf8("EditT"));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        EditT->setFont(font3);

        LGPBLayout->addWidget(EditT);


        verticalLayout_3->addLayout(LGPBLayout);


        verticalLayout_4->addWidget(LTGBox);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 360, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Digital Attendence", nullptr));
        LTGBox->setTitle(QApplication::translate("MainWindow", "Enter your details", nullptr));
        label->setText(QApplication::translate("MainWindow", "Username", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password", nullptr));
        login->setText(QApplication::translate("MainWindow", "Login", nullptr));
        EditT->setText(QApplication::translate("MainWindow", "Add/Remove Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

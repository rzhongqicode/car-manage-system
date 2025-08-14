/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(800, 600);
        centralwidget = new QWidget(user);
        centralwidget->setObjectName("centralwidget");
        user->setCentralWidget(centralwidget);
        menubar = new QMenuBar(user);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        user->setMenuBar(menubar);
        statusbar = new QStatusBar(user);
        statusbar->setObjectName("statusbar");
        user->setStatusBar(statusbar);

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QMainWindow *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H

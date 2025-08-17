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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QWidget *centralwidget;
    QPushButton *btn_search;
    QPushButton *btn_exit;
    QTableWidget *tableWidget;
    QLineEdit *le_search;
    QLabel *label;
    QLabel *label_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(800, 600);
        user->setMinimumSize(QSize(800, 600));
        user->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        user->setWindowIcon(icon);
        centralwidget = new QWidget(user);
        centralwidget->setObjectName("centralwidget");
        btn_search = new QPushButton(centralwidget);
        btn_search->setObjectName("btn_search");
        btn_search->setGeometry(QRect(653, 70, 117, 23));
        btn_exit = new QPushButton(centralwidget);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setGeometry(QRect(675, 18, 118, 23));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 110, 731, 471));
        tableWidget->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget->horizontalHeader()->setDefaultSectionSize(138);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        le_search = new QLineEdit(centralwidget);
        le_search->setObjectName("le_search");
        le_search->setGeometry(QRect(412, 70, 235, 23));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(275, 9, 261, 43));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(551, 18, 118, 25));
        QFont font1;
        font1.setPointSize(8);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        user->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(user);
        statusbar->setObjectName("statusbar");
        user->setStatusBar(statusbar);

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QMainWindow *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "\347\224\250\346\210\267\347\225\214\351\235\242", nullptr));
        btn_search->setText(QCoreApplication::translate("user", "\346\220\234\347\264\242", nullptr));
        btn_exit->setText(QCoreApplication::translate("user", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("user", "\350\275\246\350\276\206\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("user", "\347\224\250\346\210\267\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H

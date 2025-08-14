/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *button_admin;
    QPushButton *button_user;
    QLabel *label_2;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(400, 300);
        login->setMinimumSize(QSize(400, 300));
        login->setMaximumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        login->setWindowIcon(icon);
        label = new QLabel(login);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 40, 240, 80));
        label->setMinimumSize(QSize(240, 80));
        label->setMaximumSize(QSize(240, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Adobe \351\273\221\344\275\223 Std")});
        font.setPointSize(17);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        widget = new QWidget(login);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 170, 300, 60));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        button_admin = new QPushButton(widget);
        button_admin->setObjectName("button_admin");

        gridLayout->addWidget(button_admin, 0, 1, 1, 1);

        button_user = new QPushButton(widget);
        button_user->setObjectName("button_user");

        gridLayout->addWidget(button_user, 0, 0, 1, 1);

        label_2 = new QLabel(login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 130, 200, 40));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        label->setText(QCoreApplication::translate("login", "\346\254\242\350\277\216\347\231\273\345\275\225\350\275\246\350\276\206\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        button_admin->setText(QCoreApplication::translate("login", "\347\256\241\347\220\206\345\221\230", nullptr));
        button_user->setText(QCoreApplication::translate("login", "\346\231\256\351\200\232\347\224\250\346\210\267", nullptr));
        label_2->setText(QCoreApplication::translate("login", "\350\257\267\351\200\211\346\213\251\344\275\240\347\232\204\347\231\273\345\275\225\346\226\271\345\274\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

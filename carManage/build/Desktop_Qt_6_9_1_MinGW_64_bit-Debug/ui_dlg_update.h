/********************************************************************************
** Form generated from reading UI file 'dlg_update.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_UPDATE_H
#define UI_DLG_UPDATE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlg_update
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *le_license;
    QLabel *label_2;
    QLineEdit *le_model;
    QLabel *label_3;
    QSpinBox *sb_year;
    QLabel *label_4;
    QLineEdit *le_color;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *dlg_update)
    {
        if (dlg_update->objectName().isEmpty())
            dlg_update->setObjectName("dlg_update");
        dlg_update->resize(220, 200);
        dlg_update->setMinimumSize(QSize(220, 200));
        dlg_update->setMaximumSize(QSize(220, 200));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dlg_update->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(dlg_update);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(dlg_update);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        le_license = new QLineEdit(dlg_update);
        le_license->setObjectName("le_license");
        le_license->setReadOnly(true);

        gridLayout_2->addWidget(le_license, 0, 1, 1, 1);

        label_2 = new QLabel(dlg_update);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        le_model = new QLineEdit(dlg_update);
        le_model->setObjectName("le_model");

        gridLayout_2->addWidget(le_model, 1, 1, 1, 1);

        label_3 = new QLabel(dlg_update);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        sb_year = new QSpinBox(dlg_update);
        sb_year->setObjectName("sb_year");
        sb_year->setMinimum(2000);
        sb_year->setMaximum(2025);

        gridLayout_2->addWidget(sb_year, 2, 1, 1, 1);

        label_4 = new QLabel(dlg_update);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        le_color = new QLineEdit(dlg_update);
        le_color->setObjectName("le_color");

        gridLayout_2->addWidget(le_color, 3, 1, 1, 1);

        widget = new QWidget(dlg_update);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 4, 0, 1, 2);


        retranslateUi(dlg_update);

        QMetaObject::connectSlotsByName(dlg_update);
    } // setupUi

    void retranslateUi(QDialog *dlg_update)
    {
        dlg_update->setWindowTitle(QCoreApplication::translate("dlg_update", "\344\277\256\346\224\271\350\275\246\350\276\206\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("dlg_update", "\350\275\246\347\211\214", nullptr));
        label_2->setText(QCoreApplication::translate("dlg_update", "\345\236\213\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("dlg_update", "\345\271\264\344\273\275", nullptr));
        label_4->setText(QCoreApplication::translate("dlg_update", "\351\242\234\350\211\262", nullptr));
        pushButton->setText(QCoreApplication::translate("dlg_update", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QCoreApplication::translate("dlg_update", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_update: public Ui_dlg_update {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_UPDATE_H

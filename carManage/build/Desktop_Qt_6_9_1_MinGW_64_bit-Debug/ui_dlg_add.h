/********************************************************************************
** Form generated from reading UI file 'dlg_add.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ADD_H
#define UI_DLG_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_Add
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *le_license;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *le_model;
    QLabel *label_2;
    QLineEdit *le_color;
    QSpinBox *sb_year;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_save;
    QPushButton *btn_cancel;

    void setupUi(QDialog *Dlg_Add)
    {
        if (Dlg_Add->objectName().isEmpty())
            Dlg_Add->setObjectName("Dlg_Add");
        Dlg_Add->resize(219, 209);
        gridLayout_2 = new QGridLayout(Dlg_Add);
        gridLayout_2->setObjectName("gridLayout_2");
        label_3 = new QLabel(Dlg_Add);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        le_license = new QLineEdit(Dlg_Add);
        le_license->setObjectName("le_license");

        gridLayout_2->addWidget(le_license, 0, 1, 1, 1);

        label_4 = new QLabel(Dlg_Add);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        label = new QLabel(Dlg_Add);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        le_model = new QLineEdit(Dlg_Add);
        le_model->setObjectName("le_model");

        gridLayout_2->addWidget(le_model, 1, 1, 1, 1);

        label_2 = new QLabel(Dlg_Add);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        le_color = new QLineEdit(Dlg_Add);
        le_color->setObjectName("le_color");

        gridLayout_2->addWidget(le_color, 4, 1, 1, 1);

        sb_year = new QSpinBox(Dlg_Add);
        sb_year->setObjectName("sb_year");
        sb_year->setMinimum(2000);
        sb_year->setMaximum(2025);
        sb_year->setValue(2025);

        gridLayout_2->addWidget(sb_year, 3, 1, 1, 1);

        widget = new QWidget(Dlg_Add);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        btn_save = new QPushButton(widget);
        btn_save->setObjectName("btn_save");

        gridLayout->addWidget(btn_save, 0, 0, 1, 1);

        btn_cancel = new QPushButton(widget);
        btn_cancel->setObjectName("btn_cancel");

        gridLayout->addWidget(btn_cancel, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 5, 0, 1, 2);


        retranslateUi(Dlg_Add);

        QMetaObject::connectSlotsByName(Dlg_Add);
    } // setupUi

    void retranslateUi(QDialog *Dlg_Add)
    {
        Dlg_Add->setWindowTitle(QCoreApplication::translate("Dlg_Add", "\346\267\273\345\212\240\350\275\246\350\276\206\344\277\241\346\201\257", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_Add", "\345\271\264\344\273\275", nullptr));
        label_4->setText(QCoreApplication::translate("Dlg_Add", "\351\242\234\350\211\262", nullptr));
        label->setText(QCoreApplication::translate("Dlg_Add", "\350\275\246\347\211\214", nullptr));
        label_2->setText(QCoreApplication::translate("Dlg_Add", "\345\236\213\345\217\267", nullptr));
        btn_save->setText(QCoreApplication::translate("Dlg_Add", "\344\277\235\345\255\230", nullptr));
        btn_cancel->setText(QCoreApplication::translate("Dlg_Add", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_Add: public Ui_Dlg_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ADD_H

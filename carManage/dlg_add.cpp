#include "dlg_add.h"
#include "ui_dlg_add.h"
#include "carsql.h"
#include <QMessageBox>

Dlg_Add::Dlg_Add(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_Add)
{
    ui->setupUi(this);
}

Dlg_Add::~Dlg_Add()
{
    delete ui;
}

void Dlg_Add::on_btn_cancel_clicked()
{
    this->hide();
}


void Dlg_Add::on_btn_save_clicked()
{
    carInfo info;
    auto ptr = carSql::getInstance();
    info.license = ui->le_license->text();
    info.model = ui->le_model->text();
    info.color = ui->le_color->text();
    info.year = ui->sb_year->text().toUInt();
    ptr->addCar(info);
    QMessageBox::information(nullptr,"提示","添加成功");
    this->hide();

}


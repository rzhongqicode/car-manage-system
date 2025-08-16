#include "dlg_update.h"
#include "ui_dlg_update.h"


dlg_update::dlg_update(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dlg_update)
{
    ui->setupUi(this);
}

dlg_update::~dlg_update()
{
    delete ui;
}

void dlg_update::setState(carInfo original_info)
{
    ui->le_license->setText(original_info.license);
    ui->le_model->setText(original_info.model);
    ui->le_color->setText(original_info.color);
    ui->sb_year->setValue(original_info.year);
}

void dlg_update::on_pushButton_2_clicked()
{
    this->hide();
}


void dlg_update::on_pushButton_clicked()
{
    auto ptr = carSql::getInstance();
    carInfo newInfo;
    newInfo.license = ui->le_license->text();
    newInfo.model = ui->le_model->text();
    newInfo.year = ui->sb_year->text().toInt();
    newInfo.color = ui->le_color->text();
    ptr->updateCar(newInfo);
    QMessageBox::information(nullptr,tr("提示"),tr("修改成功"));
    this->hide();
}


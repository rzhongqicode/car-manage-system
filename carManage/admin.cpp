#include "admin.h"
#include "ui_admin.h"

#include <QKeyEvent>
#include <QMessageBox>

admin::admin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::admin)
    , m_ptrSql(nullptr)
{
    ui->setupUi(this);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //数据库指针初始化并链接数据库
    m_ptrSql = carSql::getInstance();
    m_ptrSql->init();

    updateTable();

}

admin::~admin()
{
    delete ui;
}

void admin::updateTable()
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(5);
    QStringList l;
    l<<"序号"<<"车牌号"<<"型号"<<"年份"<<"颜色";
    ui->tableWidget->setHorizontalHeaderLabels(l);
    //获取所有汽车信息并显示
    QList<carInfo> infoList = m_ptrSql->getAllInfo();
    // ui->tableWidget->clear();
    auto cnt = m_ptrSql->getCarCnt();
    ui->tableWidget->setRowCount(cnt);
    for(int i = 0; i < infoList.length(); i++){
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(i)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(infoList[i].license));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(infoList[i].model));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(infoList[i].year)));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(infoList[i].color));
    }

}


void admin::on_pushButton_clicked()
{
    exit(0);
}


void admin::on_pushButton_2_clicked()
{
    m_dlgAdd.exec();
    updateTable();
}



void admin::on_pushButton_3_clicked()
{
    int i = ui->tableWidget->currentRow();
    if(i >= 0){
        QString del_license = ui->tableWidget->item(i,1)->text();
        m_ptrSql->delCar(del_license);
        QMessageBox::information(nullptr, tr("提示"),tr("删除成功"));
        updateTable();
    }
    else{
        QMessageBox::information(nullptr, tr("提示"),tr("请选中你要删除的车辆"));
    }
}



void admin::on_pushButton_4_clicked()
{
    int i = ui->tableWidget->currentRow();
    if(i >= 0){
    carInfo original_info;
    original_info.license = ui->tableWidget->item(i,1)->text();
    original_info.model = ui->tableWidget->item(i,2)->text();
    original_info.year = ui->tableWidget->item(i,3)->text().toInt();
    original_info.color = ui->tableWidget->item(i,4)->text();
    m_dlgUpdate.setState(original_info);
    m_dlgUpdate.exec();
    updateTable();
    }
    else
    {
        QMessageBox::information(nullptr, tr("提示"),tr("请选中你要修改的车辆"));
    }
}


void admin::on_btn_search_clicked()
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(5);
    QStringList l;
    l<<"序号"<<"车牌号"<<"型号"<<"年份"<<"颜色";
    ui->tableWidget->setHorizontalHeaderLabels(l);
    QList<carInfo> infoList = m_ptrSql->getAllInfo();
    int cnt = 0;
    auto strSearch = ui->le_search->text();
    if(strSearch.isEmpty()){
        QMessageBox::information(nullptr,"提示","请输入要搜索的内容");
        updateTable();
        return;
    }
    for(int i = 0; i < infoList.length(); i++){
        if(infoList[i].license.contains(strSearch))
        {
            ui->tableWidget->setRowCount(cnt + 1);
            ui->tableWidget->setItem(cnt,0,new QTableWidgetItem(QString::number(cnt + 1)));
            ui->tableWidget->setItem(cnt,1,new QTableWidgetItem(infoList[i].license));
            ui->tableWidget->setItem(cnt,2,new QTableWidgetItem(infoList[i].model));
            ui->tableWidget->setItem(cnt,3,new QTableWidgetItem(QString::number(infoList[i].year)));
            ui->tableWidget->setItem(cnt,4,new QTableWidgetItem(infoList[i].color));
            cnt++;
        }
    }
    if(cnt == 0){
        QMessageBox::information(nullptr,"提示","没有找到相关车辆");
        updateTable();
    }
}


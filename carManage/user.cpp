#include "user.h"
#include "ui_user.h"
#include "carsql.h"
#include <QMessageBox>

user::user(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::user)
    ,m_ptrSql(nullptr)
{
    ui->setupUi(this);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //数据库指针初始化并链接数据库
    m_ptrSql = carSql::getInstance();
    m_ptrSql->init();

    //刚打开界面时显示表格
    updateTable();

}

user::~user()
{
    delete ui;
}

void user::updateTable()
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

void user::on_btn_exit_clicked()
{
    exit(0);
}




void user::on_btn_search_clicked()
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
    //先按照车牌号进行查找
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
    if(cnt == 0){//如果车牌号没有匹配的，再在型号中进行查找
        for(int i = 0; i < infoList.length(); i++){
            if(infoList[i].model.contains(strSearch))
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
        //车牌号和型号都没有找到，提示
        if(0 == cnt){
        QMessageBox::information(nullptr,"提示","没有找到相关车辆");
        updateTable();
        }
    }
}


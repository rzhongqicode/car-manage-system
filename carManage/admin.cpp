#include "admin.h"
#include "ui_admin.h"

#include <QKeyEvent>

admin::admin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::admin)
    , m_ptrSql(nullptr)
{
    ui->setupUi(this);

    //数据库指针初始化并链接数据库
    m_ptrSql = carSql::getInstance();
    m_ptrSql->init();
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

admin::~admin()
{
    delete ui;
}


void admin::on_pushButton_clicked()
{
    exit(0);
}


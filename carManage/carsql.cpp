#include "carsql.h"
#include <QMessageBox>
#include <QtDebug>
#include <QCoreApplication>
#include <QSqlQuery>

carSql::carSql(QObject *parent)
    : QObject{parent}
{
    init();

    carInfo s;
    s.license = "鲁H";
    // addCar(s);
    // QSqlQuery q("", my_database);
    // q.exec("INSERT INTO car VALUES ('1234', '222', 2020, '333')");
    qDebug()<<getCarCnt();

}

void carSql::init()
{
    if(QSqlDatabase::drivers().isEmpty())
    {
        // QMessageBox::information(nullptr,tr("No driver found"),tr("Try again"));
        qDebug()<<"No driver found";
    }

    //创建数据库链接
    my_database = QSqlDatabase::addDatabase("QSQLITE");
    //获取应用程序文件夹目录
#if 0
    auto str =QCoreApplication::applicationDirPath();
    qDebug()<<str;
#endif
    my_database.setDatabaseName("E:\\carData.db");
    if(!my_database.open()){
        // QMessageBox::warning(nullptr, tr("Unable to open database"),tr("Try again"));
        qDebug()<<"Unable to open database";
    }
}

uint32_t carSql::getCarCnt()
{
    QSqlQuery sql("", my_database);
    QString str = QString("SELECT COUNT(*) FROM car");
    sql.exec(str);
    uint32_t cnt = 0;
    while(sql.next()){
        cnt = sql.value(0).toUInt();
    }
    return cnt;
}

bool carSql::addCar(carInfo this_car)
{
    QSqlQuery sql("", my_database);
    QString str = QString("insert into car values ('%1', '%2', %3, '%4')").arg(this_car.license)
                      .arg(this_car.model)
                      .arg(this_car.year)
                      .arg(this_car.color);
    return sql.exec(str);
}

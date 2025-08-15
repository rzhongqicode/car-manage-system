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
    // addCar(s);//测试添加功能成功
    // QSqlQuery q("", my_database);
    // q.exec("INSERT INTO car VALUES ('1234', '222', 2020, '333')");
    // qDebug()<<getCarCnt();//测试获取车辆数函数成功
    // QList<carInfo> l = GetPageCar(2,2);//测试获取第几页的车辆成功
    // for(int i = 0; i < l.length(); i++){
    //     qDebug()<<l[i].year;
    // }
    QString carlicence = "123";
    qDebug()<<delCar(carlicence);

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

QList<carInfo> carSql::GetPageCar(uint32_t page, uint32_t page_cnt)
{
    QList<carInfo> l;
    QSqlQuery sql("", my_database);
    QString str = QString("SELECT * FROM car order by 年份 limit %1 offset %2")
                      .arg(page_cnt)
                      .arg((page-1)*page_cnt);
    sql.exec(str);
    carInfo info;
    while(sql.next()){
        info.license = sql.value(0).toString();
        info.model = sql.value(1).toString();
        info.year = sql.value(2).toUInt();
        info.color = sql.value(3).toString();
        l.push_back(info);
    }
    return l;
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

bool carSql::delCar(QString carlicense)
{
    QSqlQuery sql("", my_database);
    QString str = QString("DELETE FROM car WHERE 车牌号 = '%1'").arg(carlicense);
    return sql.exec(str);
}

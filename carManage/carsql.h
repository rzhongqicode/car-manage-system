#ifndef CARSQL_H
#define CARSQL_H

#include <QObject>
#include <QSqlDatabase>


//定义车辆类
class car{
public:
    QString license;
    QString model;
    uint16_t year;
    QString color;

};

class carSql : public QObject
{
    Q_OBJECT
public:
    explicit carSql(QObject *parent = nullptr);

    //初始化方法
    void init();

    // //查询车辆数量
    // uint32_t getCarCnt();

    // //增加车辆
    // bool addCar(car carInfo);

    // //删除车辆(通过车牌号删除)
    // bool delCar(QString carlicense);

    // //修改车辆信息
    // bool updataCar(car carInfo);

signals:

private:
    QSqlDatabase my_database;
};

#endif // CARSQL_H

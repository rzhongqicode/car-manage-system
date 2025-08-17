#ifndef CARSQL_H
#define CARSQL_H
#include <QObject>
#include <QSqlDatabase>

class Item{
public:
    virtual QString GetName() = 0;
private:
    QString name;
};

class Number{
public:
    uint8_t value;
};


//定义车辆类
class carInfo: public Item, public Number{
public:
    virtual QString GetName(){
        return this->license;
    }

    uint16_t operator-(const carInfo& p2) {
        return this->year - p2.year;
     }

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
    //定义一个静态指针
    static carSql* ptrcarSql;

    static carSql* getInstance(){
        if(nullptr == ptrcarSql){
            ptrcarSql = new carSql;
        }
        return ptrcarSql;
    }

    //初始化方法
    void init();

    //获取所有车辆信息
    QList<carInfo> getAllInfo();

    //查询车辆数量
    uint32_t getCarCnt();

    //查询第几页的车辆信息
    QList<carInfo> GetPageCar(uint32_t page, uint32_t page_cnt);

    //增加车辆
    bool addCar(carInfo this_car);

    //删除车辆(通过车牌号删除)
    bool delCar(QString carlicense);

    //清空车辆信息
    bool clearAllCar();

    //修改车辆信息
    bool updateCar(carInfo this_car);

signals:

private:
    QSqlDatabase my_database;
    // QSqlQuery q;
};

#endif // CARSQL_H

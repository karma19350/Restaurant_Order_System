#ifndef ENUM_H
#define ENUM_H
enum DishState{none,ordered,received,done,served,oncomment};
/*未下单，已下单，厨师已接单，菜品已做好，服务员已上菜,已评价*/
enum DishType{Z,J,V,C,F,T};
/*蒸包类，煎焗类，蔬菜类，肠粉类，饭粥类，甜品类*/
enum TableRequest{nothing,urge,water,pay};//加水，催菜，结账
enum TableType{two,four,six};//餐桌的类型:两人桌，四人桌，六人桌
enum TableState{empty,unattended,attended};
/*针对顾客来说的餐桌状态，无人，有人无服务员接单，有人有服务员接单*/
#endif // ENUM_H

#ifndef TRADE_H_INCLUDED
#define TRADE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

//商品结构
typedef struct _goods
{
    char name[50];
    double price;
    int id;
    int stock;
    char describe[100];
}Goods;

//背包结构
typedef struct _bag
{
    int playerid;
    int count;
    int max;
    Goods goods[8];
}Bag;

//玩家结构
typedef struct _player
{
    int id;
    char name[50];
    char password[50];
    Bag bag;
    double gold;
}Player;


#endif // TRADE_H_INCLUDED

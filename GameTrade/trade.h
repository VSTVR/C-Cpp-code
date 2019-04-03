#ifndef TRADE_H_INCLUDED
#define TRADE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

//��Ʒ�ṹ
typedef struct _goods
{
    char name[50];
    double price;
    int id;
    int stock;
    char describe[100];
}Goods;

//�����ṹ
typedef struct _bag
{
    int playerid;
    int count;
    int max;
    Goods goods[8];
}Bag;

//��ҽṹ
typedef struct _player
{
    int id;
    char name[50];
    char password[50];
    Bag bag;
    double gold;
}Player;


#endif // TRADE_H_INCLUDED

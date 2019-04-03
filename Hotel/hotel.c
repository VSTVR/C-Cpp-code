#include <stdio.h>
#include "hotel.h"
#define N 4
#include <math.h>
char HotelNames[4][50]={"梅洛酒店","甲午酒店","靖康酒店","北京酒店"};
int days;
int choice;
int menu()
{
    int i;char start;
    start:printf("该地区的酒店：\n\n");
    for(i=0;i<4;i++)
    {
        printf("%d、%s\n",i+1,HotelNames[i]);
    }
    printf("5、返回\n");
    printf("请输入选择的酒店：");scanf("%d",&choice);
    if(choice>=1 && choice<=4)
    {
        return choice;
    }else
    {
        goto start;
    }
}
//-----------------------------------------------------------------------------------------------------------

int getNights()
{
    char start;
    start:printf("请输入想要入住的天数：");scanf("%d",&days);
    if(days<=0)
    {
        goto start;
    }else
    {
        return days;
    }
}
//----------------------------------------------------------------------------------------------------------

void getPrice()
{
    double result,sum;int i;
    switch(choice-1)
    {
    case 0:
        for(i=0;i<days;i++)
        {
          result=Hotelcost1*pow(Discount,i);
          sum+=result;
          printf("您选择的酒店是%s，住%d天，费用共计%.2lf元",HotelNames[choice-1],days,sum);
        }
break;
    case 1:
        for(i=0;i<days;i++)
        {
          result=Hotelcost2*pow(Discount,i);
          sum+=result;
          printf("您选择的酒店是%s，住%d天，费用共计%.2lf元",HotelNames[choice-1],days,sum);
        }
break;
    case 2:
        for(i=0;i<days;i++)
        {
          result=Hotelcost3*pow(Discount,i);
          sum+=result;
          printf("您选择的酒店是%s，住%d天，费用共计%.2lf元",HotelNames[choice-1],days,sum);
        }
    break;
    case 3:
        for(i=0;i<days;i++)
        {
          result=Hotelcost4*pow(Discount,i);
          sum+=result;
          printf("您选择的酒店是%s，住%d天，费用共计%.2lf元",HotelNames[choice-1],days,sum);
        }
    break;
    }
}

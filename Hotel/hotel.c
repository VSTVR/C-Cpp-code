#include <stdio.h>
#include "hotel.h"
#define N 4
#include <math.h>
char HotelNames[4][50]={"÷��Ƶ�","����Ƶ�","�����Ƶ�","�����Ƶ�"};
int days;
int choice;
int menu()
{
    int i;char start;
    start:printf("�õ����ľƵ꣺\n\n");
    for(i=0;i<4;i++)
    {
        printf("%d��%s\n",i+1,HotelNames[i]);
    }
    printf("5������\n");
    printf("������ѡ��ľƵ꣺");scanf("%d",&choice);
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
    start:printf("��������Ҫ��ס��������");scanf("%d",&days);
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
          printf("��ѡ��ľƵ���%s��ס%d�죬���ù���%.2lfԪ",HotelNames[choice-1],days,sum);
        }
break;
    case 1:
        for(i=0;i<days;i++)
        {
          result=Hotelcost2*pow(Discount,i);
          sum+=result;
          printf("��ѡ��ľƵ���%s��ס%d�죬���ù���%.2lfԪ",HotelNames[choice-1],days,sum);
        }
break;
    case 2:
        for(i=0;i<days;i++)
        {
          result=Hotelcost3*pow(Discount,i);
          sum+=result;
          printf("��ѡ��ľƵ���%s��ס%d�죬���ù���%.2lfԪ",HotelNames[choice-1],days,sum);
        }
    break;
    case 3:
        for(i=0;i<days;i++)
        {
          result=Hotelcost4*pow(Discount,i);
          sum+=result;
          printf("��ѡ��ľƵ���%s��ס%d�죬���ù���%.2lfԪ",HotelNames[choice-1],days,sum);
        }
    break;
    }
}

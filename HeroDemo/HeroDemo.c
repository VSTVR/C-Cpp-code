#include "HeroDemo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

Hero heros[200]={
{"george",'m',"ѧ��",10000,100.16,"ѧ�Ը���",{1998,9,16}},
{"alice",'f',"ѧ��",10000,100.16,"ѧ�Ը���",{2000,9,16}},
{"fucker",'m',"ѧ��",10000,100.16,"ѧ�Ը���",{1999,9,16}},
};

int count =0;
void show()
{
    int i;
    int len=sizeof(heros)/sizeof(Hero);
    for(i=0;i<len;i++)
    {
        printf("%s\t%c\t%s\t\n",heros[i].name,heros[i].sex,heros[i].job);
    }
}
//-----------------------------------------------------------------------------

void input()
{
    char answer='y';
    do
    {
        if(count==10)
        {printf("full!");
        break;
        }
        printf("\nplease input num.%d hero's name:",count+1);
        scanf("%s",heros[count].name);                     //name
        printf("sex:");
        fflush(stdin);
        heros[count].sex=getch();                          //sex
        fflush(stdin);
        printf("\njob:");
        scanf("%s",heros[count].job);     //�⼸������
        heros[count].life=100;
        heros[count].speed=66.6;
        heros[count].skill="";

        count++;
        printf("continue to input? ��y/n��");
        answer=getch();
    }while(answer=='y' || answer=='Y');
}

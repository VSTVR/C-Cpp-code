#include "Hero.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



/*int id;
  char*name;
  char sex;
  Job job;
  double hp;
  Skill skill;
  Puttime puttime;*/

Hero heros[5];
Job job[3]={
{1,"��ʦ"},
{2,"�̿�"},
{3,"սʿ"},
};



void inputHero()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        int jobchoice;
        printf("�������%dλӢ�۵���Ϣ��",i+1);
        heros[i].id=i+1;
        printf("������");
        heros[i].name=(char*)malloc(50);
        scanf("%s",heros[i].name);
        fflush(stdin);
        for(j=0;j<3;j++)
        {
            printf("%d��%s\n",j+1,job[j].name);
        }
        printf("��ѡ��ְҵ��1-5����");
        scanf("%d",&jobchoice);
        heros[i].job=job[jobchoice-1];
        printf("%s��ǰ��ְҵ��%s\n",heros[i].name,heros[i].job.name);
    }
}

void showHero()
{

}

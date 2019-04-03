#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct _job        //ְҵ
{
    int id;
    char *name;

}Job;
typedef struct _skill     //����
{
  int id;
  char*name;
  char*intro;
}Skill;
typedef struct _puttime    //����ʱ��
{
   int year;
   int month;
   int day;
}Puttime;

typedef struct _hero       //Ӣ��
{
  int id;
  char*name;
  char sex;
  Job job;
  double hp;
  Skill skill;
  Puttime puttime;
}Hero;

void inputHero();
void showHero();





#endif // HERO_H_INCLUDED

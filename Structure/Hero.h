#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct _job        //职业
{
    int id;
    char *name;

}Job;
typedef struct _skill     //技能
{
  int id;
  char*name;
  char*intro;
}Skill;
typedef struct _puttime    //发布时间
{
   int year;
   int month;
   int day;
}Puttime;

typedef struct _hero       //英雄
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

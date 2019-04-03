#ifndef HERODEMO_H_INCLUDED
#define HERODEMO_H_INCLUDED
typedef struct _myTime
{
    int year; int month; int day;
}MyTime;

typedef struct _hero
{
    char name[50];
    char sex;
    char job[20];
    int life;
    double speed;
    char skill[100];
    MyTime pubtime;
}Hero;

void input();
void show();
#endif // HERODEMO_H_INCLUDED

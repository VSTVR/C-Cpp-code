#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#define SIZE 4
extern score;
//max1
int max1(int a,int b)
{
    int z=a>b? a:b;
    return(z);
}
//max2
int maxscore(int a,int b,int c,int d)
{
    int z;
    z=max1(a,b);
    z=max1(z,c);
    z=max1(z,d);
    return(z);
}

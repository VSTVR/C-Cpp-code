#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#define SIZE 4

extern score;
//randomly create 2
int random(int nums[SIZE][SIZE])
{
    int x,y;
    srand((unsigned)time(NULL));
    do
    {
        x=rand()%SIZE;
        y=rand()%SIZE;
    }
    while(nums[x][y]!=0);
    nums[x][y]=rand()%100>8? 2:4;
}
//reset cen
int reset(int cen[SIZE][SIZE],int nums[SIZE][SIZE])
{
    int i,j;
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            cen[i][j]=nums[i][j];
        }
    }
}
//the num of movement
int index(int n, int nums[SIZE][SIZE])
{
    switch(n)
    {
    case 1:
        up(nums);
        break;
    case 2:
        down(nums);
        break;
    case 3:
        left(nums);
        break;
    case 4:
        right(nums);
        break;
    }
}

//judge
int judge(int nums[SIZE][SIZE])
{
    int cen[SIZE][SIZE];
    int i,j;
    int usedscore=score;
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            cen[i][j]=nums[i][j];
        }
    }
    int a,b,c,d;
    up(cen);
    a=score;
    score=usedscore;
    reset(cen,nums);
    down(cen);
    b=score;
    score=usedscore;
    reset(cen,nums);
    left(cen);
    c=score;
    score=usedscore;
    reset(cen,nums);
    right(cen);
    d=score;
    score=usedscore;int answer;
    if(maxscore(a,b,c,d)==a)
    {
        answer=1;
    }
    else if(maxscore(a,b,c,d)==b)
    {
        answer=2;
    }
    else if(maxscore(a,b,c,d)==c)
    {
        answer=3;
    }
    else if(maxscore(a,b,c,d)==d)
    {
        answer=4;
    }
    return(answer);
}







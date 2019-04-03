#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#define SIZE 4
extern score;
int main()
{
    int nums[SIZE][SIZE]={};
    random(nums);
    print1(nums);Sleep(3000);int i=1;system("cls");int n;
    while(i!=0)
    {
        switch(judge(nums))
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
        printgrame(nums);
    Sleep(500);
    system("cls");
    }
    return 0;
}


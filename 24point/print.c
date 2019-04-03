#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int print(int i)
{
    switch(i)
    {
    case 1:
        printf("+");break;
    case 2:
        printf("-");break;
    case 3:
        printf("*");break;
    case 4:
        printf("/");break;
    }
}

int print2(int i)
{
    switch(i)
    {
    case 1:
        break;
    }
}

int printarry(int nums[4])
{
    printf("³éÅÆ½á¹û£º%d ,%d ,%d ,%d\n",nums[0],nums[1],nums[2],nums[3]);
}

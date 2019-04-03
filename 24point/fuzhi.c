#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fuzhi(int nums[4])
{
    srand((unsigned)time(NULL));
    int a,b,c,d;
    do
    {
        a=rand()%13+1;b=rand()%13+1;c=rand()%13+1;d=rand()%13+1;
    }while(a==b||a==c||a==d||b==c||b==d||c==d);
    nums[0]=a;nums[1]=b;nums[2]=c;nums[3]=d;
}

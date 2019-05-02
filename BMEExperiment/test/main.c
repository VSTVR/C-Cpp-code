#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int aim[3]={5,6,7};
    int i;int num=1;int len=3;
    for(i=0;i<len;i++)
    {
        num+=pow(10,(len-i-1))*aim[i];
    }
    printf("%d",num);
    return 0;
}

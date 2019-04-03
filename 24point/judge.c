#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int panduan(int used[100],int result,int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        if(used[i]==result)
        {
            return(0);
        }
    }
    used[m]=result;
}

int xiangdengma(int a,int b,int c)
{
    if(a==b && b==c)
    {
        return(16);
    }else{
        return(0);
        }
}

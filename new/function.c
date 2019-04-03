#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "head.h"



/*void create_stack(numstack p)
{
    p=(numstack)malloc(sizeof(Numstack));
    p->top=-1;
}

void pushin(numstack p,int num)
{
    p->top++;
    p->num[p->top]=(int*)malloc(sizeof(int));
    p->num[p->top]=num;
}

void print(numstack p)
{
    int i;
    for(i=0;i<=p->top;i++)
    {
        printf("%d",p->num[i]);
    }
}
/*void zuhe(int *a,int len,int need)
{
    int i;
    for(i=0;i<len;i++)
    {
        a[i]=i;
        zuhe(a,len-1,need-1);
    }
    for(i=0;i<len;i++)
    {
        printf("%d",a);
    }
}
*/

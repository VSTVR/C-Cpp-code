#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main()
{
    int a=0,b=0,aim,ain,bin;int*ptra,*ptrb;
    ptra=&a;ptrb=&b;
    printf("a��b��ֵ�Ĺ�Լ��Ϊ1\n");
    printf("������a������������");scanf("%d",&ain);
    printf("������b������������");scanf("%d",&bin);
    printf("������������Ҫ�õ���Һ��ֵ��");scanf("%d",&aim);
    judge(ptra,ptrb,ain,bin,aim);

    return 0;
}

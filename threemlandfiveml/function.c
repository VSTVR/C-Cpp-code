#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
#include <time.h>

//������ú���
int judge(int*ptra,int*ptrb,int ain,int bin,int aim)
{
    register int a,b,c,d,e,f,g;int num=0;
    for(a=1; a<=2; a++)
    {
        for(b=5; b<=6; b++)
        {
            for(c=1; c<=6; c++)
            {
                for(d=1; d<=6; d++)
                {
                    for(e=1; e<=6; e++)
                    {
                        for(f=1; f<=6; f++)
                        {
                            for(g=1; g<=6; g++)
                            {
                                swit(ptra,ptrb,ain,bin,aim,a);
                                if(*ptra==aim || *ptrb==aim)
                                {
                                    break;
                                }
                                swit(ptra,ptrb,ain,bin,aim,b);
                                if(*ptra==aim || *ptrb==aim)
                                {
                                    break;
                                }
                                swit(ptra,ptrb,ain,bin,aim,c);
                                if(*ptra==aim || *ptrb==aim)
                                {
                                    break;
                                }
                                swit(ptra,ptrb,ain,bin,aim,d);
                                if(*ptra==aim || *ptrb==aim)
                                {
                                    break;
                                }
                                swit(ptra,ptrb,ain,bin,aim,e);
                                if(*ptra==aim || *ptrb==aim)
                                {
                                    break;
                                }
                                swit(ptra,ptrb,ain,bin,aim,f);
                                if(*ptra==aim || *ptrb==aim)
                                {
                                    break;
                                }
                                swit(ptra,ptrb,ain,bin,aim,g);
                                if(*ptra==aim || *ptrb==aim)
                                {
                                    break;
                                }
                                *ptra=0,*ptrb=0;
                                printf("\n");
                            }
                        }
                    }
                }
            }
        }
    }

}
//�жϺ���
int swit(int*ptra,int*ptrb,int ain,int bin,int aim,int i)
{
    switch(i)
        {
        case 1:
            afull(ptra,ptrb,ain,bin);

            break;
        case 2:
            bfull(ptra,ptrb,ain,bin);

            break;
        case 3:
            aclear(ptra,ptrb,ain,bin);

            break;
        case 4:
            bclear(ptra,ptrb,ain,bin);

            break;
        case 5:
            atob(ptra,ptrb,ain,bin);

            break;
        case 6:
            btoa(ptra,ptrb,ain,bin);

            break;
        }
}

//1 ����a
int afull(int*ptra,int*ptrb,int ain,int bin)
{
    if(*ptra>=0 && *ptra<ain)
    {
        *ptra=ain;
        printf("��a������a=%d,b=%d\n",*ptra,*ptrb);
    }
}
//2 ����b
int bfull(int*ptra,int*ptrb,int ain,int bin)
{
    if(*ptrb>=0 && *ptrb<bin)
    {
        *ptrb=bin;
        printf("��b������a=%d,b=%d\n",*ptra,*ptrb);
    }
}
//3 ���a
int aclear(int*ptra,int*ptrb,int ain,int bin)
{
    if(*ptra>0)
    {
        *ptra=0;
    printf("��a���գ�a=%d,b=%d\n",*ptra,*ptrb);
    }
}
//4 ���b
int bclear(int*ptra,int*ptrb,int ain,int bin)
{
    if(*ptrb>0)
    {
        *ptrb=0;
    printf("��b���գ�a=%d,b=%d\n",*ptra,*ptrb);
    }
}
//5 a��b�е�
int atob(int*ptra,int*ptrb,int ain,int bin)
{
    int rem;
    if(*ptra>0 && *ptrb>=0 && *ptrb<bin)
    {
        rem=bin-*ptrb;
        if(*ptra>=rem)
        {
            *ptrb=bin;
            *ptra=*ptra-rem;
            printf("��a��Һ�嵹��b��a=%d,b=%d\n",*ptra,*ptrb);
        }else if(*ptra<rem)
        {
            *ptrb=*ptrb+*ptra;
            *ptra=0;
            printf("��a��Һ�嵹��b��a=%d,b=%d\n",*ptra,*ptrb);
        }
    }
}

//6 b��a�е�
int btoa(int*ptra,int*ptrb,int ain,int bin)
{
    int rem;
    if(*ptrb>0 && *ptra>=0 && *ptra<ain)
    {
        rem=ain-*ptra;
        if(*ptrb>=rem)
        {
            *ptra=ain;
            *ptrb=*ptrb-rem;
            printf("��b��Һ�嵹��a��a=%d,b=%d\n",*ptra,*ptrb);
        }else if(*ptrb<rem)
        {
            *ptra=*ptra+*ptrb;
            *ptrb=0;
            printf("��b��Һ�嵹��a! a=%d,b=%d",*ptra,*ptrb);
        }
    }
}





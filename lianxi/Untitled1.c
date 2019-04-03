#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define N 5
//-------------------------------------------------------------------------------------------------------------
void input(double[]);
void sort(double[]);
void show(double[]);
void search(double[]);
void measure(double[]);
//-------------------------------------------------------------------------------------------------------------


//输入数组函数input
void input(double scores[])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("请输入第%d门课的成绩（总数为5）:",i+1);
        scanf("%lf",&scores[i]);
    }
}
//************************************************************

//数组排序函数sort
void sort(double scores[])
{
    int i,j;double temp;
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(scores[j] > scores[j+1])
            {
                temp=scores[j];
                scores[j]=scores[j+1];
                scores[j+1]=temp;
            }
        }
    }
}
//************************************************************

//数组打印函数show
void show(double scores[])
{
    int i;
    printf("*******************************\n");
    printf("语文\t数学\t英语\t物理\t化学\n");
    for(i=0;i<N;i++)
    {
        printf("%.2lf\t",scores[i]);
    }
    printf("\n******************************\n");
}
//************************************************************

//查找数组元素search
void search(double scores[])
{
    int searchindex,i;double searchnum;
    printf("请输入想要查找的数据：");
    scanf("%lf",&searchnum);
    for(i=0;i<N;i++)
    {
        if(searchnum == *(scores+i))
        {
            printf("Find it! The index is %d\n",i+1);
            break;
        }
    }
}
//*************************************************************

//测量数组元素的多少measure
void measure(double scores[])
{
    printf("数组元素的数量为：%d\n",sizeof(scores) / sizeof(double));
}
//***********************************************************************

//

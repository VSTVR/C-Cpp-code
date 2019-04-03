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


//�������麯��input
void input(double scores[])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("�������%d�ſεĳɼ�������Ϊ5��:",i+1);
        scanf("%lf",&scores[i]);
    }
}
//************************************************************

//����������sort
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

//�����ӡ����show
void show(double scores[])
{
    int i;
    printf("*******************************\n");
    printf("����\t��ѧ\tӢ��\t����\t��ѧ\n");
    for(i=0;i<N;i++)
    {
        printf("%.2lf\t",scores[i]);
    }
    printf("\n******************************\n");
}
//************************************************************

//��������Ԫ��search
void search(double scores[])
{
    int searchindex,i;double searchnum;
    printf("��������Ҫ���ҵ����ݣ�");
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

//��������Ԫ�صĶ���measure
void measure(double scores[])
{
    printf("����Ԫ�ص�����Ϊ��%d\n",sizeof(scores) / sizeof(double));
}
//***********************************************************************

//

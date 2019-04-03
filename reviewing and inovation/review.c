#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "review.h"
#include <time.h>
#define N 4


/*Tree *create(Tree *p)
{
    int num;
    scanf("%d",&num);
    if(num==0)
    {
        return NULL;
    }
    p=(Tree *)malloc(sizeof(Tree));
    p->data=num;
    p->next=create(p);
    return p;
}

void *order(Tree *p)
{
    Tree *cen=p;
    if(cen)
    {
        printf("%d\n",p->data);
        order(p->next);
    }
}


/*TNode *create(TNode *p)
{
    int num;
    scanf("%d",&num);
    if(num==0)
    {
        return NULL;
    }
    p=(TNode*)malloc(sizeof(TNode));
    p->data=num;
    p->ltree=create(p->ltree);
    p->rtree=create(p->rtree);
    return p;
}


void *preorder(TNode *p)
{
    TNode *tree=p;
    if(tree)
    {
        printf("%5d",p->data);
        preorder(p->ltree);
        preorder(p->rtree);
    }
}

void *inorder(TNode *p)
{
    TNode *tree=p;
    if(tree)
    {
        inorder(p->ltree);
        printf("%5d",p->data);
        inorder(p->rtree);
    }
}

void *postorder(TNode *p)
{
    TNode *tree=p;
    if(tree)
    {
        postorder(p->ltree);
        postorder(p->rtree);
        printf("%5d",p->data);
    }
}




/*数组中有没有相同的元素？
int nosame(int*index)
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(index[i]==index[j])
            {
                return(10);
            }
        }
    }
}

//进制运算（核心）
int jinzhi(int*index)
{
    int i;
    index[N-1]+=1;
    for(i=N-1; i>=0; i--)
    {
        if(index[0]<N)
        {
            if(index[i]>=N)
            {
                index[i-1]=index[i-1]+index[i]-N+1;
                index[i]=0;
            }
        }
    }
}
/*int judge(int i,int n,int*ptr)
{
    int x,result=0;
    for(x=0;x<i;x++)
    {
        if(ptr[x]==n)
        {
            result=11;
            return(result);
        }
    }
    ptr[i]=n;
}

int ch(int*ptr)
{
    srand((unsigned)time(NULL));
    int i,j,n;
     n=rand()%10;
    for(i=0;i<4;i++)
    {
        while(judge(i,n,ptr)==11)
        {
            n=rand()%10;
        }
    }
    int x;
    for(x=0;x<4;x++)
    {
        printf("%d",ptr[x]);
    }
}
/*int ch(int nums[2][2])
{
    nums[0][0]=0;
}


/*int change(int*ptr1,int*ptr2)
{
    *ptr1=*ptr1+*ptr2;

}



/*double getpayment(struct Account*account)
{
    return account->money - account->bill;
}
*/

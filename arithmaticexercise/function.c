#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include "head.h"

int isfuhao(char c)
{
    if(c=='+')
    {
        return(12);
    }else{
        return(13);
    }
}

char *cutstr(char *input,int i)
{
    int x,len=0;
    for(x=i;isfuhao(input[x])!=12;x++)
    {
        len++;
    }
    char *ch;
    ch=(char*)malloc(sizeof(char)*len);//
    for(x=0;x<len;x++)
    {
        ch[x]=input[x+i];
    }

    return(ch);//
}

void turnstrtonum(char *ch)//将一个字符串传化为int
{
    int len=strlen(ch);int result=0;
    int i;
    for(i=0;i<len;i++)
    {
        result+=pow(10,len-i-1)*(ch[i]-'0');
    }
    printf("%d",result+1);//
}

void test_print(char *ch,int i)
{
    printf("%d",ch[i]-'0');
}

/*int isfuhao(char c)
{
    if(c=='+'||'-'||'*'||'/')
    {
        return(12);
    }else{
        return(13);
    }
}



/*bin create_bin_tree(int n)//创建指定层数的二叉树
{
    bin node;
    if(n==0)
    {
        return NULL;
    }
    node=(bin)malloc(sizeof(Bin));
    node->value=n;
    node->ltree=create_bin_tree(n-1);
    node->rtree=create_bin_tree(n-1);
    return node;
}

void print_bin_tree(bin p,int length)//打印二叉树
{
    int i;
    for(i=1;i<=length;i++)
    {
        print_aim_node(p,i);
        printf("\n");
    }
}

void print_aim_node(bin p,int level)//打印二叉树某一层的结点所有节点的值
{
    if(p==NULL)
    {
        return;
    }else{
        if(level==1)
        {
            printf("%d",p->value);
        }else{
            print_aim_node(p->ltree,level-1);
            print_aim_node(p->rtree,level-1);
        }
    }
}

void change_aim_level_value(bin p,int level)//改变二叉树某一行的全部值
{
    if(p==NULL)
    {
        return;
    }else{
        if(level==1)
        {
            scanf("%d",&p->value);
        }else{
            change_aim_level_value(p->ltree,level-1);
            change_aim_level_value(p->rtree,level-1);
        }
    }
}

void changewholetree(bin p,int n)//陆续改变二叉树每一行的值
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("请输入第%d行的数据，用空格隔开：",i);
        change_aim_level_value(p,i);
    }
}

void change_aim_locate_value(bin p,int x,int y)//修改二叉树指定坐标结点的数值（递归部）
{
    if(p==NULL)
    {
        return;
    }
    if(x==1)
    {
        printf("请输入想要修改后的值：");
        scanf("%d",&p->value);
    }else{
        if(y<=pow(2,x-1)/2)
        {
            change_aim_locate_value(p->ltree,x-1,y);
        }else if(y>pow(2,x-1)/2)
        {
            change_aim_locate_value(p->rtree,x-1,y);
        }
    }
}

void input_change(bin p)//修改二叉树指定坐标结点的数值（总部）
{
    int x,y;
    printf("请输入要修改的结点的坐标位置：");
    scanf("%d,%d",&x,&y);
    change_aim_locate_value(p,x,y);
}

//new

int Treedepth(bin p)//递归法测量树的深度
{
    int h1,h2;
    if(p==NULL)
    {
        return 0;
    }else{
        h1=Treedepth(p->ltree);
        h2=Treedepth(p->rtree);
        if(h1>h2)
        {
            return(h1+1);
        }else{
            return(h2+1);
        }
    }
}

bin find_aim_value(bin p,int aim)//查找目标数值，有则返回该值所在结点的地址
{
    if(p)
    {
        if(p->value==aim)
        {
            return p;
        }else{
            find_aim_value(p->ltree,aim);
            find_aim_value(p->rtree,aim);
        }
    }
}

*/












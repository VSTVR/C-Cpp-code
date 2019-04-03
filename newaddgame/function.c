
#include "head.h"


num_stack Initstack()//创建数字栈
{
    num_stack p;
    p=(num_stack)malloc(sizeof(Num_stack));
    p->top=-1;
    return(p);

}

str_stack initstack()//创建字符栈
{
    str_stack ch;
    ch=(str_stack)malloc(sizeof(Str_stack));
    ch->top=-1;
    return(ch);
}

void pushin_numstack(num_stack p,char*ch)//将字符数据转化为int型压入数字栈
{
    p->top++;
    p->value[p->top]=(int*)malloc(sizeof(int));
    p->value[p->top]=turnchtonum(ch);
}

void push_num_intonumstack(num_stack p,int n)
{
    p->top++;
    p->value[p->top]=(int*)malloc(sizeof(int));
    p->value[p->top]=n;
}

void pushin_strstack(str_stack ch,char c)//将字符数据压入字符栈
{
    ch->top++;
    ch->value[ch->top]=(char*)malloc(sizeof(char));
    ch->value[ch->top]=c;
}

int knowtop_numstack(num_stack p)
{
    int cen=p->value[p->top];
    free(p->value[p->top]);
    p->top--;
    return(cen);
}

int gettop_numstack(num_stack p)
{
    int cen=p->value[p->top];
    free(p->value[p->top]);
    p->top--;
    return(cen);
}

char knowtop_strstack(str_stack ch)
{
    return(ch->value[ch->top]);
}

char gettop_strstack(str_stack ch)
{
    char cen=ch->value[ch->top];
    free(ch->value[ch->top]);
    ch->top--;
    return(cen);
}

void delete_strstacktop(str_stack ch)
{
    free(ch->value[ch->top]);
    ch->top--;
}

void delete_numstack(num_stack p)
{
    free(p->value[p->top]);
    p->top--;
}

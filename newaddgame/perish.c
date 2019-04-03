//ÓÅÏÈ¼¶ÅÐ¶Ï
#include "head.h"

char pri[7][7]={
    {'>','>','<','<','<','>','>'},
    {'>','>','<','<','<','>','>'},
    {'>','>','>','>','<','>','>'},
    {'>','>','>','>','<','>','>'},
    {'<','<','<','<','<','=',' '},
    {'>','>','>','>',' ','>','>'},
    {'<','<','<','<','<',' ','='},
};

int xuhao(char c)
{
    switch(c)
    {
    case '+':
        return(0);break;
    case '-':
        return(1);break;
    case '*':
        return(2);break;
    case '/':
        return(3);break;
    case '(':
        return(4);break;
    case ')':
        return(5);break;
    case '#':
        return(6);break;
    }
}

char perish(char a,char b)
{
    int indexa=xuhao(a);
    int indexb=xuhao(b);
    return(pri[indexa,indexb]);
}


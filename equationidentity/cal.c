#include "head.h"

int cal(int a,char fuhao,int b)
{
    switch(fuhao)
    {
    case '+':
        return(a+b);break;
    case '-':
        return(a-b);break;
    case '*':
        return(a*b);break;
    case '/':
        return(a/b);break;
    }
}

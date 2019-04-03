#include "head.h"

int chufa(int a,int b)
{
    if(a%b==0)
    {
        return(a/b);
    }else{
        return((a-a%b)/b);
    }
}

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
        return(chufa(a,b));break;
    }
}

int turnchtonum(char*ch)
{
    int len=strlen(ch);
    int result=0;

    int i;
    for(i=0;i<len;i++)
    {
        result+=pow(10,len-i-1)*(ch[i]-'0');//
    }
    return(result+1);
}

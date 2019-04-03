#include "head.h"
char op[7]={'+','-','*','/','(',')','#'};

int isfuhao(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='('||c==')'||c=='#')//
    {
        return(12);
    }else{
        return(13);
    }
}

char *cutstr(char *input,int i)
{
    int x;int len=0;
    for(x=i;isfuhao(input[x])!=12;x++)
    {
        len++;
    }

    char *ch;
    ch=(char*)malloc(sizeof(char)*len);
    for(x=0;x<len;x++)
    {
        ch[x]=input[x+i];
    }
    return(ch);
}

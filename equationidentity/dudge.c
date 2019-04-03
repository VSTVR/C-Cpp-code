#include "head.h"

char op[7]={'+','-','*','/','(',')','#'};

int isin_op(char c)
{
    int i;
    for(i=0;i<7;i++)
    {
        if(op[i]==c)
        {
            return(1);
        }
    }
}

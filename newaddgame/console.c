#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "head.h"

void gamestart(int nums,int lines,int publicnode,int sum)
{
    node public_list=create_list(publicnode);
    int i;
    for(i=1;i<=lines;i++)
    {
        node PNAME(i)=create_list((nums-publicnode)/lines);
        stick_list(PNAME(i),public_list);
    }
    ;
}

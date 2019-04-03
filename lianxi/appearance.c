# include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

double calculate();

double calculate()
{
    int input;
    printf("************************\n");
    printf("1.加法\n");
    printf("2.减法\n");
    printf("3.乘法\n");
    printf("4.除法\n");
    printf("5.乘方\n");
    printf("************************\n");
    printf("请输入想要执行的操作：");
    scanf("%.2lf",input);
    switch(input)
    {
    case 1 :
        break;
    case 2 :
        break;
    case 3 :
        break;
    case 4 :
        break;
    case 5 :
        chengfang();
        break;
    default :
        break;
    }

}

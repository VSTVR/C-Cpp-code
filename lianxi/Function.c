#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

double chengfang(double,int);
double chengfang(double a,int b)
{
      double result=a;int i;
      printf("请输入a的值：");scanf("%.2lf",&a);
      printf("请输入b的值：");scanf("%d",&b);

      for(i=1;1<b;i++)
      {
          result*=a;
      }
      printf("%.2lf的%d次方是%.2lf",a,b,result);
}







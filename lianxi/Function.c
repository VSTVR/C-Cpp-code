#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

double chengfang(double,int);
double chengfang(double a,int b)
{
      double result=a;int i;
      printf("������a��ֵ��");scanf("%.2lf",&a);
      printf("������b��ֵ��");scanf("%d",&b);

      for(i=1;1<b;i++)
      {
          result*=a;
      }
      printf("%.2lf��%d�η���%.2lf",a,b,result);
}







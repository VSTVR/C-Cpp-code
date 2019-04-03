#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main()
{
    int a=0,b=0,aim,ain,bin;int*ptra,*ptrb;
    ptra=&a;ptrb=&b;
    printf("a和b的值的公约数为1\n");
    printf("请输入a容器的容量：");scanf("%d",&ain);
    printf("请输入b容器的容量：");scanf("%d",&bin);
    printf("请输入最终想要得到溶液的值：");scanf("%d",&aim);
    judge(ptra,ptrb,ain,bin,aim);

    return 0;
}

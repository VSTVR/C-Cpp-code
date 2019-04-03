#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//index1
int index_1(int i,int j,int index)
{
    int result;
    switch(index)
    {
    case 1:
        result=i+j;break;
    case 2:
        result=i-j;break;
    case 3:
        result=i*j;break;
    case 4:
        result=chu(i,j);break;
    }
}
//chu fa
int chu(int i,int j)
{
    int result;
    if(i%j==0)
    {
        result=i/j;
        return(result);
    }else{
        return 111111;
    }
}


//cao zuo1
int operate_1(int nums[4])
{
    int i,j,k,l;
    int m=0;
    int a,b,c;
    int used[100];int isequal=0;
    int result1,result2,result3;int used1=0,used2=0;int*ptr1=&used1,*ptr2=&used2;
    int used3=0;int*ptr3=&used3;
    int used4=0;int*ptr4=&used4;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(j!=i)
            {
                for(k=0; k<4; k++)
                {
                    if(k!=i && k!=j)
                    {
                        for(l=0; l<4; l++)
                        {
                            if(l!=i && l!=j && l!=k)
                            {
                                //二对二
                                for(a=1; a<=4; a++)
                                {

                                    for(b=1; b<=4; b++)
                                    {
                                        for(c=1; c<=4; c++)
                                        {
                                            result1=index_1(nums[i],nums[j],a);
                                            result2=index_1(nums[k],nums[l],b);
                                            result3=index_1(result1,result2,c);
                                            if(result3==24)
                                            {
                                                if(panduan(used,result1,m)!=0 && panduan(used,result2,m)!=0 && result1!=*ptr2 && result2!=*ptr1)
                                                {
if(xiangdengma(a,b,c)==16 && isequal==0)
{
                                                        if(c==3 || c==4)
                                                    {
                                                        printf("(%d",nums[i]);
                                                        print(a);
                                                        printf("%d)",nums[j]);
                                                        print(c);
                                                        printf("(%d",nums[k]);
                                                        print(b);
                                                        printf("%d)",nums[l]);
                                                        printf("\n");
                                                    }
                                                    else
                                                    {
                                                        printf("%d",nums[i]);
                                                        print(a);
                                                        printf("%d",nums[j]);
                                                        print(c);
                                                        printf("%d",nums[k]);
                                                        print(b);
                                                        printf("%d",nums[l]);
                                                        printf("\n");
                                                    }
                                                    m++;*ptr1=result1;*ptr2=result2;isequal=1;
}
                                                }//

                                            }
                                        }
                                    }
                                }


                            }
                        }
                    }
                }
            }
        }
    }
    //一对三 i*(j+-k+-l)
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(j!=i)
            {
                for(k=0; k<4; k++)
                {
                    if(k!=i && k!=j)
                    {
                        for(l=0; l<4; l++)
                        {
                            if(l!=i && l!=j && l!=k)
                            {
                                for(b=1; b<=2; b++)
                                {
                                    for(c=1; c<=2; c++)
                                    {
                                        result1=index_1(nums[j],nums[k],c);
                                        result2=index_1(result1,nums[l],b);
                                        result3=index_1(nums[i],result2,3);
                                        if(result3==24)
                                        {
                                            if(result2!=*ptr3)
                                            {
                                                printf("%d",nums[i]);
                                                print(3);
                                                printf("(%d",nums[j]);
                                                print(c);
                                                printf("%d",nums[k]);
                                                print(b);
                                                printf("%d)",nums[l]);
                                                printf("\n");
                                                *ptr3=result2;
                                            }
                                        }
                                    }
                                }

                            }
                        }
                    }
                }
            }
        }
    }
//1 to three i+-j*/(k+-l)
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(j!=i)
            {
                for(k=0; k<4; k++)
                {
                    if(k!=i && k!=j)
                    {
                        for(l=0; l<4; l++)
                        {
                            if(l!=i && l!=j && l!=k)
                            {
                                 for(a=1;a<=2;a++)
                                 {
                                     for(b=3;b<=4;b++)
                                     {
                                         for(c=1;c<=2;c++)
                                         {
                                             result1=index_1(nums[k],nums[l],c);
                                             result2=index_1(nums[j],result1,b);
                                             result3=index_1(nums[i],result2,a);
                                             if(result3==24)
                                             {
                                                 if(result1!=*ptr4)
                                                 {printf("%d",nums[i]);print(a);printf("%d",nums[j]);print(b);
                                                 printf("(%d",nums[k]);print(c);printf("%d)",nums[l]);printf("\n");
                                                 *ptr4=result1;
                                                 }
                                             }
                                         }
                                     }
                                 }
                            }
                        }
                    }
                }
            }
        }
    }
}
































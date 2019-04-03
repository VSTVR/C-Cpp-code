#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int twototwo(int i,int j,int k,int l,int*nums,int*used,int*ptrm)
{
    int a,b,c;
    int result1,result2,result3;

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
                    if(panduan(used,result1,ptrm)!=0 && panduan(used,result2,ptrm)!=0)
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
                        *ptrm++;
                    }

                }

            }
        }
    }
}

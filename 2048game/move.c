#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#define SIZE 4

//左
int score=0;
int left(int nums[SIZE][SIZE])
{
    int i,j,index,index2,temp;
    for(i=0; i<SIZE; i++)    //先把每行的数向左对齐
    {
        for(j=0; j<SIZE; j++)
        {
            if(nums[i][j]!=0)
            {
                index=j;
                while(nums[i][index-1]==0 && index>0)
                {
                    temp=nums[i][index];
                    nums[i][index]=nums[i][index-1];
                    nums[i][index-1]=temp;
                    index=index-1;
                }
            }

        }

    }
    for(i=0; i<SIZE; i++)  //判断与累加
    {
        for(j=0; j<SIZE; j++)
        {
            if(nums[i][j]==nums[i][j+1])   //
            {
                score+=nums[i][j];
                nums[i][j]=nums[i][j]+nums[i][j+1];
                for(index2=j+1; index2<(SIZE-1); index2++)
                {
                    nums[i][index2]=nums[i][index2+1];
                }
                nums[i][SIZE-1]=0;
            }
        }
    }
    random(nums);
}

//右
int right(int nums[SIZE][SIZE])
{
    int i,j,index,index2,temp;
    for(i=0; i<SIZE; i++)    //先把每行的数向左对齐
    {
        for(j=0; j<SIZE; j++)
        {
            if(nums[i][j]!=0)
            {
                index=j;
                while(nums[i][index+1]==0 && index<(SIZE-1))
                {
                    temp=nums[i][index];
                    nums[i][index]=nums[i][index+1];
                    nums[i][index+1]=temp;
                    index=index+1;
                }
            }

        }

    }
    for(i=0; i<SIZE; i++)  //判断与累加
    {
        for(j=0; j<SIZE; j++)
        {
            if(nums[i][j]==nums[i][j+1])   //
            {
                score+=nums[i][j];
                nums[i][j+1]=nums[i][j]+nums[i][j+1];
                for(index2=j; index2>0; index2--)
                {
                    nums[i][index2]=nums[i][index2-1];
                }
                nums[i][0]=0;
            }
        }
    }
    random(nums);
}

//上
int up(int nums[SIZE][SIZE])
{
    int i,j,index,index2,temp;
    for(j=0; j<SIZE; j++) //把每行数向上对齐
    {
        for(i=0; i<SIZE; i++)
        {
            if(nums[i][j]!=0)
            {
                index=i;
                while(nums[index-1][j]==0 && index>0)
                {
                    temp=nums[index][j];
                    nums[index][j]=nums[index-1][j];
                    nums[index-1][j]=temp;
                    index=index-1;
                }
            }
        }
    }
    for(j=0; j<SIZE; j++)
    {
        for(i=0; i<SIZE; i++)
        {
            if(nums[i][j]==nums[i+1][j])
            {
                score+=nums[i][j];
                nums[i][j]=nums[i][j]+nums[i+1][j];
                for(index2=i+1; index2<(SIZE-1); index2++)
                {
                    nums[index2][j]=nums[index2+1][j];
                }
                nums[SIZE-1][j]=0;
            }
        }
    }
    random(nums);
}

//下
int down(int nums[SIZE][SIZE])
{
    int i,j,index,index2,temp;
    for(j=0; j<SIZE; j++)   //将数列向下对齐
    {
        for(i=0; i<SIZE; i++)
        {
            if(nums[i][j]!=0)
            {
                index=i;
                while(nums[index+1][j]==0 && index<(SIZE-1))
                {
                    temp=nums[index][j];
                    nums[index][j]=nums[index+1][j];
                    nums[index+1][j]=temp;
                    index=index+1;
                }
            }
        }
    }
    for(j=0; j<SIZE; j++)
    {
        for(i=0; i<SIZE; i++)
        {
            if(nums[i][j]==nums[i+1][j])
            {
                score+=nums[i][j];
                nums[i+1][j]=nums[i][j]+nums[i+1][j];
                for(index2=i; index2>0; index2--)
                {
                    nums[index2][j]=nums[index2-1][j];
                }
                nums[0][j]=0;
            }
        }
    }
    random(nums);
}

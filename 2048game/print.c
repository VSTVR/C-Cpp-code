#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#define SIZE 4
extern score;
//print the array1
int print1(int nums[SIZE][SIZE])
{
    int i,j;
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            printf("%3d",nums[i][j]);
        }
        printf("\n");
    }
    printf("the score is : %d",score);
}

//print the array2
int printgrame(int nums[SIZE][SIZE])
{
    int i,j;
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            printf("%4d",nums[i][j]);
        }
        printf("\n");
    }
    printf("the score is: %d\n",score);
    Sleep(1000);
}

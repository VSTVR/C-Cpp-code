#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
int main()
{
    int nums[4]= {0,0,0,0};char start;char c;
start:
    fuzhi(nums);
    printarry(nums);
    printf("½á¹ûÊÇ£º\n");
    operate_1(nums);
    printf("do you want to play again?");
    scanf("%s",&c);
    if(c=='y')
    {
        system("cls");
        goto start;
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    extern char HotelNames[4][50];
    int choice;int days;
    choice=menu();
    printf("����ѡ���ǣ�%s\n",HotelNames[choice - 1]);
    days = getNights();
    getPrice();
    return 0;
}

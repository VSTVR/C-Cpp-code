#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <string.h>
#define USERNAME "VSTVR"
#define PASSWORD "wanqiwei668899"
#define KEY 5
//获得长度
int GetLength(char[]);
int GetLength(char str[])
{
    int count=0;
    while(str[count] != '\0')
    {
        count++;
    }
    return count;
}
//-------------------------------------------------------------------
//登陆识别
int login(char[],char[]);
int login(char username[],char password[])
{
    if(strcmp(username,USERNAME)!=0 || strcmp(password,PASSWORD)!=0)
    {
        return 0;
    }
    return 1;
}
//--------------------------------------------------------------------
//加密
char * encrypt(char[]);
char * encrypt(char password[])
{
    int i;
    for(i=0;i<strlen(password);i++)
    {
        password[i]=password[i]+i+KEY;
    }
    password[i]='\0';
    return password;
}
//----------------------------------------------------------------------


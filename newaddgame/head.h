#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

#define P printf("*");
typedef struct num_stack
{
    int *value;
    int top;
}Num_stack,*num_stack;

typedef struct str_stack
{
    char *value;
    int top;
}Str_stack,*str_stack;

#endif // HEAD_H_INCLUDED

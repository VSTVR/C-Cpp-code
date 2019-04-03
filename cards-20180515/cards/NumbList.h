#ifndef _NUMB_LIST_H_
#define _NUMB_LIST_H_
typedef struct  
{
	int** bufs;
	int length;
	int size;
}int_sq,*int_list;

typedef struct
{
	float* datas;
	int length;
	int size;
}float_sq,*float_list;

int_list create_int_list(int size);
void delete_int_list(int_list list);
void insert_int_list(int_list list,int* nums,int len);

float_list create_float_list(int len);
void delete_float_list(float_list list);
#endif


#include "NumbList.h"
#include <malloc.h>
#include <string.h>

int_list create_int_list(int size)
{
	int_list list;
	list = (int_list)malloc(sizeof(int_sq));
	list->bufs = (int**)malloc(size*sizeof(int*));
	list->length = 0;
	list->size = size;
	return list;
}
void delete_int_list(int_list list)
{
	int i;

	for(i=0;i<list->length;i++)
		free(list->bufs[i]);  //bufs是个数组，length是数组的长度
	free(list->bufs);//释放二级指针
	free(list);

	
}

void insert_int_list(int_list list,int* nums,int len)
{
	if(list->length < list->size)
	{
		list->bufs[list->length] = (int*)malloc(len*sizeof(int));
		memcpy(list->bufs[list->length],nums,len*sizeof(int));
		list->length++;
	}
}

float_list create_float_list(int* nums,int len)
{
	int i;
	float_list list;

	list = (float_list)malloc(sizeof(float_sq));
	list->datas = (float*)malloc((2*len-1)*sizeof(float));
	list->length = list->size = 2*len-1;
	for(i=0;i<list->size;i++)
	{
		if(i < len)
			list->datas[i] = (float)nums[i];	
		else
			list->datas[i] = 0;
	}
	return list;
}
void delete_float_list(float_list list)
{
	free(list->datas);
	free(list);
}
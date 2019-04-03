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
		free(list->bufs[i]);
	free(list->bufs);
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

float_list create_float_list(int len)
{
	float_list list;

	list = (float_list)malloc(sizeof(float_sq));
	list->datas = (float*)malloc(len*sizeof(float));
	list->length = list->size = len;
	
	return list;
}
void delete_float_list(float_list list)
{
	free(list->datas);
	free(list);
}
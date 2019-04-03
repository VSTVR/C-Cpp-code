#include "StrList.h"
#include <malloc.h>
#include <stdio.h>
#include <string.h>

str_list create_str_sq_list(int* nums,int len)
{
	int i;
	str_list list;
	char* str;

	list = (str_list)malloc(sizeof(str_sq));
	list->strs = (char**)malloc((2*len-1)*sizeof(char*));
	list->length = list->size = 2*len-1;
	for(i=0;i<list->size;i++)
	{
		str = (char*)malloc(5*len*sizeof(char));
		if(i < len)
			sprintf(str,"%d",nums[i]);	
		list->strs[i] = str;
	}
	return list;
}

void delete_str_sq_list(str_list list)
{
	int i;

	for(i=0;i<list->size;i++)
		free(list->strs[i]);
	free(list->strs);
	free(list);
}

str_link create_str_node(char* str)
{
	str_link link;

	link = (str_link)malloc(sizeof(str_node));
	link->str = 0;//初始化
	if(str)//接收到字符串
	{
		link->str = (char*)malloc((strlen(str)+1)*sizeof(char));
		strcpy(link->str,str);
	}
	link->next = 0;
	return link;
}
void delete_str_node(str_link node)
{
	if(node->str)
		free(node->str);
	free(node);
}
void delete_str_link(str_link head)
{
	str_link node = head,next;
	while(node)
	{
		next = node->next;
		delete_str_node(node);
		node = next;
	}
}

void insert_str_node(str_link head,str_link node)
{
	str_link last = head;
	while(last->next)
	{
		last = last->next;
	}
	last->next = node;
}
void print_str_link(str_link head)
{
	str_link node = head;
	while(node->next)
	{
		node = node->next;
		if(node->str)
			printf("%s\n",node->str);
	}
}
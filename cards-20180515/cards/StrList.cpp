#include "StrList.h"
#include <malloc.h>
#include <stdio.h>
#include <string.h>

str_list create_str_list(int len) //����˳���
{
	int i;
	str_list list;
	char* str;

	list = (str_list)malloc(sizeof(str_sq));//�����С
	list->strs = (char**)malloc(len*sizeof(char*));//���ӷ�Ϊlen���ռ䣬ÿ���ռ���һ��ָ��
	list->length = list->size = len;//Ŀǰ�������
	for(i=0;i<list->size;i++)
	{
		str = (char*)malloc(5*len*sizeof(char));
		list->strs[i] = str;//list->str[i]Ҳ�Ǹ�ָ�룬����ռ䣬����ָ�����˳�����
	}
	return list;
}

void delete_str_list(str_list list)//ɾ��˳���
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
	link->str = 0;
	if(str)
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

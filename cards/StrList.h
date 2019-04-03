#ifndef _STR_LIST_H_
#define _STR_LIST_H_
typedef struct  
{
	char** strs;
	int length;
	int size;
}str_sq,*str_list;

typedef struct str_node
{
	char* str;
	struct str_node* next;
}str_node,*str_link;

str_list create_str_sq_list(int* nums,int len);
void delete_str_sq_list(str_list list);
str_link create_str_node(char* str);
void delete_str_node(str_link node);
void delete_str_link(str_link head);
void insert_str_node(str_link head,str_link node);
void print_str_link(str_link head);
#endif
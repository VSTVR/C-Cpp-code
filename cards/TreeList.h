#ifndef _TREE_LIST_H_
#define _TREE_LIST_H_
#include "BinTree.h"
typedef struct  
{
	bin_tree* trees;
	int length;
	int size;
}tree_sq,*tree_list;

typedef struct tree_node
{
	bin_tree tree;
	char*	exp;
	struct tree_node* next;
}tree_node,*tree_link;

tree_list create_tree_sq_list(int len); 
void delete_tree_sq_list(tree_list list);
void insert_to_tree_sq_list(tree_list list,int n,bin_tree tree);
void delete_from_tree_sq_list(tree_list list,int n);

tree_link create_tree_node(bin_tree tree,char* exp);
void delete_tree_node(tree_link node);
void delete_tree_link(tree_link head);
tree_link search_from_tree_link(tree_link head,char* exp);

void print_tree_link(tree_link head);
#endif
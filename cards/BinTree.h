#ifndef _BIN_TREE_H_
#define _BIN_TREE_H_
#include "StrList.h"

typedef struct bin_node
{
	int number;
	struct bin_node *lchild;
	struct bin_node *rchild;
}bin_node,*bin_tree;


void del_bin_tree(bin_tree tree);
bin_tree copy_bin_tree(bin_tree tree);
bin_tree combine_bin_tree(bin_tree lchild,bin_tree rchild,int number);
void split_bin_tree(bin_tree tree,bin_tree* lchild,bin_tree* rchild);
void travel_tree_str(bin_tree tree,str_list list);
void travel_tree_nodes(bin_tree tree,bin_tree* nodes,int* n);


#endif
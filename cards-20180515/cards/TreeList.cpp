#include "TreeList.h"
#include <malloc.h>
#include <string.h>
#include <stdio.h>

tree_list create_tree_list(int len)
{
	int i;
	bin_tree tree;
	tree_list list;

	list = (tree_list)malloc(sizeof(tree_sq));
	list->trees = (bin_tree *)malloc(len*sizeof(bin_tree));//指向树的指针，3格
	list->length = list->size = len;
	for(i=0;i<len;i++)//创建3个二叉树
	{
		tree = (bin_tree)malloc(sizeof(bin_node));
		tree->number = i;
		tree->lchild = 0;//空
		tree->rchild = 0;
		list->trees[i] = tree;
	}
	return list;
}

void delete_tree_list(tree_list list)
{
	int i;

	for(i=0;i<list->size;i++)
		del_bin_tree(list->trees[i]);
	free(list->trees);
	free(list);
}

void insert_to_tree_sq_list(tree_list list,int n,bin_tree tree)//tree为0
{
	int i;

	if(n>=0 && n<=list->length && list->length<list->size)
	{
		for(i=list->length;i>n;i--)
			list->trees[i] = list->trees[i-1];
		list->trees[n] = tree;//置零
		list->length++;//长度恢复
	}

}

void delete_from_tree_sq_list(tree_list list,int n)
{
	int i;
	if(n>=0 && n<list->length)
	{
		for(i=n;i<list->length-1;i++)
			list->trees[i] = list->trees[i+1];
		list->length--;
	}
}

tree_link create_tree_node(bin_tree tree,char* exp)//（0,0）
{
	tree_link list;
	list = (tree_link)malloc(sizeof(tree_node));
	list->exp = 0;
	list->tree = 0;
	list->next = 0;
	if(tree)//有树
		list->tree = copy_bin_tree(tree);
	if(exp)
	{
		list->exp = (char*)malloc((strlen(exp)+1)*sizeof(char));
		strcpy(list->exp,exp);//把exp指针地址复制给list->exp
	}
	return list;
}

void delete_tree_node(tree_link node)
{
	if(node)
	{
		if(node->exp)
			free(node->exp);
		del_bin_tree(node->tree);
		free(node);
	}
}

void delete_tree_link(tree_link head)
{
	tree_link node,next;
	node = head;
	while(node)
	{
		next = node->next;
		delete_tree_node(node);
		node = next;
	}
}

tree_link search_from_tree_link(tree_link head,char* exp)
{
	tree_link node=head;

	while(node->next)
	{
		node = node->next;
		if(node->exp && exp)
		{
			if(0 == strcmp(node->exp,exp))
				return 0;
		}
	}
	return node;
}

void print_tree_link(tree_link head)
{
	tree_link node = head;
	while(node->next)
	{
		node = node->next;
		if(node->exp)
			printf("%s\n",node->exp);
	}
}

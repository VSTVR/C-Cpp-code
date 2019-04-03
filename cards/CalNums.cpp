#include "CalNums.h"
#include "PermNumb.h"
#include "TreeList.h"
#include "CombTree.h"
#include <stdio.h>
#include <malloc.h>
#include <math.h>

typedef struct
{
	float_list result;
	str_list exp;
	int goal;
	int swap;
	str_link head;
}cal_info;

static void cal_nums_by_trees(bin_tree* trees, cal_info info,int len,int n);
static void cal_nums_by_tree_link(tree_link head,cal_info info,int len);

void cal_nums_by_perm_comb(int* nums,int len,int goal,str_link link)
{
	int i,j,perm_counts;
	int_list nums_list;
	tree_link tree_head;
	tree_list tree_list;
	str_list str_list;
	float_list val_list;
	cal_info info;
	
	perm_counts = perm_number_counts(nums,len);
	nums_list = create_int_list(perm_counts);
	tree_list = create_tree_sq_list(len);
	tree_head = create_tree_node(0,0);
	str_list = create_str_sq_list(nums,len);
	val_list = create_float_list(nums,len);

	for(i=0;i<len;i++)
		sprintf(str_list->strs[i],"%d",i);
	info.exp = str_list;
	info.goal = goal;
	info.result = val_list;
	info.swap = 0;
	info.head = link;
	perm_number_unique(nums,len,0,nums_list);
	combine_near_tree(tree_list,len,tree_head,str_list);
	print_tree_link(tree_head);
	for(i=0;i<nums_list->length;i++)
	{
		for(j=0;j<len;j++)
		{
			sprintf(str_list->strs[j],"%d",nums_list->bufs[i][j]);
			val_list->datas[j] = (float)nums_list->bufs[i][j];
		}
		cal_nums_by_tree_link(tree_head,info,len-1);
	}
	delete_int_list(nums_list);
	delete_tree_sq_list(tree_list);
	delete_str_sq_list(str_list);
	delete_tree_link(tree_head);
	delete_float_list(val_list);
	
}

static void cal_nums_by_trees(bin_tree* trees, cal_info info,int len,int n)
{
	char *cur_str,*left_str,*right_str;
	float left_val,right_val;
	str_link node;
	if(n == len)
	{
		if(fabs(info.result->datas[info.result->size-1]-info.goal) < 0.00001)
		{
			node = create_str_node(info.exp->strs[info.exp->size-1]);
			insert_str_node(info.head,node);
			//printf("%s\n",info.exp->strs[info.exp->size-1]);
		}
	}
	else
	{
		cur_str = info.exp->strs[trees[n]->number];
		left_str = info.exp->strs[trees[n]->lchild->number];
		right_str = info.exp->strs[trees[n]->rchild->number];
		left_val = info.result->datas[trees[n]->lchild->number];
		right_val = info.result->datas[trees[n]->rchild->number];

		sprintf(cur_str,"(%s+%s)",left_str,right_str);
		info.result->datas[trees[n]->number] = left_val + right_val;
		cal_nums_by_trees(trees,info,len,n+1);
		sprintf(cur_str,"(%s-%s)",left_str,right_str);
		info.result->datas[trees[n]->number] = left_val - right_val;
		cal_nums_by_trees(trees,info,len,n+1);
		sprintf(cur_str,"(%s*%s)",left_str,right_str);
		info.result->datas[trees[n]->number] = left_val * right_val;
		cal_nums_by_trees(trees,info,len,n+1);
		if(fabs(right_val) > 0.000001)
		{
			sprintf(cur_str,"(%s/%s)",left_str,right_str);
			info.result->datas[trees[n]->number] = left_val / right_val;
			cal_nums_by_trees(trees,info,len,n+1);
		}
		
	}
}

static void cal_nums_by_tree_link(tree_link head,cal_info info,int len)
{
	bin_tree* trees;
	tree_link node=head;
	int n;

	trees = (bin_tree*)malloc((len)*sizeof(bin_tree));
	while(node->next)
	{
		node = node->next;
		n = 0;
		travel_tree_nodes(node->tree,trees,&n);
		cal_nums_by_trees(trees,info,len,0);
	}
	free(trees);
}

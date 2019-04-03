#include "CalNums.h"
#include "PermNumb.h"
#include "TreeList.h"
#include "CombTree.h"
#include <stdio.h>
#include <malloc.h>
#include <math.h>


typedef struct
{
	float_list vals;//计算过程中使用的计算结果值，长度为2*len-1
	str_list strs;//计算过程中使用的表达式字符串，长度为2*len-1
	bin_tree* trees;//计算过程中使用的二叉树结点指针，长度为len-1
	char* ops;//计算过程中使用的运算符，长度为len-1
	int goal;//表达式目标值
	int swap;//是否要交换计算，0不需要，1需要
	int len;//待计算的数据个数
}cal_info;



static str_link cal_nums_by_perm_list(int_list nums,tree_link comb,cal_info* info);
static void cal_nums_by_trees(cal_info* info,str_link link,int n);
static void get_exp_by_cal_info(cal_info* info);
static cal_info* create_cal_info(int goal,int swap,int len);
static void delete_cal_info(cal_info* info);


str_link cal_nums_by_perm_comb(int* nums,int len,int goal)
{
	int_list nums_list;
	tree_link tree_head;
	cal_info* info;
	str_link exp_link;

	nums_list = perm_number_unique(nums,len);//进行全排列，全排列的结果放在nums_list顺序表中
	tree_head = combine_near_tree(len);//进行相邻组合，组合结果放在tree_head链表中
	info = create_cal_info(goal,0,len);//准备计算所需要的中间结果变量结构体
	exp_link = cal_nums_by_perm_list(nums_list,tree_head,info);//进行计算，将符合条件的结果保存在exp_link链表中
	delete_int_list(nums_list);
	delete_tree_link(tree_head);
	delete_cal_info(info);

	return exp_link;//返回符合条件的链表
}




static str_link cal_nums_by_perm_list(int_list nums,tree_link comb,cal_info* info)//进行运算
{
	int i,j,n;
	tree_link node;
	str_link link = create_str_node(0);

	for(i=0;i<nums->length;i++)
	{
		for(j=0;j<info->len;j++)
		{
			sprintf(info->strs->strs[j],"%d",nums->bufs[i][j]);//将buffs中的组合拼接到strs存储的字符串中去
			info->vals->datas[j] = (float)nums->bufs[i][j];//转化bufs数据的类型为float,
		}
		node = comb->next;//指针指向下一个
		while(node)//当node存在时
		{
			n = 0;
			travel_tree_nodes(node->tree,info->trees,&n);
			cal_nums_by_trees(info,link,0);
			node = node->next;
		}
	}

	return link;
}

static void cal_nums_by_trees(cal_info* info,str_link link,int n)
{
	float left_val,right_val;
	str_link node;

	if(n == info->len-1)
	{
		if(fabs(info->vals->datas[info->vals->size-1]-info->goal) < 0.00001)
		{
			get_exp_by_cal_info(info);
			node = create_str_node(info->strs->strs[info->strs->size-1]);
			insert_str_node(link,node);
			//printf("%s\n",info.exp->strs[info.exp->size-1]);
		}
	}
	else
	{
		left_val = info->vals->datas[info->trees[n]->lchild->number];
		right_val = info->vals->datas[info->trees[n]->rchild->number];

		info->ops[n] = '+';
		info->vals->datas[info->trees[n]->number] = left_val + right_val;
		cal_nums_by_trees(info,link,n+1);
		info->ops[n] = '-';
		info->vals->datas[info->trees[n]->number] = left_val - right_val;
		cal_nums_by_trees(info,link,n+1);
		info->ops[n] = '*';
		info->vals->datas[info->trees[n]->number] = left_val * right_val;
		cal_nums_by_trees(info,link,n+1);
		if(fabs(right_val) > 0.000001)
		{
			info->ops[n] = '/';
			info->vals->datas[info->trees[n]->number] = left_val / right_val;
			cal_nums_by_trees(info,link,n+1);
		}

	}
}

static void get_exp_by_cal_info(cal_info* info)
{
	int i;
	char *cur,*left,*right;


	for(i=0;i<info->len-1;i++)
	{
		cur = info->strs->strs[info->trees[i]->number];
		left = info->strs->strs[info->trees[i]->lchild->number];
		right = info->strs->strs[info->trees[i]->rchild->number];
		sprintf(cur,"(%s%c%s)",left,info->ops[i],right);
	}
}

static cal_info* create_cal_info(int goal,int swap,int len)
{
	cal_info* info = (cal_info*)malloc(sizeof(cal_info));

	info->goal = goal;
	info->swap = swap;
	info->len = len;
	info->strs = create_str_list(2*len-1);
	info->vals = create_float_list(2*len-1);
	info->trees = (bin_tree*)malloc((len-1)*sizeof(bin_tree));
	info->ops = (char*)malloc((len-1)*sizeof(char));//运算符

	return info;
}

static void delete_cal_info(cal_info* info)
{
	delete_str_list(info->strs);
	delete_float_list(info->vals);
	free(info->trees);
	free(info->ops);
	free(info);
}

#include "CombTree.h"
#include <stdio.h>
#include <malloc.h>

static void combine_near_tree_(tree_list list,int number,tree_link head,str_list str);//合并相邻的树

tree_link combine_near_tree(int nums_len)
{
	tree_link tree_head;//创建树链表
	tree_list tree_list;//创建树顺序表
	str_list str_list;//字符串顺序表
	int i;

	str_list = create_str_list(2*nums_len-1);//创建1个房间，有一个有2n-1个空间的柜子，每个空间存放一个指针
	for(i=0;i<nums_len;i++)
		sprintf(str_list->strs[i],"%d",i);//后面几个空间未赋值
	tree_list = create_tree_list(nums_len);//创建树表
	tree_head = create_tree_node(0,0);//

	combine_near_tree_(tree_list,nums_len,tree_head,str_list);

	delete_str_list(str_list);
	delete_tree_list(tree_list);
	print_tree_link(tree_head);

	return tree_head;

}

static void combine_near_tree_(tree_list list,int number,tree_link head,str_list str)//(list,3,head,str）
{
	int i;
	tree_link link,node;

	if(1 == list->length)//只剩下一个
	{
		travel_tree_comb(list->trees[0],str,0);
		link = search_from_tree_link(head,str->strs[str->size-1]);
		if(link)
		{
			node = create_tree_node(list->trees[0],str->strs[str->size-1]);
			link->next = node;
		}
	}
	else
	{
		for(i=0;i<list->length-1;i++)
		{
			list->trees[i] = combine_bin_tree(list->trees[i],list->trees[i+1],number);//将i和i+1项合并，结果放在i中
			delete_from_tree_sq_list(list,i+1);//删除i+1
			combine_near_tree_(list,number+1,head,str);//合并剩下的相邻的树，
			insert_to_tree_sq_list(list,i+1,0);//复原,i+1处为空指针
			split_bin_tree(list->trees[i],list->trees+i,list->trees+i+1);
		}
	}
}

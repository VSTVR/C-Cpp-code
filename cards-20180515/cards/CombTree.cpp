#include "CombTree.h"
#include <stdio.h>
#include <malloc.h>

static void combine_near_tree_(tree_list list,int number,tree_link head,str_list str);//�ϲ����ڵ���

tree_link combine_near_tree(int nums_len)
{
	tree_link tree_head;//����������
	tree_list tree_list;//������˳���
	str_list str_list;//�ַ���˳���
	int i;

	str_list = create_str_list(2*nums_len-1);//����1�����䣬��һ����2n-1���ռ�Ĺ��ӣ�ÿ���ռ���һ��ָ��
	for(i=0;i<nums_len;i++)
		sprintf(str_list->strs[i],"%d",i);//���漸���ռ�δ��ֵ
	tree_list = create_tree_list(nums_len);//��������
	tree_head = create_tree_node(0,0);//

	combine_near_tree_(tree_list,nums_len,tree_head,str_list);

	delete_str_list(str_list);
	delete_tree_list(tree_list);
	print_tree_link(tree_head);

	return tree_head;

}

static void combine_near_tree_(tree_list list,int number,tree_link head,str_list str)//(list,3,head,str��
{
	int i;
	tree_link link,node;

	if(1 == list->length)//ֻʣ��һ��
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
			list->trees[i] = combine_bin_tree(list->trees[i],list->trees[i+1],number);//��i��i+1��ϲ����������i��
			delete_from_tree_sq_list(list,i+1);//ɾ��i+1
			combine_near_tree_(list,number+1,head,str);//�ϲ�ʣ�µ����ڵ�����
			insert_to_tree_sq_list(list,i+1,0);//��ԭ,i+1��Ϊ��ָ��
			split_bin_tree(list->trees[i],list->trees+i,list->trees+i+1);
		}
	}
}

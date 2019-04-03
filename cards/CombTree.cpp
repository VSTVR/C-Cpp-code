#include "CombTree.h"
#include <stdio.h>


void combine_near_tree(tree_list list,int number,tree_link head,str_list str)
{
	int i;
	tree_link link,node;
	
	if(1 == list->length)
	{
		travel_tree_str(list->trees[0],str);
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
			list->trees[i] = combine_bin_tree(list->trees[i],list->trees[i+1],number);
			delete_from_tree_sq_list(list,i+1);
			combine_near_tree(list,number+1,head,str);
			insert_to_tree_sq_list(list,i+1,0);
			split_bin_tree(list->trees[i],list->trees+i,list->trees+i+1);
		}
	}
}
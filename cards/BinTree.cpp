#include "BinTree.h"
#include <malloc.h>
#include <stdio.h>
#include <string.h>


void del_bin_tree(bin_tree tree)   //@
{
	if(tree)
	{
		del_bin_tree(tree->lchild);
		del_bin_tree(tree->rchild);
		//printf("delete %d\n",tree);
		free(tree);
		//tree = 0;
	}
}

bin_tree copy_bin_tree(bin_tree tree)  //@
{
	bin_tree copy_tree=0; 
	if(tree)
	{
		copy_tree = (bin_tree)malloc(sizeof(bin_node));
		copy_tree->number = tree->number;
		copy_tree->lchild = copy_bin_tree(tree->lchild);
		copy_tree->rchild = copy_bin_tree(tree->rchild);
		return copy_tree;
	}
	else
		return 0;
	
}

void travel_tree_str(bin_tree tree,str_list list)
{
	if(tree)
	{
		travel_tree_str(tree->lchild,list);
		travel_tree_str(tree->rchild,list);
		if(tree->lchild && tree->rchild)
			sprintf(list->strs[tree->number],"(%s,%s)",list->strs[tree->lchild->number],list->strs[tree->rchild->number]);
	}
}

void travel_tree_nodes(bin_tree tree,bin_tree* nodes,int* n)
{
	if(tree)
	{
		travel_tree_nodes(tree->lchild,nodes,n);
		travel_tree_nodes(tree->rchild,nodes,n);
		if(tree->lchild && tree->rchild)
		{
			nodes[*n] = tree;
			*n += 1;
		}
	}
}

bin_tree combine_bin_tree(bin_tree lchild,bin_tree rchild,int number)
{
	bin_tree tree;
	tree = (bin_tree)malloc(sizeof(bin_node));
	tree->number = number;
	tree->lchild = lchild;
	tree->rchild = rchild;
	
	return tree;
}

void split_bin_tree(bin_tree tree,bin_tree* lchild,bin_tree* rchild)
{
	*lchild = tree->lchild;
	*rchild = tree->rchild;
	free(tree);
}
/*
void MidorerBinTree(bin_tree tree)
{
	if(tree)
	{
		MidorerBinTree(tree->lchild);
		if(tree->lchild && tree->rchild)
			printf("%X ",tree);
		MidorerBinTree(tree->rchild);
	}
}

void PostBinTree(bin_tree tree,bin_tree *trees,int &n)
{
	if(tree)
	{
		PostBinTree(tree->lchild,trees,n);
		PostBinTree(tree->rchild,trees,n);
		if(tree->lchild && tree->rchild)
			trees[n++] = tree;
	}
}

void CombNearTree(bin_tree *trees,int len)
{
	int i,j,n=0;
	//bin_tree exp_trees;

	if(1 == len)
	{
		//exp_trees
		printf("%s\n",trees[0]->exp);
	}
	else
	{
		for(i=0;i<len-1;i++)
		{
			trees[i] = CombBinTree(trees[i],trees[i+1]);
			//trees[i]->data = len;
			for(j=i+1;j<len-1;j++)
				trees[j] = trees[j+1];
			CombNearTree(trees,len-1);
			for(j=len-1;j>i;j--)
				trees[j] = trees[j-1];
			SplitBinTree(trees[i],trees+i,trees+i+1);
		}
	}

}


void CombAnyTree(bin_tree *trees,int len)
{
	int i,j,k;
	
	if(1 == len)
	{
		MidorerBinTree(trees[0]);
		printf("%s\n",trees[0]->exp);
	}
	else
	{
		for(i=0;i<len-1;i++)
		{
			for(j=i+1;j<len;j++)
			{
				trees[i] = CombOrderTree(trees[i],trees[j]);
				for(k=j;k<len-1;k++)
					trees[k] = trees[k+1];
				CombAnyTree(trees,len-1);
				for(k=len-1;k>j;k--)
					trees[k] = trees[k-1];
				SplitBinTree(trees[i],trees+i,trees+j);
			}
		}
	}	
}*/
#include "BinTree.h"
#include <malloc.h>
#include <stdio.h>
#include <string.h>

void del_bin_tree(bin_tree tree)//删除二叉树
{
	if(tree)
	{
		del_bin_tree(tree->lchild);
		del_bin_tree(tree->rchild);
		//printf("delete %d\n",tree);
		free(tree);//当是叶子节点时，free
		//tree = 0;
	}
}

bin_tree copy_bin_tree(bin_tree tree)//复制二叉树
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

void travel_tree_comb(bin_tree tree,str_list list,int sort)//二叉树的遍历
{
	char *cur,*left,*right;
	if(tree)
	{
		travel_tree_comb(tree->lchild,list,sort);
		travel_tree_comb(tree->rchild,list,sort);
		if(tree->lchild && tree->rchild)
		{
			cur = list->strs[tree->number];
			left = list->strs[tree->lchild->number];
			right = list->strs[tree->rchild->number];
			if(sort)
			{
				if(strcmp(left,right) < 0)
					sprintf(cur,"(%s,%s)",left,right);
				else
					sprintf(cur,"(%s,%s)",right,left);
			}
			else
				sprintf(cur,"(%s,%s)",left,right);
		}
	}
}

void travel_tree_nodes(bin_tree tree,bin_tree* nodes,int* n)//二叉树结点的遍历
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
/*
void travel_tree_ops(bin_tree tree,str_list list,char* ops,int* n)
{
	char *cur,*left,*right;
	if(tree)
	{
		travel_tree_ops(tree->lchild,list,ops,n);
		travel_tree_ops(tree->rchild,list,ops,n);
		if(tree->lchild && tree->rchild)
		{
			cur = list->strs[tree->number];
			left = list->strs[tree->lchild->number];
			right = list->strs[tree->rchild->number];
			sprintf(cur,"(%s%c%s)",left,ops[*n],right);
			*n += 1;
		}
	}
}
*/
bin_tree combine_bin_tree(bin_tree lchild,bin_tree rchild,int number)
{
	bin_tree tree;
	tree = (bin_tree)malloc(sizeof(bin_node));
	tree->number = number;
	tree->lchild = lchild;
	tree->rchild = rchild;

	return tree;//返回二叉树指针
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

#include "CalNums.h"
#include "PermNumb.h"
#include "TreeList.h"
#include "CombTree.h"
#include <stdio.h>
#include <malloc.h>
#include <math.h>


typedef struct
{
	float_list vals;//���������ʹ�õļ�����ֵ������Ϊ2*len-1
	str_list strs;//���������ʹ�õı��ʽ�ַ���������Ϊ2*len-1
	bin_tree* trees;//���������ʹ�õĶ��������ָ�룬����Ϊlen-1
	char* ops;//���������ʹ�õ������������Ϊlen-1
	int goal;//���ʽĿ��ֵ
	int swap;//�Ƿ�Ҫ�������㣬0����Ҫ��1��Ҫ
	int len;//����������ݸ���
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

	nums_list = perm_number_unique(nums,len);//����ȫ���У�ȫ���еĽ������nums_list˳�����
	tree_head = combine_near_tree(len);//����������ϣ���Ͻ������tree_head������
	info = create_cal_info(goal,0,len);//׼����������Ҫ���м��������ṹ��
	exp_link = cal_nums_by_perm_list(nums_list,tree_head,info);//���м��㣬�����������Ľ��������exp_link������
	delete_int_list(nums_list);
	delete_tree_link(tree_head);
	delete_cal_info(info);

	return exp_link;//���ط�������������
}




static str_link cal_nums_by_perm_list(int_list nums,tree_link comb,cal_info* info)//��������
{
	int i,j,n;
	tree_link node;
	str_link link = create_str_node(0);

	for(i=0;i<nums->length;i++)
	{
		for(j=0;j<info->len;j++)
		{
			sprintf(info->strs->strs[j],"%d",nums->bufs[i][j]);//��buffs�е����ƴ�ӵ�strs�洢���ַ�����ȥ
			info->vals->datas[j] = (float)nums->bufs[i][j];//ת��bufs���ݵ�����Ϊfloat,
		}
		node = comb->next;//ָ��ָ����һ��
		while(node)//��node����ʱ
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
	info->ops = (char*)malloc((len-1)*sizeof(char));//�����

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

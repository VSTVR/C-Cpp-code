#include "PermNumb.h"
#include <stdio.h>


static int perm_number_counts(int* nums,int len);
static void perm_number_unique_(int* nums,int len,int n,int_list list);
static void swap_int(int* p1,int* p2);
static int is_swap(int* nums, int begin, int end);
static void quic_sort_int(int* nums,int len,int begin,int end);


int_list perm_number_unique(int* nums,int len)
{
	int counts;
	int_list list;

	counts = perm_number_counts(nums,len);//返回组合的数量
	list = create_int_list(counts);//以数量作为规模创建一个顺序表
	perm_number_unique_(nums,len,0,list);//不是递归！将数组排列的情况输入顺序表

	return list;//输出该顺序表
}

static int perm_number_counts(int* nums,int len)
{
	int i,times = 1,divs = 1,total=1;

	quic_sort_int(nums,len,0,len-1);
	for(i=0;i<len-1;i++)
	{
		total *= (i+2);
		if(nums[i] == nums[i+1])
		{
			times++;
			divs *= times;
		}
		else
		{
			times = 1;
		}
	}
	return total/divs;
}

void perm_number_unique_(int* nums,int len,int n,int_list list)
{
	int i;
	if (n == len)
    {
        /*for(int j=0;j<len;j++)
			printf("%d ",nums[j]);
		printf("\n");*/
		insert_int_list(list,nums,len);
    }
    else
    {
        for (i = n; i < len; i++) // 第i个数分别与它后面的数字交换就能得到新的排列
        {
            if (is_swap(nums, n, i))
            {
                swap_int(nums + n, nums + i);
                perm_number_unique_(nums,len , n + 1,list);
                swap_int(nums + n, nums + i);
            }
        }
    }
}

static void swap_int(int* p1,int* p2)
{
	int temp;
	temp = *p2;
	*p2 = *p1;
	*p1 = temp;
}
static int is_swap(int* nums, int begin, int end)
{
	int i;
    for (i = begin; i < end; i++)
        if (nums[i] == nums[end])
            return 0;
	return 1;
}

static void quic_sort_int(int* nums,int len,int begin,int end)
{
	int i, j;

    if(begin < end)
    {
        i = begin + 1;  // 将array[begin]作为基准数，因此从array[begin+1]开始与基准数比较！
        j = end;        // array[end]是数组的最后一位

        while(i < j)
        {
            if(nums[i] > nums[begin])  // 如果比较的数组元素大于基准数，则交换位置。
            {
                swap_int(&nums[i], &nums[j]);  // 交换两个数
                j--;
            }
            else
            {
                i++;  // 将数组向后移一位，继续与基准数比较。
            }
        }

        if(nums[i] >= nums[begin])  // 这里必须要取等“>=”，否则数组元素由相同的值时，会出现错误！
        {
            i--;
        }
        swap_int(&nums[begin], &nums[i]);  // 交换array[i]与array[begin]
        quic_sort_int(nums, len, begin, i);
        quic_sort_int(nums, len, j, end);
    }
}


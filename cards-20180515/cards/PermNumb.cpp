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

	counts = perm_number_counts(nums,len);//������ϵ�����
	list = create_int_list(counts);//��������Ϊ��ģ����һ��˳���
	perm_number_unique_(nums,len,0,list);//���ǵݹ飡���������е��������˳���

	return list;//�����˳���
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
        for (i = n; i < len; i++) // ��i�����ֱ�������������ֽ������ܵõ��µ�����
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
        i = begin + 1;  // ��array[begin]��Ϊ��׼������˴�array[begin+1]��ʼ���׼���Ƚϣ�
        j = end;        // array[end]����������һλ

        while(i < j)
        {
            if(nums[i] > nums[begin])  // ����Ƚϵ�����Ԫ�ش��ڻ�׼�����򽻻�λ�á�
            {
                swap_int(&nums[i], &nums[j]);  // ����������
                j--;
            }
            else
            {
                i++;  // �����������һλ���������׼���Ƚϡ�
            }
        }

        if(nums[i] >= nums[begin])  // �������Ҫȡ�ȡ�>=������������Ԫ������ͬ��ֵʱ������ִ���
        {
            i--;
        }
        swap_int(&nums[begin], &nums[i]);  // ����array[i]��array[begin]
        quic_sort_int(nums, len, begin, i);
        quic_sort_int(nums, len, j, end);
    }
}


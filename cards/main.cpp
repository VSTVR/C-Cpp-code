#include "CalNums.h"
#include "StrList.h"

void main()
{
	int nums[] = {5,5,8,13};
	str_link head;
	head = create_str_node(0);
	
	cal_nums_by_perm_comb(nums,4,24,head);
	print_str_link(head);
	delete_str_link(head);	
}
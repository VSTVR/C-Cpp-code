#include "CalNums.h"
#include "StrList.h"

int main()
{
	int nums[] = {3,5,8,13};
	str_link head;


	head = cal_nums_by_perm_comb(nums,4,24);
	print_str_link(head);//´òÓ¡Á´±í
	delete_str_link(head);
}

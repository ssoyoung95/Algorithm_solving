// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=193&sca=1090

#include <stdio.h>

int main(void)
{
	int idx;
	int integer[10];
	for (idx = 0; idx < 10; idx++) 
	{
		integer[idx] = idx+1;
	}
	for (idx = 0; idx < 10; idx++) 
	{
		printf("%d ", integer[idx]);
	}

	return 0;
}
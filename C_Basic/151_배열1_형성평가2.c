// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=51&sca=1090

#include <stdio.h>

int main(void)
{
	int idx;
	int number[5];
	int result;
	for (idx = 0; idx < 5; idx++)
	{
		scanf("%d ", &number[idx]);
	}
	result = number[0] + number[2] + number[4];
	
	printf("%d",result);
	return 0;
}
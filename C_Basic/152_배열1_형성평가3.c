// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=52&sca=1090

#include <stdio.h>

int main(void)
{
	int idx;
	int number[10];
	int sumOfOdd=0;
	int sumOfEven=0;

	for (idx = 0; idx < 10; idx++)
	{
		scanf("%d ", &number[idx]);
		
		if (idx%2==0)
		{
			sumOfOdd+=number[idx];
		}
		else
		{
			sumOfEven+=number[idx];
		}
	}

	printf("odd : %d\n",sumOfOdd);
	printf("even : %d",sumOfEven);	
	
	return 0;
}
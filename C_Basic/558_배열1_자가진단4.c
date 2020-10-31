// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=195&sca=1090

#include <stdio.h>

int main(void)
{
	int idx;
	int number[100];
	
	for (idx = 0; idx < 100; idx++)
	{
		scanf("%d ", &number[idx]);
		if(number[idx]==0)
		{
			break;
		}		
	}

	for (idx -= 1;idx >= 0; idx--)
	{
		printf("%d ",number[idx]);
	}


	return 0;
}
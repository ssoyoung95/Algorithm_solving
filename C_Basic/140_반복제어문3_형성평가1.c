#include <stdio.h>

//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=40&sca=1080

int main(void)

{
	int idx;
	int num;
	int sum = 0;

	for (idx = 0; idx < 20; idx++)
	{
		scanf("%d", &num);
		sum += num;
		if (num == 0)
			break;

	}


	printf("%d %d", sum , sum/idx);

	return 0;
}
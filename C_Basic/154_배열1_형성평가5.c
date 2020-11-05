//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=54&sca=1090
#include <stdio.h>

int main(void)
{
	double weight[6];
	int index;
	double sum = 0;
	for (index = 0; index < 6; index++)
	{
		scanf("%lf ", &weight[index]);
		sum += weight[index];
	}
	printf("%.1lf", sum / 6.0);
	return 0;
}
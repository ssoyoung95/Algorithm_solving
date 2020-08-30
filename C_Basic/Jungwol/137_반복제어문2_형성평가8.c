#include <stdio.h>

int main(void)
{
	int idx_2;
	int idx_1;
	int x,y;

	scanf("%d %d", &x,&y);
	for (idx_1 = 1; idx_1 <= x; idx_1++)
	{

		for (idx_2 = 1; idx_2 <= y; idx_2++)
		{
			printf("%d ",idx_1*idx_2 );//ÁÙ¹Ù²Þ

		}
		printf("\n");
	}
	return 0;
}


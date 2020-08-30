#include <stdio.h>

int main(void)
{
	int idx;
	int row,column;

	for (row = 2; row <= 6; row++)
	{

		for (column = row ; column <= row+4 ; column++)
		{
			printf("%d ",column);

		}
		printf("\n");
	}
	return 0;
}

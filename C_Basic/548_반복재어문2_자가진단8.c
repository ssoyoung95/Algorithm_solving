#include <stdio.h>

int main(void)
{
	int row, column;

	for (column = 2; column <= 4; column++)
	{

		for (row=1; row <= 5; row++)
		{
			printf("%d * %d = %2d   ", column,row,column*row);

		}
		printf("\n");
	}
	return 0;
}

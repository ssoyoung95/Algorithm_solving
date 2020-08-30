#include <stdio.h>

int main(void)
{
	int input;
	int idx;
	int x, y;

	scanf("%d", &input);
	for (x = 1; x <= input; x++)
	{

		for (y = 1; y <= input; y++)
		{
			printf("(%d, %d) ", x, y);

		}
		printf("\n");
	}
	return 0;
}

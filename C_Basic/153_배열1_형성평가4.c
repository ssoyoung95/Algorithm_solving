#include <stdio.h>

int main(void)
{
	int idx;
	int array[100];

	for (idx = 0; idx < 100; idx++)
	{
		scanf("%d ", &array[idx]);
		if (array[idx] == -1)
		{
			break;
		}
	}

	for (idx -= 1; idx >= 0; idx--)
	{
		printf("%d ", array[idx]);
	}


	return 0;
}
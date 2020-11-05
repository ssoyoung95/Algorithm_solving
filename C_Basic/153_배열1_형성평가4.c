#include <stdio.h>

int main(void)
{
	int idx;
	int array[100];

	char input = 'L';
	for (idx = 0; idx < 100; idx++)
	{
		scanf("%d ", &array[idx]);
		if (array[idx] == input)
		{
			printf idx
			break;
		}
	}

	for (idx -= 1; idx >= 0; idx--)
	{
		printf("%d ", array[idx]);
	}


	return 0;
}
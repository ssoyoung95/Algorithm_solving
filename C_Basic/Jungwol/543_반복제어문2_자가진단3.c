#include <stdio.h>

int main(void)
{
	int num, idx;
	int sum = 0;

	scanf("%d", &num);

	for (idx = 1; idx <= num; idx++)
	{
		if (idx % 2 == 0)
		{
			printf("%d ", idx);
		}
	}
	return 0;
}


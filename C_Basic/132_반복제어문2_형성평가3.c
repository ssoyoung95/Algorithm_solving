#include <stdio.h>

int main(void)
{
	int num, idx;
	int sum=0;

	scanf("%d", &num);

	for (idx = 0; idx <= num; idx++)
	{
		if (idx % 5 == 0)
		{
			sum += idx;
		}
	}
	printf("%d", sum);
	return 0;
}


#include <stdio.h>

int main(void)
{
	int  num;
	int  idx = 1;
	int  count = 0;
	int  sum = 0;

	scanf("%d", &num);

	for (; sum < num; idx+=2)
	{
		sum += idx;
		count++;
	}

	printf("%d %d", count, sum);
	return 0;
}

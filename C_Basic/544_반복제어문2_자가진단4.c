#include <stdio.h>

int main(void)
{
	int num = 0;
	int sum = 0;
	
	scanf("%d", &num);
	
	for (;num <= 100; num++)
	{
		sum += num;

	}
	printf("%d", sum);

	return 0;
}


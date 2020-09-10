#include <stdio.h>

void add (int num)
{
	int sum = 0;
	for (int idx=0; idx <= num; idx++)
	{
		sum += idx;
	}

	printf("%d\n", sum);
}

int main(int input)
{
	scanf("%d", &input);

	add(input);

	
	return 0;
}
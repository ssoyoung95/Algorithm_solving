#include <stdio.h>

int main(void)
{
	int integer[100];
	int index;
	int sum = 0;
	int num = 0;
	
	for (index = 0; index < 100; index++)
	{
		scanf("%d ", integer[index]);
		if (integer[index] == 0)
		{
			break;
		}
		if (integer[index] % 5 == 0)
		{
			num++;
			sum += integer[index];
		}
	}

	printf("Multiples of 5 : %d", num);
	printf("sum : %d", sum);
	printf("avg : %.1lf", (double)sum/(double)integer[index]);



}
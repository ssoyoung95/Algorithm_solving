#include <stdio.h>

int main(void)
{
	int num = 0;
	int mul3 = 0;
	int mul5 = 0;
	

	for (int idx=0; idx<10; idx++)
	{
		scanf("%d", &num);
		if (num % 3 == 0)
		{
			mul3++;
		}
		if (num % 5 == 0)//else if
		{
			mul5++;
		}
	}
	printf("Multiples of 3 : %d\n", mul3);
	printf("Multiples of 5 : %d\n", mul5);

	return 0;
}


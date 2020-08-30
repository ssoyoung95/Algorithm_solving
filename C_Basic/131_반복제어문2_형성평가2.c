#include <stdio.h>

int main(void)
{
	int num1,num2;

	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	for (int idx = num1; idx <= num2; idx++)
	{
		printf("%d ", idx);
	}
	return 0;
}


#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);

	if (num == 0)
	{
		printf("zero");
	}
	else if (num > 0)
	{
		printf("plus");
	}
	else if (num < 0)
	{
		printf("minus");
	}

	return 0;

}
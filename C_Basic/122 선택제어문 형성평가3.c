#include <stdio.h>

int main(void)
{
	int yy;
	scanf("%d", &yy);

	if (yy % 400 == 0)
	{
		printf("leap year");
	}
	else if (yy % 4 == 0 && yy % 100 !=0)
	{
		printf("leap year");
	}
	else 
	{
		printf("common year");
	}

	return 0;

}
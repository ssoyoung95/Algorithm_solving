#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d, %d", &a, &b);

	if (a < b)
	{
		printf("%d", b - a);
	}
	else if ( a > b)
	{
		printf("%d", a - b);
	}

	return 0;

}

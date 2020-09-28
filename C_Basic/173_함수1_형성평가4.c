#include <stdio.h>
int power (int a, int b)
{ 
	int tamp;
	int output;
	if (b < a)
	{
		tamp = a;
		a = b;
		b = tamp;
	}

	output = a * a - b * b;

	return output;
}


int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", power(x, y));
	
}
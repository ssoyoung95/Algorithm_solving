#include <stdio.h>

int main(void)

{
	int a = 50;
	double b = 100.12;

	double result = (double)a * b;
	printf("%.2f * %d = %d", b , a , (int)result);

	
	return 0;
}
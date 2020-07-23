#include <stdio.h>

int main(void)

{
	int a, b;
	int num1;
	float num2;

	scanf("%d %d", &a, &b);

	num1 = a / b;
	num2 = (float)a / (float)b; //왜 바꿔야 할까요

	printf("%d\n", num1);
	printf("%.2f", num2);

	return 0;
}
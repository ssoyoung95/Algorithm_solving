#include <stdio.h>

int main(void)

{
	int a, b, c, d;
	int result1;


	scanf("%d %d\n", &a, &b);
	scanf("%d %d", &c, &d);

	result1 = (a > c) && (b > d);

	printf("%d", result1);

	return 0;
}
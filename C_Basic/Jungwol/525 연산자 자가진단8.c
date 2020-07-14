#include <stdio.h>

int main(void)

{
	int a, b ,c;
	int result1, result2;


	scanf("%d %d %d", &a, &b, &c);

	result1 = (a > b) && (c < a);
	result2 = (a == b) && (c == b) && (c == a);

	printf("%d %d\n", result1, result2);

	return 0;
}
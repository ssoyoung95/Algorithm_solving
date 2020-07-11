#include <stdio.h>

int main(void)

{
	double a, b;
	char c;

	scanf("%d\n", &a);
	scanf("%d\n", &b);
	scanf("%c", &c);

	printf("%.2d\n", a);
	printf("%.2d\n", b);
	printf("%c", c );

	return 0;
}
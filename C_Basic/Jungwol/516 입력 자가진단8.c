#include <stdio.h>

int main(void)

{
	double a, b;
	char c;

	scanf("%lf\n", &a);
	scanf("%lf\n", &b);
	scanf("%c", &c);

	printf("%.2lf\n", a);
	printf("%.2lf\n", b);
	printf("%c", c );

	return 0;
}
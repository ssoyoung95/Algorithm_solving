#include <stdio.h>

int main(void)
{
	int a, b;//472,385

	scanf("%d %d",&a,&b);
	printf("%d\n", a * (b % 100 %10));
	printf("%d\n", a * (b %100/10));
	printf("%d\n", a* (b / 100));
	printf("%d\n", a*b);
	return 0;

}
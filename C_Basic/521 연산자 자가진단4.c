#include <stdio.h>

int main(void)

{
	int a,b;

	scanf("%d%d", &a,&b);
	printf("%d %d %d\n", (a++)+1,--b,(a-1)*b);

	return 0;
}
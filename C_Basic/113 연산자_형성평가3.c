#include <stdio.h>

int main(void)
{

	int width, length;
	scanf("%d%d", &width, &length);
	printf("width = %d\n", width + 5);
	printf("length = %d\n", length * 2);
	printf("area = %d\n", (width + 5) * (length * 2));

	return 0;

}
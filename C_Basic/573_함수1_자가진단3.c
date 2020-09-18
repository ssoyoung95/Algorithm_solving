#include <stdio.h>

int draw_squre(int n)
{
	int num = 1;
	for (int row = 1; row <= n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			printf("%d", num);
			num++;

		}
		printf("\n");
	}
	return 0;
}
int main(void)
{
	int n;
	scanf("%d", &n);

	draw_square(n);
	
	return 0;
}

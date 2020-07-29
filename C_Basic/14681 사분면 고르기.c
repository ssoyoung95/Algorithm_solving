#include <stdio.h>

int main(void)
{
	double x, y;
	scanf("%lf\n", &x);
	scanf("%lf", &y);

	if ((x != 0 && -1000 <= x && x <= 1000) && (y != 0 && -1000 <= y && y <= 1000))
	

		if ((0 < x && x <= 1000) && (0 < y && y <= 1000))
		{
			printf("1");
		}
		else if ((-1000 <= x && x < 0) && (0 < y && y <= 1000))
		{
			printf("2");
		}
		else if ((-1000 <= x && x < 0) && (-1000 <= y && y < 0))
		{
			printf("3");
		}
		else if ((x > 0 && x <= 1000) && (-1000 <= y && y < 0))
		{
			printf("4");
		}

	
	return 0;

}
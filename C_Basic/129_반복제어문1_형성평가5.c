#include <stdio.h>

int main(void)

{
	int base, height;
	char answer;

	do
	{
		printf("Base = ");
		scanf("%d", &base);
		printf("Height = ");
		scanf("%d", &height);
		double	triangle_width = ((double)base * (double)height) / 2;
		printf("Triangle width = %.1lf\n", triangle_width);
		printf("Continue? ");
		scanf("%c", &answer);

	} while (answer == 'Y' || answer == 'y');
	
	return 0;

}
#include <stdio.h>

int main(void)
{
	int  star;
	int  space;
	int  line;
	int  num;

	scanf("%d", &num);


	for (line = 0; line < num; line++)
	{
		for (space = 0; space <num-line; space++)
		{
			printf(" ");
		}
	}
	for (star = 0; star <line*2-1; star++)
	{
		{
			printf("*");
		}

		printf("\n");
	}
	return 0;
}

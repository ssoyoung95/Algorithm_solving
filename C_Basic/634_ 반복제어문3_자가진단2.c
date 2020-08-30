#include <stdio.h>

int main(void)
{
	int  star = 0;
	int  line = 0;
	int  num;

	scanf("%d", &num);

	for (; line < num; line++)
	{
		for (star = 0; star <= line; star++)
		{
			printf("*");
		}

		printf("\n");
	}
	return 0;
}

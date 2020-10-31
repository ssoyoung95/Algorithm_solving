#include <stdio.h>

int main(void)
{
	int  sharp;
	int  line;
	int  space;
	int  num;

	scanf("%d", &num);

	for (line = 0; line < num; line++)
	{
		for (sharp = 0; sharp <= line; sharp++)
		{
			printf("#");
		}

		printf("\n");
	}
	for (line = 0; line < num -1 ; line++)
	{
		for (space = 0; space < line + 1; space++)
		{
			printf(" ");
		}

		for (sharp = 0; sharp < num -line -1 ; sharp++)
		{
			printf("#");
		}

		printf("\n");
	}
	return 0;
}

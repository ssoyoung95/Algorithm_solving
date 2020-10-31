
#include <stdio.h>

int main(void)
{
	int idx;
	char alph[10];
	for (idx = 0; idx < 10; idx++)
	{
		scanf(" %c", &alph[idx]);
	}
	for (idx = 9; 0 <= idx; idx--)
	{
		printf("%c ", alph[idx]);
	}

	return 0;
}
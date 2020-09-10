#include <stdio.h>

void print_string(int num)
{
	for (int idx = 0; idx < num; idx++)
	{
		printf("~!@#$^&*()_+|\n");
	}
}

int main (void)
{ 
	int input;
	int idx;
	scanf("%d", &input);

	print_string(input);
	return 0;
}
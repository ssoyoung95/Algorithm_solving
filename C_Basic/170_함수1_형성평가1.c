#include <stdio.h>

void print_string()
{
	{
		printf("@@@@@@@@@@\n");
	}
}

int main(void)
{
	printf("first\n");
	print_string();
	printf("second\n");
	print_string();
	printf("third\n");
	print_string();

	return 0;
}
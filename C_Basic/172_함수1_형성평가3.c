#include <stdio.h>
void function(int num)
{
	int a, b;

	for (a = 1; a <= num; a++)
	{
		for (b = 1; b <= num; b++)
		{
			printf("%d ", a * b);
		}
		printf("\n");
	}
	return ;
}
int main(int input)
{
	scanf("%d", &input);
	function(input);

	return 0;
}
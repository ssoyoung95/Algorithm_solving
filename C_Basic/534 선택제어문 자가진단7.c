#include <stdio.h>

int main(void)

{
	char grade, A, B, C, D, F;
	scanf("%c", &grade);

	if (grade == 'A')
	{
		printf("Excellent");
	}
	else if (grade == 'B')
	{
		printf("Good");
	}
	else if (grade == 'C')
	{
		printf("Usually");
	}
	else if (grade == 'D')
	{
		printf("Effort");
	}
	else if (grade == 'F')
	{
		printf("Failure");
	}
	else
	{
		printf("error");
	}

	return 0;

}
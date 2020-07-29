#include <stdio.h>

int main(void)

{
	int age;
	scanf("%d", &age);
	int age_gap = 20 - age;

	if (age > 20)
	{
		printf("adult");
	}

	else
	{
		printf("%d years later", age_gap);
	}



	return 0;

}
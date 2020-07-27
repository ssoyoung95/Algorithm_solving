#include <stdio.h>

int main(void)

{
	char sex, F, M;
	int age;
	scanf("%c, %d", &sex, &age);

	if (sex == 'M' && age > 18)
	{
		printf("MAN");
	}
	else if (sex == 'M' && age < 18)
	{
		printf("BOY");
	}
	else if (sex == 'F' && age > 18)
	{
		printf("WOMEN");
	}
	else if (sex == 'F' && age < 18)
	{
		printf("GIRL");
	}

	//ACCEPTED 60%
	return 0;

}

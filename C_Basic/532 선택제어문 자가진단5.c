#include <stdio.h>

int main(void)

{
	double subject_a, subject_b;
	scanf("%lf, %lf", &subject_a, &subject_b);

	if (subject_a >= 4.0 && subject_b >= 4.0)
	{	
		printf("A");
	}
	else if (subject_a >= 3.0 && subject_b >= 3.0)
	{
		printf("B");
	}
	else
	{
		printf("C");
	}



	return 0;
	//accepted 40

}
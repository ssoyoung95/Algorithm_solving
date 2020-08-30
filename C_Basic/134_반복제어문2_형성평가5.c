#include <stdio.h>

int main(void)
{
	int idx, input;
	int sum = 0;
	int odd = 0, even = 0;
	double avg = 0;


	for (idx = 0; idx < 10; idx++)
	{
		scanf("%d", &input);
		if (input % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("even : %d\n", even);
	printf("odd : %d", odd);
	return 0;
}
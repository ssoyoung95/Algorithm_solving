#include <stdio.h>

int main(void)
{
	int idx, input1, input2;
	int sum = 0;
	double count = 0;
	double avg;

	scanf("%d %d", &input1, &input2);

	if (input1 > input2)
	{
		int temp = input1;
		input1 = input2;
		input2 = temp;
	}

	for (int idx = input1; idx <= input2; idx++)
	{
		if (idx % 3 == 0 || idx % 5 == 0)
		{
			sum += idx;
			count++;
		}
	}

	printf("sum : %d\n", sum);
	printf("avg : %.1lf", (double)sum /count);
	return 0;
}
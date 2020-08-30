#include <stdio.h>

int main(void)
{
	int idx,input;
	int num = 0;
	int sum = 0;
	double avg = 0;

	scanf("%d\n", &num);

	for (idx = 0; idx < num; idx++)
	{
		scanf("%d", &input);
		sum += input;

	}
	avg = (double)sum / (double)num;
	printf("%.2lf", avg);
	return 0;
}
#include <stdio.h>

int main(void)
{
	int score;
	int num_subject;
	int sum = 0;
	double avg = 0;

	scanf("%d", &num_subject);

	for (int idx = 0; idx < num_subject; idx++)
	{	
		scanf("%d", &score);
		sum += score;
	}
	avg = (double)sum / (double)num_subject;
	printf("avg : %.1lf\n", avg);

	if (avg >= 80)
	{
		printf("pass\n");
	}
	else
	{
		printf("fail\n");
	}

	return 0;
}


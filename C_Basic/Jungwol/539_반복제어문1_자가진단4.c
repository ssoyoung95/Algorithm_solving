#include <stdio.h>

int main(void)
{
	int num;
	int sum = 0;
	int idx = 0;
	double avg = sum / 11.0; 

	do
	{
		scanf("%d", &num);
		if (num > 0)
		{
			idx++;
			sum += num;
		}
		if (num >= 100)
		{
			avg = (double)(sum) / (double)(idx);
			printf("%d\n", sum);
			printf("%.1lf\n", avg);
		}
	}while(num < 100);

	return 0;
}

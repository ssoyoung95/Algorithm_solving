#include <stdio.h>

int main()
{
	int num;
	int sum = 0;
	double avg = sum/11; //나누는 수를 지정?
	while (1)
	{
		scanf("%d", &num);

		if (num > 0)
		{
			sum += num;
		}
		else if (num == 100)
		{
			printf("%d\n", sum);
			printf("%lf\n", avg);
			break;
		}
	}

	return 0;
}

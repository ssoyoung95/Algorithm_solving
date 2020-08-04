
#include <stdio.h>

int main()
{
    int num;
    int odd =0, even = 0;
    scanf("%d", &num);
	while (1)
	{
		scanf("%d", &num);

		if (num > 0 && num%2 == 0)
		{
			odd++;
			printf("odd : %d \n", odd);
		}
		else if (num > 0 && num%2 !=0)
		{
			even++;
			printf("even :%d \n", even); 
		}
		else break;
	}

	return 0;
}

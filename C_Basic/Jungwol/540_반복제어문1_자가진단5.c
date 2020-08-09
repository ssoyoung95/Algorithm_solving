
#include <stdio.h>

int main()
{
	int num = 0;

	do
	{
		scanf("%d", &num);

		if (num % 3 == 0)
		{
			printf("%d\n", num / 3);
		}
	}while(num != -1);

	return 0;
}


#include <stdio.h>

int main()
{
		int num = 0;

		do {
				printf("number? ");
				scanf("%d", &num);

				if (num > 0)
				{
						printf("positive integer\n");
				}
				else if (num < 0)
				{
						printf("negative number\n");
				}
		} while (num != 0);

		return 0;
}

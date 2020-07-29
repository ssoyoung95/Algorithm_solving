#include <stdio.h>

int main(void)
{
	int yy;
	scanf("%d", &yy);

	if (1 <= yy && yy <= 4000 && yy % 4 == 0 && yy % 100!=0 || yy % 400 ==0)
	{
		printf("1");
	}
	else if (1 <= yy && yy <= 4000 && yy % 100==0 || yy % 400 != 0)
	{
		printf("0");
	}
	
	return 0;

}
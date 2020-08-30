#include <stdio.h>

int main(void)
{
	int  star;
	int  line;
	int  num;

	scanf("%d", &num);

	
	for (line = 0; line < num; line++)
	{
		for (star = 0; star <= line; star++)
		{
			printf("*");
		}

		printf("\n");
	}
	for (line = 0; line < num; line++)
	{
		for (star = num; star > line; star--)//여기인강?ㅠ
		{
			printf("*");
		}

		printf("\n");
	}
	return 0;
}//겹쳐지는 부분

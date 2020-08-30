#include <stdio.h>

int main(void)//뭔지 모르겠어요ㅜㅜ

{
	int idx;
	int row, column;

	scanf("%d %d", &row, &column);

	for (; row < column; row--)
	{

		for (; column <= row + 4; column++)
		{
			printf("%d ", column);

		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>

int main(void)//���� �𸣰ھ��̤�

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

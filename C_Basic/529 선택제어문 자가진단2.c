#include <stdio.h>

int main(void)

{
	int weight, height; //�ڿ��� �Է� ���......?
	scanf("%d %d", &height, &weight);
	int obesity_level = weight + 100 - height;

	if (obesity_level > 0)
	{
		printf("%d\n", obesity_level);
		printf("Obesity");
	}
	
	
//
	return 0;
	=
}

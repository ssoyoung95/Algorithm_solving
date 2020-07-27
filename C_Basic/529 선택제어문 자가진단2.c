#include <stdio.h>

int main(void)

{
	int weight, height; //자연수 입력 방법......?
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

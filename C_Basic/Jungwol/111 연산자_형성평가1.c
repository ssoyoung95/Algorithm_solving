#include <stdio.h>

int main(void)

{
	int kor=0, eng=0, mat=0, com=0;
	scanf("%d %d %d %d", &kor, &eng, &mat, &com);
	int sum = kor + eng + mat + com;
	printf("sum %d\n", sum);
	printf("avg %d", sum / 4);

	return 0;

}
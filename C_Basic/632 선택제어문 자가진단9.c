#include <stdio.h>

int main(void)
// else if�� �϶�� �ϼż� Ǯ���µ� �ȳ��Ϳ�ФФ�
{
	int a, b, c;
	scanf("%d, %d, %d", &a, &b,&c);

	if (a < b && a < c)
	{
		printf("%d",a);
	}
	else if (b < a && b < c)
	{
		printf("%d",b);
	}
	else if (c < a && c < b)
	{
		printf("%d",c);
	}

	return 0;

}

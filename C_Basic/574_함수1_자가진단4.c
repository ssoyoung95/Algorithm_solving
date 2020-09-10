#include <stdio.h>
int maximum (int a, int b, int c)
{
	int maximum = 0;
	if (a > b && a > c )
	{
		maximum = a;
	}
	else if (b > a && b > c)
	{
		maximum = b;
	}
	else 
	{
		maximum = c;
	}
	return maximum;
}

int main(int x, int y, int z)
{
	scanf("%d %d %d", &x, &y, &z);
	printf("%d\n" ,maximum(x,y,z));
	return 0;
} 
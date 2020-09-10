#include <stdio.h>
 void maximum (int a, int b)
 {

	if (a > b)
	{
		a = a / 2 ;
		b = b * 2  ;
		
	}
	else
	{
		b = b / 2 ;
		a = a * 2 ;
	}
}  

int main (int x, int y)
{
	scanf("%d %d", &x, &y);
	maximum(x, y);
	printf("%d %d", x, y);

	return 0;
}
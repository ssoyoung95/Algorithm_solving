#include <stdio.h>
int power (int a, int b)
{
	int sum = 1;//
	
	for (int idx = 0; idx < b; idx++)
		
		sum *= a;
	return sum; //¸®ÅÏÀÇ °³³ä
}

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", power( x, y) );

	return 0;
}
#include <stdio.h>

int main(void)
{

	/*char name[9];
	scanf(" %c", &name[0]);
	scanf(" %c", &name[1]);
	scanf(" %c", &name[2]);
	scanf(" %c", &name[3]);
	scanf(" %c", &name[4]);
	scanf(" %c", &name[5]);
	scanf(" %c", &name[6]);
	scanf(" %c", &name[7]);
	scanf(" %c", &name[8]);
	scanf(" %c", &name[9]);

	printf("%c",name[9]);
	*/

	int idx;
	char name[10];
	for (idx = 0; idx < 10; idx++)
	{
		scanf(" %c", &name[idx]);
		printf("%c", name[idx]);
	}
	
	return 0;
}


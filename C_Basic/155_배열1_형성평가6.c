//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=55&sca=1090

#include <stdio.h>

int main(void)
{
	int idx;
	int is_find=0;
	char input;
	char name[10] = "JUNGOL";
	scanf("%c",&input);

	for(idx=0;idx<6;idx++)
	{
		if(input==name[idx])
		{
			printf("%d\n",idx);
			// return 0;
		}
	}

	printf("none\n");

	return 0;
}
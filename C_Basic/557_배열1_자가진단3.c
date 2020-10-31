// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=194&sca=1090

#include <stdio.h>

int main(void)
{
	int idx;
	char name[10];
	
	for (idx = 0; idx < 10; idx++)
	{
		scanf(" %c", &name[idx]);
	}

	printf("%c %c %c", name[0], name[3], name[6]);

	return 0;
}
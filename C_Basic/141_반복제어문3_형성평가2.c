#include <stdio.h>
//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=41&sca=1080

int main(void)

{
	int idx;
	int a;
	int b = 0;

	scanf("%d", &a);

	for (idx = 1; idx < 100; idx++)
	{
		b = a*idx ;
		if (100 <b)
			break;	//accepted 20 떠서 추가했는데 뭔가 난잡해요..
		printf("%d ", b);
		if (b % 10 == 0)
			break; 

	}



	return 0;
}
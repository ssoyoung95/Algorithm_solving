// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=196&sca=1090

#include <stdio.h>

int main(void)
{
	double score[6] = {85.6,79.5,83.1,80.0,78.2,75.0};
	int class1, class2;
	double sum;

	int a ;
	int b =2;

	a = b-1;
	scanf("%d %d",&class1,&class2); 
	/*
	class1--;
	class2--;
	*/
	sum=score[class1-1]+score[class2-1];
	printf("%.1lf",sum);
	return 0;
}
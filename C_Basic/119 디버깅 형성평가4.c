#include <stdio.h>

int main(void)

{	
	int a = 0;
	time_t now;
	struct tm tt; 
	//index���� ã�ƺôµ� struct�� ����ü��� ���ͼ� �о�ôµ� �����ϰ� �; ���� �������� �𸣰�����
	time(&now);
	tt = *localtime(&now);
	a = tt.t, _year;
	a += tt.tm_mon;
	a += tt.tm_monday;
	printf("%d %d %d\n", 1, 2, 3);

	return 0;



}
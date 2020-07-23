#include <stdio.h>

int main(void)

{	
	int a = 0;
	time_t now;
	struct tm tt; 
	//index에서 찾아봤는데 struct가 구조체라고 나와서 읽어봤는데 이해하고 싶어도 무슨 내용인지 모르갰어요ㅜ
	time(&now);
	tt = *localtime(&now);
	a = tt.t, _year;
	a += tt.tm_mon;
	a += tt.tm_monday;
	printf("%d %d %d\n", 1, 2, 3);

	return 0;



}
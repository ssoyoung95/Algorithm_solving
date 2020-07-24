/*다음의 프로그램을 작성하고 디버깅을 하며 ①, ②, ③ 위치의 값을 watches에서 a의 값을 출력하시오.

즉, ​①에서 a의 값,  ②에서 a의 값, ③에서 a의 값을 1,2,3과 바꾸어 출력하면 됩니다.

 int main(void)

{	
	int a = 0;
	time_t now;
	struct tm tt; 
	time(&now);
	tt = *localtime(&now);------①
	a = tt.t, _year;-------②
	a += tt.tm_mon;
	a += tt.tm_monday;
	printf("%d %d %d\n", 1, 2, 3);-------③ 
	//위 문장에서 출력될 값들을 각각① ② ③ 위치에서의 a의 값으로 바꾸어 준다.
	return 0;



}

(PC의 시간이 맞는지 확인하세요. 시간이 다르면 결과가 틀릴 수 있습니다.)
*/
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
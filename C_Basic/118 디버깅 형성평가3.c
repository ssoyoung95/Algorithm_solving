/*아래의 프로그램을 작성하여 디버깅을 
디버깅 창에서 ① 위치에서의 a의 값이 얼마인지 구하여 
그 값을 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main(void)

{
	int a = 5;
	a += 10;
	a = a - 1;------------①
	printf("%d\n", 1); // 여기에서 출력될 1을 ①위치에서의 a값으로 바꾸어준다.
	return 0;
}

출력형식
①에서의 a값만 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>

int main(void)

{
	int a = 5;
	a += 10;
	a = a - 1;
	printf("%d\n", a+1);
	 
	return 0;
}
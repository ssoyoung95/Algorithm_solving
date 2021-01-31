// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=256&sca=10h0

#include <stdio.h>
int main(void)
{
   int num; // 정수형 변수
   int* p;// 포인터 변수 선언
   p = &num; // 정수형 변수의 주소값을 포인터 변수에 저장

   scanf("%d", &num);

   printf("%#p %d\n", p, *p); //메모리 주소?/값

   return 0;
}
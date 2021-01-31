// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=257&sca=10h0

#include <stdio.h>
int main(void)
{
   int num; // 정수형 변수
   int *p = &num; // 정수형 변수의 주소값을 포인터 변수에 저장

   scanf("%d", p);//*p?

   printf("%d...%d\n", (*p) / 10, (*p) % 10); //값

   return 0;
}
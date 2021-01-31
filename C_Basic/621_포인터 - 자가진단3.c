// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=258&sca=10h0

#include <stdio.h>
int main(void)
{
   int a, b; // 정수형 변수
   int* p1 = &a; // 정수형 변수의 주소값을 포인터 변수에 저장

   int* p2;
   p2 = &b;  // 정수형 변수의 주소값을 포인터 변수에 저장

   scanf("%d %d", p1, p2); //*p?    35 6

   printf("%d + %d = %d\n", *p1, *p2, *p1 + *p2); 
   printf("%d - %d = %d\n", *p1, *p2, *p1 - *p2); 
   printf("%d * %d = %d\n", a, b, a * b); 
   printf("%d / %d = %d\n", a, b, a / b); 

   return 0;
}
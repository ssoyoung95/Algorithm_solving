// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=260&sca=10h0

#include <stdio.h>
int main(void)
{
   double array[5]; // 5개짜리 정수형 배열 선언
   double *pArray;
   pArray = array;


   for(int i = 0; i < 5; i++)
   {
      scanf("%lf", pArray + i);
   }

   for(int i = 0; i < 5; i++)
   {
      printf("%.1lf ", *(pArray + i));
   }

   return 0;
}  
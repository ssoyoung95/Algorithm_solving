// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=198&sca=1090

#include <stdio.h>

int main(void)
{
   int array[10];

   for (int idx = 0; idx < 10; idx++)
   {
      scanf("%d", &array[idx]);
   }

   // 1~100 중 가장 큰 값을 저장할 변수
   int result_max = 0;
   for (int idx = 0; idx < 10; idx++)
   {
      if(result_max < array[idx] && array[idx] < 100)
         result_max = array[idx];
   }
   printf("%d ", result_max);

   // 100~10,000 중 가장 작은 값을 저장할 변수
   int result_min = 10001;
      for (int idx = 0; idx < 10; idx++)
   {
      if(result_min > array[idx] && array[idx] >= 100)
         result_min = array[idx];
   }

   if (result_max == 0)
      result_max = 100;

   if (result_min == 10001)
      result_min = 100;
 
   printf("%d\n", result_min);

   return 0;
}
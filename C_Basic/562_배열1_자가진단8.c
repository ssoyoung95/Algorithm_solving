// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=199&sca=1090

#include <stdio.h>

int main(void)
{
   int array[10];
   int sum = 0;
   double avg = 0;

   for (int idx = 0; idx < 10; idx++)
   {
      scanf("%d", &array[idx]);
   }

   // 짝수 번째의 sum 구하기 
   for (int idx = 1; idx < 10; idx+=2)
   {
      sum += array[idx];
   }

   // 홀수 번째의 avg 구하기 
   for (int idx = 0; idx < 10; idx+=2)
   {
      avg += (double)array[idx];
   }
   avg /= 5.0;

   printf("sum : %d\navg : %.1f\n", sum, avg);

   return 0;
}

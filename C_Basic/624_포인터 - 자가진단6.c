// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=261&sca=10h0

#include <stdio.h>
int main(void)
{
   double array[4];

   for(int i = 0; i < 4; i++)
   {
      scanf("%lf", array + i);
      // scanf("%lf", &array[i]);
   }

   for(int i = 0; i < 4; i++)
   {
      printf("%.1lf ", *(array + i));
      // printf("%.1lf ", array[i]);
   }

   double sum, avg;
   for(int i = 0; i < 4; i++)
   {
      sum += *(array + i);
      // sum += array[i];
   }

   avg = sum / 4.0;

   printf("\nhap : %.2lf\n", sum);
   printf("avg : %.2lf\n", avg);

   return 0;
}  
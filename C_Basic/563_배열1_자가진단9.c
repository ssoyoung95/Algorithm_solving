// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=200&sca=1090

#include <stdio.h>

int main(void)
{
   int array[10];

   for (int idx = 0; idx < 10; idx++)
   {
      scanf("%d", &array[idx]);
   }

   int max = 0, curr_idx = 0;
   for (int begin = 0; begin < 10; begin++)
   {
      max = 0;
      for (int idx = begin; idx < 10; idx++)
      {
         if(max < array[idx])
         {
            max = array[idx];
            curr_idx = idx;
         }
      }
      int tmp = array[begin];
      array[begin] = array[curr_idx];
      array[curr_idx] = tmp;
   }

   for (int idx = 0; idx < 10; idx++)
   {
      printf("%d ", array[idx]);
   }

   return 0;
}

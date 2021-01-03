// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=197&sca=1090

#include <stdio.h>

int main(void)
{
   int array[10];

   //minimum? 1000을 넘지 않는다
   int result = 1001;
   for (int idx = 0; idx < 10; idx++)
   {
      scanf("%d", &array[idx]);

      if( result > array[idx])
		{
			result = array[idx];
		}
   }

   printf("%d\n", result);

   return 0;
}
// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=101&sca=10h0

#include<stdio.h>

int main(void)
{
   int a;
   int* p = &a;
   
   scanf("%d", p);

   for (int idx = 0; idx < *p; idx++)
      printf("*");

   return 0;
}

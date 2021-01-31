// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=100&sca=10h0

#include <stdio.h>
int main(void)
{
   char a;
   int b;

   char* pch = &a;
   int* pint = &b;


   printf("%#p %#p", pch, pint);

   return 0;

}

// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=197&sca=1090

#include <stdio.h>

int main(void)
{
   int array[10];

   //minimum? 1000을 넘지 않는다
   int maximum = 1001;

   for (int idx = 0; idx < 10; idx++)
   {
      scanf("%d", &array[idx]);
    //   if (maximum>array[idx])
    //   //가장 작은수
   }

   int result = 1001;

    // 1. 배열을 탐색 (왼쪽에서 오른쪽으로)
	for (int idx = 0; idx < 10; idx++)
	{
		// 2. 현재까지 탐색한 범위 내에서 가장 작은 수를 기록
		if( result > array[idx])
		{
			result = array[idx];
		}
	}
   printf("%d\n", result);

   return 0;
}
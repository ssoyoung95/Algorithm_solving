// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2078&sca=1080

#include <stdio.h>

int main() {
  int target;
  scanf("%d", &target);
  for (int line = 0; line <= target; line++) {
    for (int star = 0; star <= line; star++) {
      printf("*");
    }
    printf("\n");
  }
}

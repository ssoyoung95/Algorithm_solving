#include <stdio.h>

int main(void)

{
	int score_1,score_2,score_3;
	//int total_score = score_1+ score_2+score_3; 여기다 형변환 시키면 안되나요?ㅜ
	float avg;

	scanf("%d %d %d", &score_1, &score_2, &score_3);
	avg = ((float) (score_1 + score_2 + score_3) / 3);
	/*avg = (float) ((score_1 + score_2 + score_3) / 3);
	avg = (float) score_1 + (float)score_2 + (flaot) score_3 / 3);
	의 차이는 뭘까요*/
	printf("%.1f", avg);

	return 0;
}
'
#include <stdio.h>

int main(void)

{
	float score_a, score_b, score_c;
	int total_score;
	int avg;

	scanf("%f %f %f", &score_a, &score_b, &score_c);

	total_score = (int)score_a + (int)score_b + (int)score_c;
	avg = (score_a + score_b + score_c) / 3;
	//avg = (int)((score_a + score_b + score_c) / 3); c(13,14) 둘중에 하나 넣고 출력해두 둘다 답은 나오는데ㅠㅠㅠㅠ 왜 틀리는거죠ㅠㅠㅠㅠㅍ 
	/*형변한 하기위해서 가로를 치면 그 형변환 가로가 어느부분까지 
	영향을 받는지 범위는 어떻게 지정해야하는지 모르겠어요ㅠ*/
	printf("%d\n", total_score);
	printf("%d", avg);

	return 0;
}
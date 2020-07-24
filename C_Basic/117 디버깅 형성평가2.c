/*실수로 된 3과목의 점수를 입력받아 총점은 
정수부분의 합계를 출력하고 평균은 실수의 평균을 구한 뒤 
정수부분만 출력하는 프로그램을 작성하시오.

입력 예
70.5 95.5 68.5

출력 예
sum 233
avg 78
*/
#include <stdio.h>

int main(void)

{
	float score_a, score_b, score_c;
	int total_score;
	float avg;

	scanf("%f %f %f", &score_a, &score_b, &score_c);

	total_score = (int)score_a + (int)score_b + (int)score_c;
	avg = (score_a + score_b + score_c) / 3.;

	//avg = (int)((score_a + score_b + score_c) / 3); c(13,14) 둘중에 하나 넣고 출력해두 둘다 답은 나오는데ㅠㅠㅠㅠ 왜 틀리는거죠ㅠㅠㅠㅠㅍ 
	/*형변환하기위해서 가로를 치면 그 형변환 가로가 어느부분까지 
	영향을 받는지 범위는 어떻게 지정해야하는지 모르겠어요ㅠ*/
	printf("%d\n", total_score);
	printf("%.0f", avg);

	return 0;
}
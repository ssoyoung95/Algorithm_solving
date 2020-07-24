/*정수로 된 3과목의 점수를 입력받아 평균을 구한 후 반올림하여 
소수 첫째자리까지 출력하는 프로그램을 작성하시오.


입력 예
70 95 65

출력 예
76.7
*/
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
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
	//avg = (int)((score_a + score_b + score_c) / 3); c(13,14) ���߿� �ϳ� �ְ� ����ص� �Ѵ� ���� �����µ��ФФФ� �� Ʋ���°��ҤФФФФ� 
	/*������ �ϱ����ؼ� ���θ� ġ�� �� ����ȯ ���ΰ� ����κб��� 
	������ �޴��� ������ ��� �����ؾ��ϴ��� �𸣰ھ���*/
	printf("%d\n", total_score);
	printf("%d", avg);

	return 0;
}
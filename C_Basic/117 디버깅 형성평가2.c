/*�Ǽ��� �� 3������ ������ �Է¹޾� ������ 
�����κ��� �հ踦 ����ϰ� ����� �Ǽ��� ����� ���� �� 
�����κи� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��
70.5 95.5 68.5

��� ��
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

	//avg = (int)((score_a + score_b + score_c) / 3); c(13,14) ���߿� �ϳ� �ְ� ����ص� �Ѵ� ���� �����µ��ФФФ� �� Ʋ���°��ҤФФФФ� 
	/*����ȯ�ϱ����ؼ� ���θ� ġ�� �� ����ȯ ���ΰ� ����κб��� 
	������ �޴��� ������ ��� �����ؾ��ϴ��� �𸣰ھ���*/
	printf("%d\n", total_score);
	printf("%.0f", avg);

	return 0;
}
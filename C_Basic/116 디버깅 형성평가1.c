/*������ �� 3������ ������ �Է¹޾� ����� ���� �� �ݿø��Ͽ� 
�Ҽ� ù°�ڸ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.


�Է� ��
70 95 65

��� ��
76.7
*/
#include <stdio.h>

int main(void)

{
	int score_1,score_2,score_3;
	//int total_score = score_1+ score_2+score_3; ����� ����ȯ ��Ű�� �ȵǳ���?��
	float avg;

	scanf("%d %d %d", &score_1, &score_2, &score_3);
	avg = ((float) (score_1 + score_2 + score_3) / 3);
	/*avg = (float) ((score_1 + score_2 + score_3) / 3);
	avg = (float) score_1 + (float)score_2 + (flaot) score_3 / 3);
	�� ���̴� �����*/
	printf("%.1f", avg);

	return 0;
}
/*���� �Ǽ�(double)�� �Է� �޾Ƽ� �� ���� ���� 
������ ��ȯ�� ������� �� ���� ���� ������ ��ȯ�Ͽ�
���� ���� ������� ����ϴ� ���α׷��� �ۼ��ϰ�
���α׷� ���뿡 ���� ������ �ּ����� ǥ���Ͻÿ�.


�Է� ��
3.4 5.65

��� ��
19 15
*/
#include <stdio.h>

int main(void)

{
	double a , b;
	int mul1;
	int mul2;

	scanf("%lf %lf", &a, &b);

	mul2 = (a * b);
	mul1 = (int)a * (int)b;
	
	printf("%d\n", mul2);
	printf ("%d", mul1);

	return 0;
}
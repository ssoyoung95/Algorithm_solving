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
	int num1;
	int num2;

	scanf("%lf %lf", &a, &b);

	num2 = (a * b);
	num1 = (int)a * (int)b;
	
	printf("%d\n", num2);
	printf ("%d", num1);

	return 0;
}
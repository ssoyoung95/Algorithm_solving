/* 2016���� ��¥�� �� ���� ���� �� �Ϸ� �Է¹޾Ƽ� �Էµ� ��¥�� �����ϸ� 
"OK!" �׷��� ������ "BAD!"��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

/**
�Է� ��
2 30
��� ��
BAD!
*/

#include <stdio.h>

void date(int month, int day)
{

    if (month < 1 || day > 31 || day == 0)
    {
        printf("BAD!");
    }
    else if (month == 2 && 28 < day)
    {
        printf("BAD!");
    }
    else if ((month==4 || month ==6 || month == 9 || month == 11) && (30 < day))
    {
        printf("BAD!");
    }
    else
    {
        printf("OK!");
    }
}
int main(void)
{
    int m;
    int d;
    scanf("%d %d", &m, &d);

    date(m, d);
    return 0;
}

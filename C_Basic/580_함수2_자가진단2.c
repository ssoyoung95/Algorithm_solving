/* 2016년의 날짜를 두 개의 정수 월 일로 입력받아서 입력된 날짜가 존재하면 
"OK!" 그렇지 않으면 "BAD!"라고 출력하는 프로그램을 작성하시오.
*/

/**
입력 예
2 30
출력 예
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


#include <stdio.h>

int function (int a, int b, char sign)
{
    if (sign == '+')
        printf("%d + %d = %d", a, b, a + b);
    else if (sign == '-')
        printf("%d - %d = %d", a, b, a - b);
    else if (sign == '*')
        printf("%d * %d = %d", a, b, a * b);
    else if (sign == '/')
        printf("%d / %d = %d", a, b, a / b);
    else
        printf("%d %c %d = %d", a, sign, b, 0);
}

int main(void)
{
    int a, b;
    char sign;
    scanf("%d %c %d", &a, &sign, &b);
    function(a, b, sign);

    return 0;
}

#include <stdio.h>

int main()
{
    int num;
    int i = 1, sum = 0;
    scanf("%d", &num);
    while (i <= num)
    {
        sum += i;
        i++;
    }
    printf("%d", sum);
}
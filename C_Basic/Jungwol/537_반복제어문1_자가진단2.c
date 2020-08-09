
#include <stdio.h>

int main()
{
    int num;
    int idx = 1, sum = 0;
    scanf("%d", &num);
    while (idx <= num)
    {
        sum += idx;
        idx++;
    }
    printf("%d", sum);
}
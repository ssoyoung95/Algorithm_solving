#include <stdio.h>

int main()
{
    int target;
    scanf("%d", &target);
    for (int line = 0; line <= target; line++)
    {
        for (int star = 0; star <= line; star++)
        {
            printf("*");
        }
        printf("\n");
    }
}

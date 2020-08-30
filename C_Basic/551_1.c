#include <stdio.h>

int main(void)
{
    int  star;
    int  line;
    int  space;
    int  num;

    scanf("%d", &num);

    for (line = 0; line < num; line++)
    {
        for (space = 0; space < line; space++)
        {
            printf(" ");
        }
        for (star = num; star > 0; star--)

        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
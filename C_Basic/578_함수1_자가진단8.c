#include <stdio.h>

int main(void)
{
    int a;
    int b;
    scanf("%d %d", &a, &b);

    gugudan(a, b);
    return 0;
}

 /*void gugudan(int a, int b)
{
    for (a =3; 3 <= 5; a++) {
        printf("== %ddan ==\n", a);
        for (b = 1; b <= 9; b++) {
            printf("%d * %d = %d\n", a, b, a * b);
        }
        printf("\n");
    }
}*/


#include <stdio.h>

int absolute_value_1(int a, int b)
{
    if (abs(a) > abs(b))
    {
        printf("%d\n",a);
    }
    else
    {
        printf("%d\n", b);
    }
}
double absolute_value_2(double c, double d)
{
    if (fabs(c) > fabs(d))
    {
        printf("%2lf\n", c);
    }
    else
    {
        printf("%2lf\n", d);
    }
}


int main(void)
{
    int a, b;
    double c , d;

    scanf("%d %d", &a, &b);
    scanf("%lf %lf", &c, &d);

   ??????

    return 0;
}

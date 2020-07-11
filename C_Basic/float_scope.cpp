#include <stdio.h>
#include <math.h>

typedef union
{
    float origin;
    struct
    {
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
    } d;
} data;
void print(data v)
{
    printf("%u ", v.d.sign);
    for (int i = 7; i >= 0; --i)
    {
        printf("%u", (v.d.exponent & (1 << i)) != 0);
    }
    printf(" ");
    for (int i = 22; i >= 0; --i)
    {
        printf("%u", (v.d.mantissa & (1 << i)) != 0);
    }
    printf("\n");
    printf("sign: %u, exponent: 2^%d, mantissa: ", v.d.sign, v.d.exponent - 127);
    float mant_result = 1.f;
    for (int i = 22; i >= 0; --i)
    {
        if (v.d.mantissa & (1 << i))
            mant_result += pow(2, -(23 - i));
    }
    printf("%f => %f\n", mant_result, mant_result * pow(2, v.d.exponent - 127));
}
int main(void)
{
    data t;
    //scanf("%f", &t.origin);
    t.origin = 1E5;
    print(t);
    t.origin = 0.1f;
    print(t);
    t.origin = 1E5 + 0.1f;
    print(t);

    return 0;
}
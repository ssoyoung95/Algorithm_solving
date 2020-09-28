
#include <stdio.h>

float radius_function (int circle_area)
{
    float radius;
    radius = sqrt(circle_area / 3.14);
    printf("%2f", radius);

}


int main(void)
{
    int area;
    scanf("%d", &area);
    radius(radius_function);
    
    return 0;
}

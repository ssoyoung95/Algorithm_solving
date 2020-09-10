#include <stdio.h>
int circle_area(double radius)
{
	double result;
	scanf("%lf", &radius);

	result = radius * radius * 3.14;
	return 0;
}
int main(double input)


{
	double result;

	scanf("%lf", &input);
	
	result = input * input * 3.14;
	printf("%.2lf", result);
}
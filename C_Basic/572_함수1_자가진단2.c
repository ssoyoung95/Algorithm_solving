#include <stdio.h>
double circle_area(double radius)
{
	double circle;
	
	circle = radius * radius * 3.14;

	return circle;
}
int main(void)
{
	double result;
	double input;

	scanf("%lf", &input);
	
	result = circle_area(input);

	printf("%.2lf", result);
}
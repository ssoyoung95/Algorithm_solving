#include <stdio.h>

int main(void)

{
	double yard;

	printf("yard? ");
	scanf("%lf", &yard);
	printf("%.1lfyard = %.1lfcm",yard, 91.44 * yard);

	return 0;
}
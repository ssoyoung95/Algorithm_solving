#include <stdio.h>

int main(void)

{
	int min_height,min_weight,ki_height,ki_weight;
	int result1;


	scanf("%d %d", &min_height, &min_weight);
	scanf("%d %d", &ki_height, &ki_weight);

	result1 = (min_height > ki_height) && (min_weight > ki_weight);

	printf("%d", result1);

	return 0;
}
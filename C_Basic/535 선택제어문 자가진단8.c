#include <stdio.h>

int main(void)

{
	double score;
	scanf("%lf",&score);
	int rerated_score = (int)score;

	switch (rerated_score)
	{
	case 4:
		printf("scholarship");
		break;
	case 3:
		printf("next semester");
		break;
	case 2:
		printf("seasonal semester");
		break;
	case 1:
		printf("retake");
		break;
	case 0:
		printf("retake");
		break;
	}
	return 0;

}

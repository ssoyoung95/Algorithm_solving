'
#include <stdio.h>

int main(void)

{
	float score_a, score_b, score_c;
	int total_score;
	int avg;

	scanf("%f %f %f", &score_a, &score_b, &score_c);

	total_score = (int)score_a + (int)score_b + (int)score_c;
	avg = (score_a + score_b + score_c) / 3;
	//avg = (int)((score_a + score_b + score_c) / 3); c(13,14) 却掻拭 馬蟹 隔壱 窒径背砧 却陥 岩精 蟹神澗汽ばばばば 訊 堂軒澗暗倉ばばばばそ 
	/*莫痕廃 馬奄是背辞 亜稽研 帖檎 益 莫痕発 亜稽亜 嬢汗採歳猿走 
	慎狽聖 閤澗走 骨是澗 嬢胸惟 走舛背醤馬澗走 乞牽畏嬢推ば*/
	printf("%d\n", total_score);
	printf("%d", avg);

	return 0;
}
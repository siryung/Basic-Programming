#include <stdio.h>

int main(void)
{
	float Wm;
	float We;

	printf("몸무게를 입력하세요(단위 : kg): ");
	scanf("%f", &We);

	Wm = We * 0.17;

	printf("달에서의 몸무게는 %f kg입니다.", Wm);

	return 0;
}
#include <stdio.h>

int main(void)
{
	const double SQMETER_PER_PYEONG = 3.3058;
	double H, DM;

	printf("평을 입력하세요: ");
	scanf("%lf", &H);

	DM = H * SQMETER_PER_PYEONG;

	printf("%lf평방미터입니다.", DM);

	return 0;
}
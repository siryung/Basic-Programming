#include <stdio.h>

int main(void)
{
	float C;
	float F;

	printf("화씨 값을 입력하시오 : ");
	scanf("%f", &F);

	C = (5.0 / 9.0) * (F - 32.0);

	printf("섭씨값은 %f도입니다.", C);

	return 0;
}
#include <stdio.h>

int main()
{
	float F, C;

	printf("화씨온도를 입력하시오 : ");
	scanf("%f", &F);

	C = 5.0 / 9.0 *(F - 32.0);

	printf("섭씨온도는 %f입니다.\n", C);

	return 0;
}
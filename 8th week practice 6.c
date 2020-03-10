#include <stdio.h>

int main(void)
{
	float number, result = 1;
	int t,i = 0;

	printf("실수의 값을 입력하시오 : ");
	scanf("%f", &number);
	printf("거듭제곱횟수을 입력하시오 : ");
	scanf("%d", &t);

	for (i; i < t; i++)
	{
		result *= number;
	}

	printf("결과 값은 : %f\n", result);
	
	return 0;
}
#include <stdio.h>

int main()
{
	float a, b, c;

	printf("키와 체중을 입력하시오 : ");
	scanf("%f %f", &a, &b);

	c = (a - 100)*0.9;

	if (b > c)
		printf("과체중입니다.\n");
	else if (b < c)
		printf("저체중입니다.\n");
	else
		printf("표준체중입니다.\n");

	return 0;
}
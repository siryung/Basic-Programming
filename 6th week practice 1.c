#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
	float i, j;

	printf("계수 a를 입력하시오 : ");
	scanf("%f", &a);
	printf("계수 b를 입력하시오 : ");
	scanf("%f", &b);
	printf("계수 c를 입력하시오 : ");
	scanf("%f", &c);

	i = (-b + sqrt(b*b - 4 * a*c)) / 2 * a;
	j = (-b - sqrt(b*b - 4 * a*c)) / 2 * a;

	printf("방정식의 근은 %f입니다.\n", i);
	printf("방정식의 근은 %f입니다.\n", j);

	return 0;

}
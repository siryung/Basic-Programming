#include <stdio.h>

int main()
{
	double i, j;

	printf("실수를 입력하시오 : ");
	scanf("%lf %lf", &i, &j);

	printf("%f %f %f %f \n", i + j, i - j, i*j, i / j);

	return 0;
}
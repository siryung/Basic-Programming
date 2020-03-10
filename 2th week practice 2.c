#include <stdio.h>

int main(void)
{
	float mile;
	float meter;

	printf("마일을 입력하시오 : ");
	scanf("%f", &mile);

	meter = 1609 * mile;

	printf("%f 마일은 %f 미터 입니다.", mile, meter);
	
	return 0;
}
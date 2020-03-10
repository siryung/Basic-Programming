#include <stdio.h>

int main(void)
{
	int x, y, z;
	int sum;
	int avg;

	printf("실수를 입력하시오 : ");
	scanf("%d", &x);

	printf("실수를 입력하시오 : ");
	scanf("%d", &y);

	printf("실수를 입력하시오 : ");
	scanf("%d", &z);

	sum = x + y + z;
	avg = sum / 3;

	printf("합는 %d이고 평균은 %d 입니다.", sum, avg);

	return 0;
}
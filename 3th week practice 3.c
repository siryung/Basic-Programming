#include <stdio.h>

int main(void)
{
	double x, y, z;
	double w;

	printf("상자의 가로 세로 높이를 한번에 입력 : ");
	scanf("%lf %lf %lf", &x, &y, &z);

	w = x * y * z;

	printf("상자의 부피는 %lf입니다.\n", w);

	return 0;
}
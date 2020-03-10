#include <stdio.h>

int main(void)
{
	float height;
	float base;
	float area;

	printf("»ï°¢ÇüÀÇ ¹Øº¯ : ");
	scanf("%f", &base);

	printf("»ï°¢ÇüÀÇ ³ôÀÌ : ");
	scanf("%f", &height);

	area = 0.5 * height * base;

	printf("»ï°¢ÇüÀÇ ³ĞÀÌ : %f", area);

	return 0;
}
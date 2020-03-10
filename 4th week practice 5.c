#include <stdio.h>

int main()
{
	int x, y, z;

	printf("정수를 입력하시오 : ");
	scanf("%d", &x);

	y = x / 10;

	z = x % 10;

	printf("십의자리 : %d\n일의자리 : %d\n", y, z);

	return 0;
}
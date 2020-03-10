#include <stdio.h>

int main(void)
{
	int x;
	int an;

	printf("실수를 입력하세요 : ");
	scanf("%d", &x);

	an = 3 * x * x + 7 * x + 11;

	printf("다항식의 값은 %d", an);

	return 0;
}
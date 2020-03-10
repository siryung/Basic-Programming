#include <stdio.h>

int main()
{
	int a, b, c;

	printf("3개의 정수를 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c);

	if (a < b && a < c)
		printf("제일 작은 정수는 %d입니다.\n", a);
	else if (b < a && b < c)
		printf("제일 작은 정수는 %d입니다.\n", b);
	else
		printf("제일 작은 정수는 %d입니다.\n", c);

	return 0;

}
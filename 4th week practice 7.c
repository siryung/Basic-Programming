#include <stdio.h>

int main()
{
	int x, y;

	printf("x좌표를 입력하시오 : ");
	scanf("%d", &x);

	printf("y좌표를 입력하시오 : ");
	scanf("%d", &y);

	(x > 0 && y > 0) ? printf("제1사분면\n") : printf("");
	(x > 0 && y < 0) ? printf("제4사분면\n") : printf("");
	(x < 0 && y > 0) ? printf("제2사분면\n") : printf("");
	(x < 0 && y < 0) ? printf("제3사분면\n") : printf("");

	return 0;
}
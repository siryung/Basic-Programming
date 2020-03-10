#include <stdio.h>

int main()
{
	int a, b, c;
	int i, j, k;

	printf("삼각형의 3변을 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("삼각형의 3각의 크기을 입력하시오 : ");
	scanf("%d %d %d", &i, &j, &k);

	if ((a + b > c &&b + c > a &&a + c > b) && i + j + k == 180)
		printf("올바른 삼각형\n");
	else
		printf("올바르지 않은 삼각형\n");

	return 0;
}
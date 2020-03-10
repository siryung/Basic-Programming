#include <stdio.h>

int main()
{
	int i, j, k, x, y;
	
	printf("3개의 정수를 입력하시오 : ");
	scanf("%d %d %d", &i, &j, &k);

	x = i > j ? i : j;
	y = x > k ? x : k;

	printf("최대값 : %d \n", y);

	return 0;
}
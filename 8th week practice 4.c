#include <stdio.h>

int main(void)
{
	int n, k, i=0;

	printf("카운터의 초기값을 입력하시오 :");
	scanf("%d", &n);

	k = n;

	for (i; i < k; i++)
	{
		printf("%d ", n);
		n--;
	}

	printf("\n");
	return 0;
}
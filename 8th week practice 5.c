#include <stdio.h>

int main(void)
{
	int x, i = 1;

	printf("정수를 입력하시오 : ");
	scanf("%d", &x);

	printf("약수 : ");

	for (i; i <= x; i++)
	{
		if (x%i == 0)
			printf("%d ", i);
	}

	printf("\n");

	return 0;
}
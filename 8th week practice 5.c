#include <stdio.h>

int main(void)
{
	int x, i = 1;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);

	printf("��� : ");

	for (i; i <= x; i++)
	{
		if (x%i == 0)
			printf("%d ", i);
	}

	printf("\n");

	return 0;
}
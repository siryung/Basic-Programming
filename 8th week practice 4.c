#include <stdio.h>

int main(void)
{
	int n, k, i=0;

	printf("ī������ �ʱⰪ�� �Է��Ͻÿ� :");
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
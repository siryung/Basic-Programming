#include <stdio.h>

int main()
{
	int x, y, z;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);

	y = x / 10;

	z = x % 10;

	printf("�����ڸ� : %d\n�����ڸ� : %d\n", y, z);

	return 0;
}
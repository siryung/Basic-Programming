#include <stdio.h>

int main()
{
	int x, y;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);

	printf("2�� ���ϰ� ���� Ƚ�� :");
	scanf("%d", &y);

	printf("%d<<%d�� �� : %d\n", x, y, x << y);

	return 0;
}
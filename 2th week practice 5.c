#include <stdio.h>

int main(void)
{
	int x;
	int an;

	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf("%d", &x);

	an = 3 * x * x + 7 * x + 11;

	printf("���׽��� ���� %d", an);

	return 0;
}
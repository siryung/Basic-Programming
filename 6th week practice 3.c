#include <stdio.h>

int main()
{
	int a, b, c;

	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c);

	if (a < b && a < c)
		printf("���� ���� ������ %d�Դϴ�.\n", a);
	else if (b < a && b < c)
		printf("���� ���� ������ %d�Դϴ�.\n", b);
	else
		printf("���� ���� ������ %d�Դϴ�.\n", c);

	return 0;

}
#include <stdio.h>

int main()
{
	int x, y;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����) : ");
	scanf("%d %d", &x, &y);

	if (x <= 17 && ((y <= 12 && y >= 3) || y >= 65))
		printf("����� 25000�Դϴ�.\n");
	else if (x <= 17)
		printf("����� 34000�Դϴ�.\n");
	else
		printf("����� 10000�Դϴ�.\n");

	return 0;
}
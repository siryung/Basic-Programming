#include <stdio.h>

int main(void)
{
	int x, y, z;
	int sum;
	int avg;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%d", &x);

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%d", &y);

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%d", &z);

	sum = x + y + z;
	avg = sum / 3;

	printf("�մ� %d�̰� ����� %d �Դϴ�.", sum, avg);

	return 0;
}
#include <stdio.h>

int main(void)
{
	double x, y, z;
	double w;

	printf("������ ���� ���� ���̸� �ѹ��� �Է� : ");
	scanf("%lf %lf %lf", &x, &y, &z);

	w = x * y * z;

	printf("������ ���Ǵ� %lf�Դϴ�.\n", w);

	return 0;
}
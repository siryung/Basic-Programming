#include <stdio.h>

int main(void)
{
	float height;
	float base;
	float area;

	printf("�ﰢ���� �غ� : ");
	scanf("%f", &base);

	printf("�ﰢ���� ���� : ");
	scanf("%f", &height);

	area = 0.5 * height * base;

	printf("�ﰢ���� ���� : %f", area);

	return 0;
}
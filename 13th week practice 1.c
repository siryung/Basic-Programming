#include <stdio.h>
#include <stdlib.h>

void getSensorData(float *p)
{
	*p = rand() % 100;
	*(p + 1) = rand() % 100;
	*(p + 2) = rand() % 100;
}

int main()
{
	float a[3] = { 0 };

	getSensorData(a);

	printf("���� ������ ��ֹ����� �Ÿ� : %f\n", a[0]);
	printf("�߰� ������ ��ֹ����� �Ÿ� : %f\n", a[1]);
	printf("������ ������ ��ֹ����� �Ÿ� : %f\n", a[2]);

	return 0;
}


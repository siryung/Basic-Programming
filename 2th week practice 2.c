#include <stdio.h>

int main(void)
{
	float mile;
	float meter;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%f", &mile);

	meter = 1609 * mile;

	printf("%f ������ %f ���� �Դϴ�.", mile, meter);
	
	return 0;
}
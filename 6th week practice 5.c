#include <stdio.h>

int main()
{
	float a, b, c;

	printf("Ű�� ü���� �Է��Ͻÿ� : ");
	scanf("%f %f", &a, &b);

	c = (a - 100)*0.9;

	if (b > c)
		printf("��ü���Դϴ�.\n");
	else if (b < c)
		printf("��ü���Դϴ�.\n");
	else
		printf("ǥ��ü���Դϴ�.\n");

	return 0;
}
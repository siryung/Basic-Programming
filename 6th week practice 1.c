#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
	float i, j;

	printf("��� a�� �Է��Ͻÿ� : ");
	scanf("%f", &a);
	printf("��� b�� �Է��Ͻÿ� : ");
	scanf("%f", &b);
	printf("��� c�� �Է��Ͻÿ� : ");
	scanf("%f", &c);

	i = (-b + sqrt(b*b - 4 * a*c)) / 2 * a;
	j = (-b - sqrt(b*b - 4 * a*c)) / 2 * a;

	printf("�������� ���� %f�Դϴ�.\n", i);
	printf("�������� ���� %f�Դϴ�.\n", j);

	return 0;

}
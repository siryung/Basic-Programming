#include <stdio.h>

int main(void)
{
	float C;
	float F;

	printf("ȭ�� ���� �Է��Ͻÿ� : ");
	scanf("%f", &F);

	C = (5.0 / 9.0) * (F - 32.0);

	printf("�������� %f���Դϴ�.", C);

	return 0;
}
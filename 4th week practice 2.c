#include <stdio.h>

int main()
{
	float F, C;

	printf("ȭ���µ��� �Է��Ͻÿ� : ");
	scanf("%f", &F);

	C = 5.0 / 9.0 *(F - 32.0);

	printf("�����µ��� %f�Դϴ�.\n", C);

	return 0;
}
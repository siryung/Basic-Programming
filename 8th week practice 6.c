#include <stdio.h>

int main(void)
{
	float number, result = 1;
	int t,i = 0;

	printf("�Ǽ��� ���� �Է��Ͻÿ� : ");
	scanf("%f", &number);
	printf("�ŵ�����Ƚ���� �Է��Ͻÿ� : ");
	scanf("%d", &t);

	for (i; i < t; i++)
	{
		result *= number;
	}

	printf("��� ���� : %f\n", result);
	
	return 0;
}
#include <stdio.h>

int main(void)
{
	float Wm;
	float We;

	printf("�����Ը� �Է��ϼ���(���� : kg): ");
	scanf("%f", &We);

	Wm = We * 0.17;

	printf("�޿����� �����Դ� %f kg�Դϴ�.", Wm);

	return 0;
}
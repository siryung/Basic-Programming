#include <stdio.h>

int main(void)
{
	const double SQMETER_PER_PYEONG = 3.3058;
	double H, DM;

	printf("���� �Է��ϼ���: ");
	scanf("%lf", &H);

	DM = H * SQMETER_PER_PYEONG;

	printf("%lf�������Դϴ�.", DM);

	return 0;
}
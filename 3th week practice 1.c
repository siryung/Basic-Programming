#include <stdio.h>

int main(void)
{
	double Lspeed = 300000;
	double D = 149600000;

	int time, m, s;

	time = D/Lspeed;
	m = time / 60;
	s = time % 60;

	printf("���� �ӵ��� %f km/s\n", Lspeed);
	printf("�¾�� �������� �Ÿ� %f km \n", D);
	printf("���� �ð��� %d�� %d�� \n", m, s);

	return 0;
}
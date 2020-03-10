#include <stdio.h>

int main(void)
{
	double Lspeed = 300000;
	double D = 149600000;

	int time, m, s;

	time = D/Lspeed;
	m = time / 60;
	s = time % 60;

	printf("빛의 속도는 %f km/s\n", Lspeed);
	printf("태양과 지구와의 거리 %f km \n", D);
	printf("도달 시간은 %d분 %d초 \n", m, s);

	return 0;
}
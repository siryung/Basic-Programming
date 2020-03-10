#include <stdio.h>
#include <stdlib.h>

void getSensorData(float *p)
{
	*p = rand() % 100;
	*(p + 1) = rand() % 100;
	*(p + 2) = rand() % 100;
}

int main()
{
	float a[3] = { 0 };

	getSensorData(a);

	printf("왼쪽 센서와 장애물과의 거리 : %f\n", a[0]);
	printf("중간 센서와 장애물과의 거리 : %f\n", a[1]);
	printf("오른쪽 센서와 장애물과의 거리 : %f\n", a[2]);

	return 0;
}


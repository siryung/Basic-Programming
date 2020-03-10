#include <stdio.h>

int main(void)
{
	int x = 10, time=7, i = 0;

	for (i; i < time; i++)
		x *= 4;

	printf("7시간 후의 세균의 수 : %d\n", x);
	return 0;
}
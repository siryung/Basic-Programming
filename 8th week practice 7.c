#include <stdio.h>

int main(void)
{
	double mm=1;
	int x, i=0;

	printf("종이를 몇 회 접을까요 > ");
	scanf("%d", &x);

	for (i; i < x; i++)
		mm *= 2;

	printf("%d회 접은 후 두께 : %0.6fmm\n", x, mm);
	
	return 0;
}
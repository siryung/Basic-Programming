#include <stdio.h>

int main(void)
{
	double mm=1;
	int x, i=0;

	printf("���̸� �� ȸ ������� > ");
	scanf("%d", &x);

	for (i; i < x; i++)
		mm *= 2;

	printf("%dȸ ���� �� �β� : %0.6fmm\n", x, mm);
	
	return 0;
}
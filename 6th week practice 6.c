
#include <stdio.h>

int main()
{
	float x;

	printf("x�� ���� �Է��Ͻÿ� : ");
	scanf("%f", &x);

	if (x <= 0)
		printf("f(x)�� ���� %f\n", x * x - 9 * x + 2);
	else
		printf("f(x)�� ���� %f\n", 7 * x + 2);

	return 0;
}
#include <stdio.h>

int main()
{
	double i, j;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf %lf", &i, &j);

	printf("%f %f %f %f \n", i + j, i - j, i*j, i / j);

	return 0;
}
#include <stdio.h>
#pragma warning(disable: 4996)

int get_int()
{
	int i;
	printf("정수를 입력하시오 : ");
	scanf("%d", &i);
	return i;
}
int fatorial(int n)
{
	int i;
	long result = 1;
	for (i = 1; i <= n; i++)
		result *= i;
	return result;
}
int conbination(int n, int r)
{
	return fatorial(n) / (fatorial(r) * fatorial(n - r));
}

int main(void)
{
	int n, r;
	n = get_int();
	r = get_int();

	printf("C(%d, %d) = %d\n", n, r, conbination(n, r));
}
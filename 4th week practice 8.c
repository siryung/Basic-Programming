#include <stdio.h>

int main()
{
	int i, j, x, y, z, w, f;

	printf("���� �� �Է� : ");
	scanf("%d", &i);

	printf("����ڰ� �� �� : ");
	scanf("%d", &j);

	f = j - i;
	x = f / 5000;

	f -= x * 5000;
	y = f / 1000;

	f -= y * 1000;
	z = f / 500;

	f -= z * 500;
	w = f / 100;

	printf("5000���� : %d��\n", x);
	printf("1000���� : %d��\n", y);
	printf("500�� ���� : %d��\n", z);
	printf("100�� ���� : %d��\n", w);

	return 0;
}
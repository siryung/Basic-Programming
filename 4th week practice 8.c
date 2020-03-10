#include <stdio.h>

int main()
{
	int i, j, x, y, z, w, f;

	printf("물건 값 입력 : ");
	scanf("%d", &i);

	printf("사용자가 낸 돈 : ");
	scanf("%d", &j);

	f = j - i;
	x = f / 5000;

	f -= x * 5000;
	y = f / 1000;

	f -= y * 1000;
	z = f / 500;

	f -= z * 500;
	w = f / 100;

	printf("5000원권 : %d장\n", x);
	printf("1000원권 : %d장\n", y);
	printf("500원 동전 : %d개\n", z);
	printf("100원 동전 : %d개\n", w);

	return 0;
}
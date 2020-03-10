#include <stdio.h>

int main()
{
	int x, y;

	printf("현재 시간과 나이를 입력하시오(시간, 나이) : ");
	scanf("%d %d", &x, &y);

	if (x <= 17 && ((y <= 12 && y >= 3) || y >= 65))
		printf("요금은 25000입니다.\n");
	else if (x <= 17)
		printf("요금은 34000입니다.\n");
	else
		printf("요금은 10000입니다.\n");

	return 0;
}
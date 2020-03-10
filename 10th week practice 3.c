#include <stdio.h>
#pragma warning(disable: 4996)

int get_int()
{
	int i;
	printf("정수를 입력하시오 :");
	scanf("%d", &i);
	return i;
}
int reroll(int n)
{
	int i = 1, result = 0;
	while (i <= n)
	{
		if (n%i == 0)
			result++;
		i++;
	}
	return (result == 2);
}

int main(void)
{
	int n;
	n = get_int();

	if (reroll(n) == 1)
		printf("%d은 소수가 맞습니다.\n", n);
	else
		printf("%d는 소수가 아닙니다.\n", n);

	return 0;
}
#include <stdio.h>
#pragma warning(disable: 4996)

int get_int()
{
	int i;
	printf("������ �Է��Ͻÿ� :");
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
		printf("%d�� �Ҽ��� �½��ϴ�.\n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);

	return 0;
}
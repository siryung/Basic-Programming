#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 4996)

int get_line()
{
	int i;
	printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0) : ");
	scanf("%d", &i);
	return i;
}

int reroll(int i, int j)
{
	if (i == j)
	{
		printf("�¾ҽ��ϴ�.\n");
		rewind(stdin);
	}
	else
	{
		printf("Ʋ�Ƚ��ϴ�.\n");
		rewind(stdin);
	}
	return 0;
}

int b_rand()
{
	int i;
	srand((unsigned)time(NULL));
	i = rand() % 1;
	return i;
}

int main(void)
{
	int i = 0;
	int j = 0;
	char start = 0;

	while (1)
	{
		i = get_line();
		j = b_rand();

		reroll(i, j);

		printf("����Ͻðڽ��ϱ�? (y �Ǵ� n) : ");
		scanf("%c", &start);

		if (start == 'n')
			break;
		else if (start == 'y')
			rewind(stdin);
	}
	return 0;
}
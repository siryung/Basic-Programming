#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 4996)

int get_line()
{
	int i;
	printf("앞면 또는 뒷면(1 또는 0) : ");
	scanf("%d", &i);
	return i;
}

int reroll(int i, int j)
{
	if (i == j)
	{
		printf("맞았습니다.\n");
		rewind(stdin);
	}
	else
	{
		printf("틀렸습니다.\n");
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

		printf("계속하시겠습니까? (y 또는 n) : ");
		scanf("%c", &start);

		if (start == 'n')
			break;
		else if (start == 'y')
			rewind(stdin);
	}
	return 0;
}
#include <stdio.h>
#pragma warning(disable: 4996)

int menu()
{
	printf("===============\nMENU\n===============\n");
	printf("1. 덧셈\n2. 뺄셈\n3. 곱셈\n4. 나눗셈\n5. 나머지");
}
int choice()
{
	int i;
	printf("원하는 메뉴를 선택하시오(1-5) :\n");
	scanf("%d", &i);
	return i;
}
int reroll(int k)
{
	int i = 0, j = 0;
	printf("숫자 2개를 입력하시오 : ");
	scanf("%d %d", &i, &j);
	if (k == 1)
		printf("%d", i + j);
	else if (k == 2)
		printf("%d", i - j);
	else if (k == 3)
		printf("%d", i * j);
	else if (k == 4)
		printf("%d", i / j);
	else if (k == 5)
		printf("%d", i % j);
}
int get_start()
{
	char start;
	printf("계속하시겠습니까? (y 또는 n) : ");
	scanf("%c", &start);
	return start;
}
int main(void)
{
	int i = 0, j = 0, k = 0, ch;
	char x;

	while (1)
	{
		menu();
		printf("\n");
		k = choice();

		if (k == 1)
			reroll(1);
		else if (k == 2)
			reroll(2);
		else if (k == 3)
			reroll(3);
		else if (k == 4)
			reroll(4);
		else if (k == 5)
			reroll(5);
		else
		{
			rewind(stdin);
			continue;
		}
		rewind(stdin);
		printf("\n");

		ch = get_start();
		if (ch == 'n')
			break;
		if (ch == 'y')
			rewind(stdin);
	}
	return 0;
}
#include <stdio.h>

int search(int* a, int size, int x)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (*a == x)
			return i;
		*a++;
	}
}

int main(void)
{
	int date[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
	int size = sizeof(date) / sizeof(date[0]);

	printf("������ 200������ ����� �ε��� = ");
	printf("%d\n", search(date, size, 200));
}
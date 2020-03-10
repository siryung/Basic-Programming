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

	printf("월급이 200만원인 사람의 인덱스 = ");
	printf("%d\n", search(date, size, 200));
}
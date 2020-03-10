#include <stdio.h>
int main(void)
{
	int list[10] = { 3, 9, 2, 7, 1, 4, 0, 8, 6, 5 };
	int i, j, temp, least;

	for (i = 0; i < 10; i++)
		printf("%d ", list[i]);
	printf("\n");

	for (i = 0; i < 10 - 1; i++)
	{
		least = i;
		for (j = i + 1; j < 10; j++)
			if (list[j] < list[least])
				least = j;
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}	for (i = 0; i < 10; i++)
		printf("%d ", list[i]);
	printf("\n");

	return 0;}
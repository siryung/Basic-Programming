#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dice[6] = {0};
	int i;

	for (i = 0; i < 10000; i++)
		dice[rand() % 6]++;

	printf("====================\n");
	printf("¸é	ºóµµ\n");
	printf("====================\n");

	for (i = 0; i < 6; i++)
		printf("%3d	%3d \n", i,dice[i]);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int min[10] = { 0 };
	int i, minimum;
	printf("---------------------------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("---------------------------------------\n");	srand((unsigned)time(NULL));
	
	for (i = 0; i < 10; i++)
	{
		min[i] = (rand() % 100) + 1;
		printf("%d ", min[i]);
	}
	printf("\n\n");

	minimum = min[1];

	for (i = 0; i < 10; i++)
	{
		if (min[i] < minimum)
			minimum = min[i];
	}

	printf("최소값은 %d입니다.\n", minimum);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int i, x, y, z;

	for (i = 0; i < 10; i++)
	{
		x = rand()%10;
		y = rand()%10;

		printf("%d + %d = ", x, y);
		scanf("%d", &z);

		if (x + y == z)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
	}

	return 0;
}
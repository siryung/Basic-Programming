#include <stdio.h>

int main(void)
{
	int x = 41;
	int number, i=0;

	do
	{
		printf("정답을 추측하여 보시오 : ");
		scanf("%d", &number);
		i++;

		if (number > x)
			printf("제시한 정수가 높습니다.\n");
		else if (number < x)
			printf("제시한 정수가 낮습니다.\n");
	} while (x != number);

	printf("축하합니다. 시도횟수 = %d\n", i);
	
	return 0;
}
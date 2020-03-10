#include <stdio.h>

int main()
{
	int sit[10] = { 0 };
	int choice, i;
	char reroll;

	while(1)
	{
		printf("좌석을 예약하시겠습니까? <y 또는 n> ");
		scanf(" %c", &reroll);

		if (reroll == 'n')
			break;
		else if (reroll == 'y')
		{
			printf("-------------------------------\n");
			printf(" 1 2 3 4 5 6 7 8 9 10\n");
			printf("-------------------------------\n");


			for (i = 0; i < 10; i++)
				printf(" %d", sit[i]);
			printf("\n");
		}

		printf("몇번째 자석을 예약하시겠습니까? ");
		scanf("%d", &choice);

		if (choice > 10 || choice < 1)
		{
			printf("1부터 10사이의 숫자를 입력하세요\n");
			continue;
		}
		else
		{
			if (sit[choice - 1] == 0)
			{
				sit[choice - 1] = 1;
				printf("예약되었습니다.\n");
			}
			else
				printf("이미 예약된 자리입니다.\n");
			continue;
		}

	}
}
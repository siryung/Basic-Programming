#include <stdio.h>

int main()
{
	int sit[10] = { 0 };
	int choice, i;
	char reroll;

	while(1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�? <y �Ǵ� n> ");
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

		printf("���° �ڼ��� �����Ͻðڽ��ϱ�? ");
		scanf("%d", &choice);

		if (choice > 10 || choice < 1)
		{
			printf("1���� 10������ ���ڸ� �Է��ϼ���\n");
			continue;
		}
		else
		{
			if (sit[choice - 1] == 0)
			{
				sit[choice - 1] = 1;
				printf("����Ǿ����ϴ�.\n");
			}
			else
				printf("�̹� ����� �ڸ��Դϴ�.\n");
			continue;
		}

	}
}
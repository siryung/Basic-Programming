#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	char op;
	float a, b;

	printf("****************\n");
	printf("A---- Add\nS---- Subtract\nM---- Multiply\nD---- Divide\nQ---- Quit\n");
	printf("****************\n");

	printf("������ �����Ͻÿ� : ");
	scanf("%c", &op);
	printf("�� ���� �и��Ͽ� �Է��Ͻÿ� : ");
	scanf("%f %f", &a, &b);

	while (1)
	{
		if (op == 'Q')
			break;
		else if (op == 'S')
		{
			printf("%f\n", a - b);
			rewind(stdin);
			printf("������ �����Ͻÿ� : ");
			scanf("%c", &op);
		}
		else if (op == 'M')
		{
			printf("%f\n", a * b);
			rewind(stdin);
			printf("������ �����Ͻÿ� : ");
			scanf("%c", &op);
		}
		else if (op == 'D')
		{
			printf("%f\n", a / b);
			rewind(stdin);
			printf("������ �����Ͻÿ� : ");
			scanf("%c", &op);
		}
		else if (op == 'A')
		{
			printf("%f\n", a + b);
			rewind(stdin);
			printf("������ �����Ͻÿ� : ");
			scanf("%c", &op);
		}
		else
		{
			printf("�����ڸ� ���� �Ͻÿ�.\n");
			rewind(stdin);
			printf("������ �����Ͻÿ� : ");
			scanf("%c", &op);
			continue;
			}
	}

	return 0;
}
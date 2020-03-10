#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	char op;
	float a, b;

	printf("****************\n");
	printf("A---- Add\nS---- Subtract\nM---- Multiply\nD---- Divide\nQ---- Quit\n");
	printf("****************\n");

	printf("연산을 선택하시오 : ");
	scanf("%c", &op);
	printf("두 수를 분리하여 입력하시오 : ");
	scanf("%f %f", &a, &b);

	while (1)
	{
		if (op == 'Q')
			break;
		else if (op == 'S')
		{
			printf("%f\n", a - b);
			rewind(stdin);
			printf("연산을 선택하시오 : ");
			scanf("%c", &op);
		}
		else if (op == 'M')
		{
			printf("%f\n", a * b);
			rewind(stdin);
			printf("연산을 선택하시오 : ");
			scanf("%c", &op);
		}
		else if (op == 'D')
		{
			printf("%f\n", a / b);
			rewind(stdin);
			printf("연산을 선택하시오 : ");
			scanf("%c", &op);
		}
		else if (op == 'A')
		{
			printf("%f\n", a + b);
			rewind(stdin);
			printf("연산을 선택하시오 : ");
			scanf("%c", &op);
		}
		else
		{
			printf("연산자를 선택 하시오.\n");
			rewind(stdin);
			printf("연산을 선택하시오 : ");
			scanf("%c", &op);
			continue;
			}
	}

	return 0;
}
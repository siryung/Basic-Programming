#include <stdio.h>
#pragma warning(disable: 4996)

int printfO()
{
	printf("'c' ���� �µ����� ȭ�� �µ��� ��ȯ\n");
	printf("'f' ȭ�� �µ����� ���� �µ��� ��ȯ\n");
	printf("'q' ����\n");
}
double C2F(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}
double F2C(double f_temp)
{
	return 5.0 / 9.0 * (f_temp - 32);
}

int main(void)
{
	char choice;
	double temp;

	while (1)
	{
		printfO();
		printf("�޴����� �����Ͻÿ� : ");
		scanf("%c", &choice);
		
		if (choice == 'q')
			break;
		else if (choice == 'c')
		{
			printf("�����µ� : ");
			scanf("%lf", &temp);
			printf("%f\n", C2F(temp));
		}
		else if (choice == 'f')
		{
			printf("ȭ���µ� : ");
			scanf("%lf", &temp);
			printf("%f\n", F2C(temp));
		}
		getchar();
	}
	return 0;
}
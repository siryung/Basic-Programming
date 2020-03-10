#include <stdio.h>
#pragma warning(disable: 4996)

int printfO()
{
	printf("'c' ¼·¾¾ ¿Âµµ¿¡¼­ È­¾¾ ¿Âµµ·Î º¯È¯\n");
	printf("'f' È­¾¾ ¿Âµµ¿¡¼­ ¼·¾¾ ¿Âµµ·Î º¯È¯\n");
	printf("'q' Á¾·á\n");
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
		printf("¸Þ´º¿¡¼­ ¼±ÅÃÇÏ½Ã¿À : ");
		scanf("%c", &choice);
		
		if (choice == 'q')
			break;
		else if (choice == 'c')
		{
			printf("¼·¾¾¿Âµµ : ");
			scanf("%lf", &temp);
			printf("%f\n", C2F(temp));
		}
		else if (choice == 'f')
		{
			printf("È­¾¾¿Âµµ : ");
			scanf("%lf", &temp);
			printf("%f\n", F2C(temp));
		}
		getchar();
	}
	return 0;
}
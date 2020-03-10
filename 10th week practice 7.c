#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#pragma warning(disable: 4996)

int printf_ch()
{
	int i = kbhit();
	return (i == 's' || i == 'S');
}

void disp_car(int car_number, int distance)
{
	int i;
	printf("CAR#%d:", car_number);
	for (i = 0; i < distance / 10; i++)
		printf("*");
	printf("\n");
}

int main(void)
{
	int i = 0, j = 0, k = 0;
	int car1_dist = 0, car2_dist = 0;

	srand((unsigned)time(NULL));

	do
	{
		j = kbhit();
		if (j == 0)
		{
			++k;
			for (i; i < k; i++)
			{
				car1_dist += rand() % 100;
				car2_dist += rand() % 200;
				disp_car(1, car1_dist);
				disp_car(2, car2_dist);
				printf("----------------------------------\n");
				getch();
			}
		}
		else
			break;
	} while (1);
	return 0;
}
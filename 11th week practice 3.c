#include <stdio.h>
#include <stdlib.h>

void get_dice_face()
{
	static int retry = 0;
	static int one = 0;
	static int two = 0;
	static int three = 0;
	static int four = 0;
	static int five = 0;
	static int six = 0;

	int dice = 1 + rand() % 6;

	if (dice == 1)
		one++;
	else if (dice == 2)
		two++;
	else if (dice == 3)
		three++;
	else if (dice == 4)
		four++;
	else if (dice == 5)
		five++;
	else
		six++;

	retry++;

	if (retry == 100)
	{
		printf("1 -> %d\n", one);
		printf("2 -> %d\n", two);
		printf("3 -> %d\n", three);
		printf("4 -> %d\n", four);
		printf("5 -> %d\n", five);
		printf("6 -> %d\n", six);
	}
}

void main()
{
	for (int i = 0; i < 100; i++)
		get_dice_face();
}
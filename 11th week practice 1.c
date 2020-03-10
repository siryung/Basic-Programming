#include <stdio.h>

void save(int amount)
{
	static int f_amount = 0;

	if (amount >= 0)
		printf("%d\t\t", amount);
	else
		printf("\t%d\t", -amount);

	f_amount += amount;

	printf("%d\n", f_amount);
}

void main()
{
	printf("===========================\n");
	printf("입금\t출금\t잔고\n");
	printf("===========================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("===========================\n");
}
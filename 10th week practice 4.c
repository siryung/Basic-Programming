#include <stdio.h>
#pragma warning(disable: 4996)

int get_year()
{
	int i;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &i);
	return i;
}
int is_leap(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int main(void)
{
	int year = get_year();

	if (is_leap(year) == 1)
		printf("366\n");
	else
		printf("355\n");

	return 0;
}
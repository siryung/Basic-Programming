#include <stdio.h>

int main(void)
{
	int i = 10;
	int *p = &i;

	i = i + 1;
	printf("%d\n", i);

	i++;
	printf("%d\n", i);

	*p++;
	printf("%d\n", i);

	*p = *p + 1;
	printf("%d\n", i);

	return 0;
}
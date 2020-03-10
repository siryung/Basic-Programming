#include <stdio.h>


void array_copy(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		b[i] = a[i];
}

int main()
{
	int a[10] = { 1,2,3,0,0,0,0,0,0,0 };
	int b[10] = { 0 };
	int i;

	array_copy(a, b, 10);

	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");

	for (i = 0; i < 10; i++)
		printf("%d ", b[i]);
	printf("\n");

	return 0;
}
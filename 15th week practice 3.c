#include <stdio.h>

void array_add(int a[], int b[], int c[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		c[i] = a[i] + b[i];
	}
}

void array_print(char* name, int* a, int size)
{
	int i;
	printf("%s = ", name);

	for (i = 0; i < size; i++)
	{
		printf("%d ", *a);
		*a++;
	}

	printf("\n");
}

int main(void)
{
	int A[10] = { 1,2,3 };
	int B[10] = { 0 };
	int C[10] = { 0 };

	char* name[] ={"A[]","B[]","C[]" };

	int i;
	int size_A, size_B, size_C;

	size_A = sizeof(A) / sizeof(A[0]);
	size_B = sizeof(B) / sizeof(B[0]);
	size_C = sizeof(C) / sizeof(C[0]);

	array_add(A, B, C, size_A);

	array_print(name[0], A, size_A);
	array_print(name[1], B, size_B);
	array_print(name[2], C, size_C);
}
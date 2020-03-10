#include <stdio.h>

int brighten_image(int *p,int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			*p += 10;
			*p++;
		}
	}
}

int print_image(int *p)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *p);
			*p++;
		}
		printf("\n");
	}
}

int main()
{
	int a[5][5]=
	{
		{ 10,20,30,40,50 },
		{ 10,20,30,40,50 },
		{ 10,20,30,40,50 },
		{ 10,20,30,40,50 },
		{ 10,20,30,40,50 }
	};

	int i, j;

	print_image(a);

	brighten_image(a, 5);

	printf("\n");

	print_image(a);

}
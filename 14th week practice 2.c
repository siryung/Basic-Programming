#include <stdio.h>

struct complex
{
	double real;
	double imag;
};

struct complex add(struct complex c1, struct complex c2)
{
	struct complex result;

	result.real = c1.real + c2.real;
	result.imag = c1.imag + c2.imag;

	return result;
}

int main()
{
	struct complex c1 = { 1.0,2.0 };
	struct complex c2 = { 2.0,3.0 };
	struct complex sum;

	sum = add(c1, c2);

	printf("%f + %fi\n", c1.real, c1.imag);
	printf("%f + %fi\n", c2.real, c2.imag);
	printf("%f + %fi\n", sum.real, sum.imag);
	return 0;
}
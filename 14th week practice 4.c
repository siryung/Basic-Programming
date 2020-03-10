#include <stdio.h>

struct point
{
	int x, y;
};

struct circle
{
	struct point center;
	double radius;
};

double araea(struct circle c)
{
	return c.radius * c.radius * 3.14;
}

double perimeter(struct circle c)
{
	return c.radius * 2 * 3.14;
}

int main(void)
{
	struct circle c;
	double araea1, perimeter1;

	printf("���� �߽��� : ");
	scanf("%d %d", &c.center.x, &c.center.y);
	printf("���� ������ : ");
	scanf("%lf", &c.radius);

	araea1 = araea(c);
	perimeter1 = perimeter(c);

	printf("���� ���� = %f, ���� �ѷ� = %f\n", araea1, perimeter1);

	return 0;
}
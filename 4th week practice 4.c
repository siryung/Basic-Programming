#include <stdio.h>

int main()
{
	int i, j, k, x, y;
	
	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &i, &j, &k);

	x = i > j ? i : j;
	y = x > k ? x : k;

	printf("�ִ밪 : %d \n", y);

	return 0;
}
#include <stdio.h>

int main()
{
	int a, b, c;
	int i, j, k;

	printf("�ﰢ���� 3���� �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("�ﰢ���� 3���� ũ���� �Է��Ͻÿ� : ");
	scanf("%d %d %d", &i, &j, &k);

	if ((a + b > c &&b + c > a &&a + c > b) && i + j + k == 180)
		printf("�ùٸ� �ﰢ��\n");
	else
		printf("�ùٸ��� ���� �ﰢ��\n");

	return 0;
}
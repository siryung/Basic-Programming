#include <stdio.h>

int main(void)
{
	int key, i;
	int list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printf("Ž���� ���� �Է��Ͻÿ�:");
	scanf("%d", &key);

	for (i = 0; i < 10; i++)
		if (list[i] == key)
			printf("Ž�� ���� �ε���= %d\n", i);

	printf("Ž�� ����\n");

	return 0;
}

#include <stdio.h>

int main(void)
{
	int x = 41;
	int number, i=0;

	do
	{
		printf("������ �����Ͽ� ���ÿ� : ");
		scanf("%d", &number);
		i++;

		if (number > x)
			printf("������ ������ �����ϴ�.\n");
		else if (number < x)
			printf("������ ������ �����ϴ�.\n");
	} while (x != number);

	printf("�����մϴ�. �õ�Ƚ�� = %d\n", i);
	
	return 0;
}
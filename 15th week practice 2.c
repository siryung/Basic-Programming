#include <stdio.h>

int main()
{
	char str[100];

	int i;

	printf("���� ���ڰ� �մ� ���ڿ� : ");
	fgets(str, 99, stdin);

	printf("���� ���� ��� : ");
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] != 32)
			printf("%c", str[i]);
	}

	printf("\n");

	return 0;
}

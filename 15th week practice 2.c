#include <stdio.h>

int main()
{
	char str[100];

	int i;

	printf("공백 문자가 잇는 문자열 : ");
	fgets(str, 99, stdin);

	printf("공백 제거 결과 : ");
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] != 32)
			printf("%c", str[i]);
	}

	printf("\n");

	return 0;
}

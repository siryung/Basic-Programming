#include <stdio.h>
#define password 1234

int check(int re_password)
{
	static int retry = 0;

	if(re_password==password)
	{
		return 1;
	}
	if (retry <= 2)
	{
		retry++;
	}
	else
		return 2;
}

void main()
{
	do
	{
		int re_password;
		printf("비밀번호 : ");
		scanf("%d", &re_password);
		if (check(re_password) == 2)
		{
			printf("로그인 시도횟수 초과\n");
			break;
		}
		else if (check(re_password) == 1)
		{
			printf("맞는 비밀번호 입니다.\n");
			break;
		}
		else
		{
			printf("틀린 비밀번호 입니다.\n");
			continue;
		}
	} while (1);
}
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
		printf("��й�ȣ : ");
		scanf("%d", &re_password);
		if (check(re_password) == 2)
		{
			printf("�α��� �õ�Ƚ�� �ʰ�\n");
			break;
		}
		else if (check(re_password) == 1)
		{
			printf("�´� ��й�ȣ �Դϴ�.\n");
			break;
		}
		else
		{
			printf("Ʋ�� ��й�ȣ �Դϴ�.\n");
			continue;
		}
	} while (1);
}
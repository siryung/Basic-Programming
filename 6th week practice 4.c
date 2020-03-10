#include <stdio.h>

int main()
{
	int m;

	printf("월번호를 입력하시오 : ");
	scanf("%d", &m);

	switch (m)
	{
	case 1:
		printf("Jan\n");
		break;
	case 2:
		printf("Feb\n");
		break;
	case 3:
		printf("Mar\n");
		break;
	case 4:
		printf("Apr\n");
		break;
	case 5:
		printf("May\n");
		break;
	case 6:
		printf("Jun\n");
		break;
	case 7:
		printf("Jul\n");
		break;
	case 8:
		printf("Aug\n");
		break;
	case 9:
		printf("Sep\n");
		break;
	case 10:
		printf("Oct\n");
		break;
	case 11:
		printf("Nov\n");
		break;
	default:
		printf("Dec\n");
		break;
	}
}
#include <stdio.h>

void set_proverb(char** a, int n)
{
	char* str[] =
	{
		"가는 날이 장날",
		"가는 말에 채찍질",
		"가는 말이 고와야 오는 말이 곱다.",
		"가물에 콩 나듯 한다",
		"간에 기별도 안간다",
		"간에 붙었다 쓸개에 붙었따 한다",
		"갓 쓰고 자전거 타는 격",
		"강 건너 불구경한듯 한다",
		"강물도 쓰면 준다",
		"걷기도 전에 뛰려고 한다"
	};
	*a = str[n - 1];
}

int main(void)
{
	char* str;
	int n;

	printf("몇 번째 속담을 선택하시겠습니까 > ");
	scanf("%d", &n);

	set_proverb(&str, n);

	printf("선택된 속담 : %s\n", str);
}
#include <stdio.h>

int b_s(int list[], int n, int key)
{
	int low, high, middle;
	low = 0;
	high = n - 1;
	while (low <= high) {
		printf("[%d %d]\n", low, high);
		middle = (low + high) / 2;
		if (key == list[middle])
			return middle;
		else if (key > list[middle])
			low = middle + 1;
		else
			high = middle - 1;
	}
	return -1;
}

int main()
{
	int key;
	int grade[16] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };
	printf("탐색할 값을 입력하시오:");
	scanf("%d", &key);
	printf("탐색 결과= %d\n", b_s(grade, 16, key));

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student
{
	int number;
	char name[20];
	double grade;
};

struct student get_max_stu(struct student super_stu[], int size)
{
	int i;
	struct student reslut;

	reslut = super_stu[0];

	for (i = 1; i < size; i++)
	{
		if (super_stu[i].grade > reslut.grade)
			reslut = super_stu[i];
	}
	return reslut;
}

int main(void)

{
	struct student super_stu[100];
	struct student reslut;
	int i, n, size;

	printf("학생 수를 입력하시오 : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("학번을 입력하시오 : ");
		scanf("%d", &super_stu[i].number);
		rewind(stdin);

		printf("이름을 입력하시오 : ");
		scanf("%s", &super_stu[i].name);
		rewind(stdin);

		printf("학점을 입력하시오 : ");
		scanf("%lf", &super_stu[i].grade);
		rewind(stdin);
	}

	size = sizeof(super_stu) / sizeof(super_stu[0]);

	reslut = get_max_stu(super_stu, size);

	printf("평점이 가장 높은 학생은(이름 : %s, 학번 : %d, 평점 : %f)입니다\n",
		reslut.name, reslut.number, reslut.grade);
}
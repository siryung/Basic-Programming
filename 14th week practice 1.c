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

	printf("�л� ���� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("�й��� �Է��Ͻÿ� : ");
		scanf("%d", &super_stu[i].number);
		rewind(stdin);

		printf("�̸��� �Է��Ͻÿ� : ");
		scanf("%s", &super_stu[i].name);
		rewind(stdin);

		printf("������ �Է��Ͻÿ� : ");
		scanf("%lf", &super_stu[i].grade);
		rewind(stdin);
	}

	size = sizeof(super_stu) / sizeof(super_stu[0]);

	reslut = get_max_stu(super_stu, size);

	printf("������ ���� ���� �л���(�̸� : %s, �й� : %d, ���� : %f)�Դϴ�\n",
		reslut.name, reslut.number, reslut.grade);
}
// ����ü�� �����Կ� ���� ���ǿ� ��ø ����ü
#include <stdio.h>
#pragma error (disable:4996)

typedef struct student
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
} Student;

void ShowStudentInfo(Student *sptr)
{
	printf("Name of the student: %s \n", sptr->name);
	printf("Student ID: %s \n", sptr->stdnum);
	printf("Name of the school: %s \n", sptr->school);
	printf("Student Major: %s \n", sptr->major);
	printf("year of the student: %d \n", sptr->year);
}

int main()
{
	Student arr[7];
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("Name of the student: %s \n"); scanf("%s", arr[i].name);
		printf("Student ID: %s \n"); scanf("%s", arr[i].stdnum);
		printf("Name of the school: %s \n"); scanf("%s", arr[i].stdnum);
		printf("Student Major: %s \n"); scanf("%s", arr[i].major);
		printf("year of the student: %d \n"); scanf("%d", arr[i].year);
	}
	for (i = 0; i < 7; i++)
		ShowStudentInfo(&arr[i]);

	return 0;
}

// ����ü�� �����ϴ� ����
// ����ü�� ���ؼ� ���� �ִ� �����͸� �ϳ��� ���� �� �ִ� �ڷ����� �����ϸ�, �������� ǥ�� �� ������ ������ ����, �׸�ŭ �ո����� �ڵ带 �ۼ� �� �� �ִ�. 
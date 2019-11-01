// 구조체의 유용함에 대한 논의와 중첩 구조체
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

// 구조체를 정의하는 이유
// 구조체를 통해서 연관 있는 데이터를 하나로 묶을 수 있는 자료형을 정의하면, 데이터의 표현 및 관리가 용이해 지고, 그만큼 합리적인 코드를 작성 할 수 있다. 
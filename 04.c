// structMenArrccpy
#include <stdio.h>
#define _CRT_SECURE_NO_WARNNIING
#pragma error (disable: 49996)

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

void ShowPersonInfo(Person man)
{
	printf("name: %s\n", man.name);
	printf("phone: %s\n", man.phoneNum);
	printf("age: %d\n", man.age);
}

Person ReadPersonInfo()
{
	Person man;
	printf("name?"); scanf("%s", man.name);
	printf("phone? "); scanf("%s", man.phoneNum);
	printf("age? "); scanf("%s", man.age);
	return man;
}

int main()
{
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
	return 0;
}

// 실행 결과는 인자의 전달 과정에서, 그리고 값의 반환 과정에서 구조체의 멤버로 선언된 배열도 통쨰로 복사된을 보이고 있다.
// 05.c continue
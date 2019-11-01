// 구조체의 정의와 typedef 선언
#include <stdio.h>
#pragma error (disable: 4996)

typedef int INT;
typedef int *PTR_INT;

typedef unsigned int UNIT;
typedef unsigned int *PTR_UNIT;
typedef unsigned char UCHAR;
typedef unsigned char *PTR_UCHAR;

int main()
{
	INT num1 = 120;
	PTR_INT pnum1 = &num1;

	UNIT num2 = 190;
	PTR_UNIT pnum2 = &num2;

	UCHAR ch = 'z';
	PTR_UCHAR pch = &ch;

	printf("%d, %u, %c\n", *pnum1, *pnum2, *pch);


	return 0;
}

// typedef 선언은 기존에 존재하는 자료형의 이름에 새 이름을 부여하는 것을 목표로 하는 선언이다.
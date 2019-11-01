// Struct typedef.c
// 구조체 정의와 typedef 선언
#include <stdio.h>
#pragma error (disable: 4996)

struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point; // 구조체 point 대상의typedef선언문이다

typedef struct person /* typedef 선언이 추가된 형태의 궂조체 정의이다 */
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

int main()
{
	Point pos = { 10, 20 }; /*struct 선언 없이 구조체 변수를 사용하고 있다 */
	Person man = { "고휘찬", "010-3327-0064", 21 };
	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phoneNum, man.age);
	return 0;
}
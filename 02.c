// Struct typedef.c
// ����ü ���ǿ� typedef ����
#include <stdio.h>
#pragma error (disable: 4996)

struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point; // ����ü point �����typedef�����̴�

typedef struct person /* typedef ������ �߰��� ������ ����ü �����̴� */
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

int main()
{
	Point pos = { 10, 20 }; /*struct ���� ���� ����ü ������ ����ϰ� �ִ� */
	Person man = { "������", "010-3327-0064", 21 };
	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phoneNum, man.age);
	return 0;
}
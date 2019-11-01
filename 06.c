// 구조체 변수를 대상으로 가능한 연산
//StructOperation.c
#include <stdio.h>
#pragma error(disable: 4996)
 
typedef struct point
{
	int xpos;
	int ypos;
} Point;

int main()
{
	Point pos1 = { 1, 2 };
	Point pos2;
	pos2 = pos1; // pos1의 멤버 대 pos2의 멤버간 복사가 진행 된다.

	printf("Size: %d\n", sizeof(pos1));  // pos1의 전체 크기를 반환
	printf("[%d %d]\n", pos1.xpos, pos1.ypos);
	printf("Size: %d\n", sizeof(pos2));
	printf("[%d %d\'n", pos2.xpos, pos2.ypos);

	return 0;
}
// 이번 예제를 통하여 구조체 변수 간 대입 연산의 결과로 맴버 대 멤버의 복사가 이뤄짐을 확인 하였다.
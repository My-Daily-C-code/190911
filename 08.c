// 구조체 변수의 연산 문제32-1
#include <stdio.h>
#pragma error (disable: 4996)

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point *ptr1, Point *ptr2)
{
	Point temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main()
{
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };

	SwapPoint(&pos1, &pos2);
	printf("[%d,%d]\n", pos1.xpos, pos1.ypos);
	printf("[%d,%d]\n",pos2.xpos, pos2.ypos);
}

// 지정된 두 변수의 저장 된 값을 서로 바꾸어 주는 함수. 
//The example of add & min equatuion in struct
#include <stdio.h>
#pragma error (disable: 4996)

typedef struct point
{
	int xpos;
	int ypos;
} Point;

Point AddPoint(Point pos1, Point pos2) // 9행 
{
	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;
} // 13행 

Point MinPoint(Point pos1, Point pos2) // 15행
{
	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;
} // 19행

int main()
{
	Point pos1 = { 5, 6 };
	Point pos2 = { 2, 9 };
	Point result;

	result = AddPoint(pos1, pos2);
	printf("[%d %d]\n", result.xpos, result.ypos);
	result = MinPoint(pos1, pos2);
	printf("[%d %d]\n", result.xpos, result.ypos);
	return 0;
}

// 9~13행: 구조체 멤버 xpos끼리 그리고 구조체 멤버 xpos 끼리 덧셈이 이뤄지도록 함수가 정의 되었다. 이것이 바로 프로그래머가 정의한 Point  구조체 변수의 덧셈 방식이다.
// 15~19행: 구조체 멤버 xpos끼리 그리고 구조체 멤버 ypos끼리 뺄셈이 이뤄지도록 함수가 정의되어 있다. 이것은 바로 프로그래머가 정의한 Point 구조체 변수의 뺄셈 방식이다. 
// 중첩된 구조체의 정의와 변수의 선언
#include <stdio.h>
#pragma error (disable: 4996)

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct circle
{
	Point cen; // 3행에 정의된 구조체의 변수를 멤버로 선언하였다. 
	double rad;
} Circle;

void ShowCircleInfo(Circle *cptr)
{
	printf("[%d %d]\n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius: %g\n\n", cptr->rad);
}

int main()
{
	Circle c1 = { { 1, 2 }, 3.5 }; // 구조체 변수가 멤버로 존재 할 경우, 이렇듯 중괄호를 이용해서 구조체 벰버의 초기화를 구분 지을 수 없다.
	Circle c2 = { 2, 4, 3.9 }; // 중괄호를 이용해서 구조체 변수의 초기화를 구분 짓지 않으면, 순서대로 초기화 된다. Circle 구조체의 가장 상단에 존재하는 변수는 Point 구조체 변수인데, Point 구조체 변수의 첫 번째 멤버는 xpos이니 xpos가 먼저 초기화 된다. 그리고 이어서 ypos가 초기화 된다. 
	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);
	return 0;
}
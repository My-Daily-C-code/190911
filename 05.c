// StructFunctionCallByRef
#include <stdio.h>
#pragma error (disable: 4996)

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void OrgSymTrans(Point *ptr) // 원점 대칭 9행
{
	ptr->xpos = (ptr->xpos)*-1; 
	ptr->ypos = (ptr->ypos)*-1;
}

void ShowPosition(Point pos)
{
	printf("[%d %d]\n", pos.xpos, pos.ypos);
}

int main()
{
	Point pos = { 7, -5 };
	OrgSymTrans(&pos); // pos의 값을 원점 대칭 이동 시킨다.
	ShowPosition(pos);
	OrgSymTrans(&pos); // pos의 값을 원점 대칭 이동 시킨다.
	ShowPosition(pos);
	return 0;
}

// 위 예제의 9행에 정의된 함수에서 보이는 바와 같이 구조체의 포인터 변수도 매개변수로 선언이 되어서 Call-by-reference형태의 함수 호출을 구성 할 수 있다. 
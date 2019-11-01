// 함수로의 구조체 변수 전달과 반환
#include <stdio.h>
#pragma error (disable: 4996)

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void ShowPosition(Point pos)
{
	printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

Point GetCirrentPosition()
{
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

int main()
{
	Point curPos = GetCirrentPosition(); //(24행)
	ShowPosition(curPos); //(25행)
	return 0;

}

// 24행: 함수가 반환하는 값으로 구조체 변수 cutPos를 초기화 하고 있다. 그런데 이 문장에서 호출 하는 함수는 19행에서 프로그램 사용자로부터 입력 받은 
// 위치 정보로 초기화 된 구조체 변수 cen을 반환하고 있다. 그 결과 변수 cen의 멤버에 저장된 값은 변수 curPos의 멤버에 나란히 저장(복사) 된다

// 25행: 함수를 호출 하면서 변수 curPos를 인자를 전달하고 있다. 따라서 변수 curPos에 저장된 값은 9행의 매개변수 pos에 나란히 저장(복사) 된다. 
// 구조체의 멤버로 배열이 선언되어도 위 예제에서 보인 것과 동일한 형태의 복사가 진행된다. 즉 인자의 전달과정에서, 그리고 값의 반환과정에서 구조체의 멤버로 선언된 배열도 
// 통째로 복사가 된다. 
// 04번에서 continue
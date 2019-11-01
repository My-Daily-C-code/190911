// StructFunctionCallByRef
#include <stdio.h>
#pragma error (disable: 4996)

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void OrgSymTrans(Point *ptr) // ���� ��Ī 9��
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
	OrgSymTrans(&pos); // pos�� ���� ���� ��Ī �̵� ��Ų��.
	ShowPosition(pos);
	OrgSymTrans(&pos); // pos�� ���� ���� ��Ī �̵� ��Ų��.
	ShowPosition(pos);
	return 0;
}

// �� ������ 9�࿡ ���ǵ� �Լ����� ���̴� �ٿ� ���� ����ü�� ������ ������ �Ű������� ������ �Ǿ Call-by-reference������ �Լ� ȣ���� ���� �� �� �ִ�. 
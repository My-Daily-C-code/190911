//The example of add & min equatuion in struct
#include <stdio.h>
#pragma error (disable: 4996)

typedef struct point
{
	int xpos;
	int ypos;
} Point;

Point AddPoint(Point pos1, Point pos2) // 9�� 
{
	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;
} // 13�� 

Point MinPoint(Point pos1, Point pos2) // 15��
{
	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;
} // 19��

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

// 9~13��: ����ü ��� xpos���� �׸��� ����ü ��� xpos ���� ������ �̷������� �Լ��� ���� �Ǿ���. �̰��� �ٷ� ���α׷��Ӱ� ������ Point  ����ü ������ ���� ����̴�.
// 15~19��: ����ü ��� xpos���� �׸��� ����ü ��� ypos���� ������ �̷������� �Լ��� ���ǵǾ� �ִ�. �̰��� �ٷ� ���α׷��Ӱ� ������ Point ����ü ������ ���� ����̴�. 
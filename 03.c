// �Լ����� ����ü ���� ���ް� ��ȯ
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
	Point curPos = GetCirrentPosition(); //(24��)
	ShowPosition(curPos); //(25��)
	return 0;

}

// 24��: �Լ��� ��ȯ�ϴ� ������ ����ü ���� cutPos�� �ʱ�ȭ �ϰ� �ִ�. �׷��� �� ���忡�� ȣ�� �ϴ� �Լ��� 19�࿡�� ���α׷� ����ڷκ��� �Է� ���� 
// ��ġ ������ �ʱ�ȭ �� ����ü ���� cen�� ��ȯ�ϰ� �ִ�. �� ��� ���� cen�� ����� ����� ���� ���� curPos�� ����� ������ ����(����) �ȴ�

// 25��: �Լ��� ȣ�� �ϸ鼭 ���� curPos�� ���ڸ� �����ϰ� �ִ�. ���� ���� curPos�� ����� ���� 9���� �Ű����� pos�� ������ ����(����) �ȴ�. 
// ����ü�� ����� �迭�� ����Ǿ �� �������� ���� �Ͱ� ������ ������ ���簡 ����ȴ�. �� ������ ���ް�������, �׸��� ���� ��ȯ�������� ����ü�� ����� ����� �迭�� 
// ��°�� ���簡 �ȴ�. 
// 04������ continue
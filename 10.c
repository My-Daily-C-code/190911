// ��ø�� ����ü�� ���ǿ� ������ ����
#include <stdio.h>
#pragma error (disable: 4996)

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct circle
{
	Point cen; // 3�࿡ ���ǵ� ����ü�� ������ ����� �����Ͽ���. 
	double rad;
} Circle;

void ShowCircleInfo(Circle *cptr)
{
	printf("[%d %d]\n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius: %g\n\n", cptr->rad);
}

int main()
{
	Circle c1 = { { 1, 2 }, 3.5 }; // ����ü ������ ����� ���� �� ���, �̷��� �߰�ȣ�� �̿��ؼ� ����ü ������ �ʱ�ȭ�� ���� ���� �� ����.
	Circle c2 = { 2, 4, 3.9 }; // �߰�ȣ�� �̿��ؼ� ����ü ������ �ʱ�ȭ�� ���� ���� ������, ������� �ʱ�ȭ �ȴ�. Circle ����ü�� ���� ��ܿ� �����ϴ� ������ Point ����ü �����ε�, Point ����ü ������ ù ��° ����� xpos�̴� xpos�� ���� �ʱ�ȭ �ȴ�. �׸��� �̾ ypos�� �ʱ�ȭ �ȴ�. 
	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);
	return 0;
}
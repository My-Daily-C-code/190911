// ����ü ������ ������� ������ ����
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
	pos2 = pos1; // pos1�� ��� �� pos2�� ����� ���簡 ���� �ȴ�.

	printf("Size: %d\n", sizeof(pos1));  // pos1�� ��ü ũ�⸦ ��ȯ
	printf("[%d %d]\n", pos1.xpos, pos1.ypos);
	printf("Size: %d\n", sizeof(pos2));
	printf("[%d %d\'n", pos2.xpos, pos2.ypos);

	return 0;
}
// �̹� ������ ���Ͽ� ����ü ���� �� ���� ������ ����� �ɹ� �� ����� ���簡 �̷����� Ȯ�� �Ͽ���.
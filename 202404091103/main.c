#include <stdio.h>

int main() {
	// ��
	int x = 0;
	int y = 0;

	// �簢�� �ڽ�
	int topLeftX = 0;
	int topLeftY = 0;

	int topRightX = 10;
	int topRightY = 10;

	printf("�� X�� ���� �Է��ϼ���: \n");
	scanf_s("%d", &x);
	printf("�� X�� ���� �Է��ϼ���: \n");
	scanf_s("%d", &y);

	// (x, y)�� �簢��(0, 0) ~ (10, 10) ���̿� �ִ��� ��������
	// �Ǵ��ϴ� ������ ���弼��.
	
	int rec = (x >= topLeftX) && (y >= 0) && (toY <= 10) && (topRightY <= 10);

	printf("X:(%d, %d)\nY:(%d, %d)\n", topLeftX, topLeftY, topRightX, topRightY);

	if (rec)
	{
		printf("�簢��(0, 0) ~ (10, 10) ���̿� �ֽ��ϴ�.\n");
	}
	else
	{
		printf("�簢��(0, 0) ~ (10, 10) ���̿� �����ϴ�.\n");
	}
	
	return 0;
}
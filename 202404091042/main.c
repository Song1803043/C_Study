#include <stdio.h>

// ���迬������ ������ ����� ������ Ÿ���� ����
// ���������� �ǿ������� ������ Ÿ���� ����


int main() {
	
	int xvalue = 0;

	printf("������ �������� �Է��ϼ���:\n");
	scanf_s("%d", &xvalue);

	int ret = (0 < xvalue) && (xvalue < 10);

	if (ret)
	{
		printf("x:%d�� 0�� 10���̿� �ִ�.\n", xvalue);
	}
	else
	{
		printf("x:%d�� 0�� 10 ���̿� ����.\n", xvalue);
	}

	
	return 0;
}
#include <stdio.h>

int main() {
	// ��ȣ������
	int a = 20;
	printf(" a = %d\n", a);

	a = -a;
	printf(" a = %d\n", a);

	// ���迬����
	// <, >, <=, >= , ==, !=
	int b = 20;
	int c = 30;

	int ret = b < c; // ���迬������ ������ ������� DataType��?
					// ����(true / false)
					// C������ �� Ÿ��(bool)�� �����ϴ�.
					// C������ �������� ������ ������ ó���մϴ�.
					// 0�� ����, 0�̿��� ���� ������ �پƵ帮�� Ư¡�� �ֽ��ϴ�.
	printf(" b:%d  < c:%d = %d\n", b, c, ret);

	ret = b > c;
	printf(" b:%d  > c:%d = %d\n", b, c, ret);

	ret = b <= c;
	printf(" b:%d <= c:%d = %d\n", b, c, ret);

	ret = b >= c;
	printf(" b:%d >= c:%d = %d\n", b, c, ret);

	ret = b == c;
	printf(" b:%d == c:%d = %d\n", b, c, ret);

	ret = b != c;
	printf(" b:%d != c:%d = %d\n", b, c, ret);

	return 0;
}
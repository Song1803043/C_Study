#include <stdio.h>

int main() {
	int a = 20;
	int b = 30;
	int ret = 0;

	ret = a + b;
	printf(" %d + %d = %d\n",a,b, ret);

	ret = a - b;
	printf(" %d - %d = %d\n", a, b, ret);

	ret = a * b;
	printf(" %d * %d = %d\n", a, b, ret);

	a = 1;
	b = 2;

	// ���� / ���� = ������ ����
	// �Ǽ��� ������� �������� �ǿ������� ������ �Ǽ��� ��ȯ�ؼ�
	// ������ �ؾ��մϴ�.

	ret = a / b;
	printf(" %d / %d = %d\n", a, b, ret);

	float fret = a / b ;
	printf(" %d / %d = %f\n", a, b, fret);

	fret = a / (float)b;
	printf(" %d / %d = %f\n", a, b, fret);

	return 0;
}
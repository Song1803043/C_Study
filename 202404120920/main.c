#include <stdio.h>

int main()
// ��ǥ ������
// ������ �̾ ���� ���
{
	int a = 0, b = 10, c = 100;

	printf("a = %d. ", a), printf("b = %d. ", b), printf("c = %d. ", c);

	// sizeof ������
	// �������̳� ������ Ÿ��(int, double...)� ����Ͽ�
	// ������ DataType�� byte������ ����� ���Ҷ� ����մϴ�.
	// ��, ������ �� �۵��ϴ� �����ڰ� �ƴϰ� �������Ͽ� ����������
	// ����� �ܰ迡�� �۵��ϴ� ������ �Դϴ�.
	// �����߿� ������ ����� ���ϴ� �뵵�� ����Ͻø� �ȵ˴ϴ�.

	// DataType
	printf("short = %d\n", sizeof(short));
	printf("unsigned int = %d\n", sizeof(unsigned int));
	printf("float = %d\n", sizeof(float));
	printf("double = %d\n", sizeof(double));


	// ������ ������
	short cc;
	unsigned int d;
	float e;
	double f;

	printf("���� c�� byte �������: %d\n", sizeof(cc));
	printf("���� d�� byte �������: %d\n", sizeof(d));
	printf("���� e�� byte �������: %d\n", sizeof(e));
	printf("���� f�� byte �������: %d\n", sizeof(f));



	return 0;
}
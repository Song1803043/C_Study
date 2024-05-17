#include <stdio.h>
// ������ ����
// ���ٹ���, ���ӱⰣ

// �Լ��� ȣ�� �Ҷ� ���ڰ��� �޴� �Ű������� ���ú���, �ڵ�����

int add(int a, int b)
{
	int temp = 0; // ���� ����, �ڵ�����

	temp = a + b;

	return temp;
}

int SetScore(int value)
{
	static int sum = 0;	// ���ú���, �ڵ����� sum ������ �ڵ��������� SetScore�Լ��� ȣ�� �ɶ� ����
						// ���Ӱ� ��������ϴ�.
						// ������ ���� ���� �� �� �����ϴ�.

						// �ڵ����� �տ� static �̶�� keyword�� ���̸� ������ Ʋ�����ϴ�.
						// ���ٹ������� �鿡���� ���ú���
						// ���ӱⰣ���� �鿡���� ��������
						// ���������� �Լ� ȣ���� ������ sum�̶�� ��������� ������� �ʽ��ϴ�.
						// �������� �Լ��� ��ó�� ȣ��� �� ��������� ���α׷��� ����ɶ� �Ҵ� ���������� ������ϴ�.
					

	sum += value;	// ����

	return sum;
}


int main()
{
	int a = 20;
	int b = 30;

	int ret = add(a, b);

	for (int i = 0; i < 10; i++)
	{
		SetScore(i);
	}

	ret = SetScore(0);

	printf("SetScore ret = %d\n", ret);


	return 0;
}
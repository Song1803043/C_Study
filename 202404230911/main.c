#include <stdio.h>

int MakeEven(int value)
{
	if (value % 2 == 1)
	{
		value = value + 1;
	}
	return value;
}

int MakeEven2(int value)
{
	return (value % 2 == 0) ? value : value + 1;
}

int MakeEven3(int value)
{
	if (value & 1)
	{
		return value + 1;
	}
	return value;
}


int main()
{
	// �Է¹��� �������� ¦���� �Է¹��� ���� �����ϰ�
	// �Է¹��� �������� Ȧ���� ¦������ ���� �����ϴ� �Լ��� �����
	// ���� �Լ��� �̿��ؼ� ���� ����غ�����.
	int value = 0;
	
	printf("�������� �Է��ϼ���: ");
	scanf_s("value : %d", &value);

	int result = MakeEven(value);
	printf("%d\n", result);

	result = MakeEven2(value);
	printf("%d\n", result);

	result = MakeEven3(value);
	printf("%d\n", result);

	return 0;
}
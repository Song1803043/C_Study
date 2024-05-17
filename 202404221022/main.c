#include <stdio.h>

// �Լ����� �Լ��� ����̳� ��Ȱ�� ��Ÿ���� �����̳� �ܾ�� �ϴ� ���� �����ϴ�.
int GetMul_3(int min, int max)
{
	int count = 0;
	int first = 0;
	int second = 0;

	if (min > max)
	{
		first = max;
		second = min;
	}
	else
	{
		first = min;
		second = max;
	}
	for (int i = first; i <= second; i++)
	{
		if (i % 3 == 0)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	// ������ �ΰ��� ���ڰ����� ���޹ް�
	// �Ű������� ���޵� �ΰ��� �������� ������ 3�� �����
	// � �ִ��� �����ϴ� �Լ��� ���弼��.
	// ��) int count = func(10, 1000);

	int count = 0;
	int min = 10;
	int max = 100;

	printf("�������� �Է��ϼ���.(minimum Value): ");
	scanf_s("%d", &min);

	printf("�������� �Է��ϼ���.(maximum Value): ");
	scanf_s("%d", &max);

	count = GetMul_3(min, max);
	printf("%d ~ %d ���̿� 3�� ����� %d�� �Դϴ�.\n", min, max, count);

	return 0;
}
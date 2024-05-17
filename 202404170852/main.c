#include <stdio.h>

int main() {
	// 1. ���� for���� �̿��ؼ� ������(2�� ~ 9��)�� ����غ�����.
	// ��� ���� 2 X 1 = 2,
	printf("1������\n");

	for (int i = 2; i < 10; i++)
	{
		printf("\n%d�� ����ϱ�\n", i);
		for (int j = 1; j < 10; j++)
		{
			int sum = i * j;
			printf("%d X %d = %d\n", i,j,sum);
		}
	}

	// 2. �������� 9���� �迭�� ����� �����ϰ� �迭�� ����� ���� 
	// ����غ�����.
	printf("\n2������\n");

	int array1[9];

	for (int i = 0; i < 9; i++)
	{
		array1[i] = (i + 1)* 9;
	}
	for (int i = 0; i < 9; i++)
	{
		printf("9 X %d = %d\n", i + 1, array1[i]);
	}



	// 3. �������� 2�� ~ 9�ܱ��� �迭�� �����ϰ� �迭�� ����� ����
	// ����غ�����..
	printf("\n3������\n");

	int Gugu[72];

	for (int dan = 0; dan < 8; dan++)
	{
		for (int value = 0; value < 9; value++)
		{
			Gugu[dan * 9 +  value] = (dan+2) * (value+1);
		}
	}

	for (int dan = 0; dan < 8; dan++)
	{
		printf("\n%d�� ����ϱ�\n", dan+2);
		for (int value = 0; value < 9; value++)
		{
			printf("%d X %d = %d\n", dan + 2, value + 1,Gugu[dan * 9 + value]);
		}
	}

	// 4. �������� 2�� ���� 9�ܱ��� �����ϰ�
	// �ܼ��� �Է¹޾Ƽ� �迭�� ����� �ܼ��� ����غ�����...
	printf("\n4������\n");
	
	int an;

	printf("��¹��� �ܼ��� �Է��Ͻÿ�: ");
	scanf_s("%d", &an);

	if (an >= 2 && an <= 9)
	{
		for (int i = 0; i < 9; i++)
		{
			printf("%d X %d = %d\n", an, i + 1, Gugu[(an -2) * 9 + i]);
		}
	}
	else
	{
		printf("�ܼ��� �߸� �Է��Ͽ����ϴ�.");
	}
	return 0;
}
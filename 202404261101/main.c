#include <stdio.h>

int main()
{
	// ���� 1.
	// ������ �迭�� ����� ������ 2 ~ 9���� ���� �����ϰ�
	// ���� ������ �迭�� ���� ����غ����� 2~9�ܱ��� ���

	int arrayGugu[8][9];
	
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			arrayGugu[i][j] = i+2 * j+1;
			printf("%d x %d = %d\n", i+2, j+1, arrayGugu[i][j]);
		}
	}




	// ���� 2.
	// �ܼ��� �Է¹ް�
	// �迭�� ����� ������ �ش� �ܼ��� ����Ͻÿ�
	int a;

	printf("�ܼ��� �Է��ϼ���: ");
	scanf_s("%d", &a);

	if (10> a && a > 1)
	{
		for (int j = 0; j < 9; j++)
		{
			printf("%d x %d = %d\n", a, j+1, arrayGugu[a][j]);
		}
	}
	else
	{
		printf("�ܼ��� �߸� �Է��Ͽ����ϴ�.");
	}


	// ���� 1,2���� �Լ��� �и��ϼ���.
	


	return 0;
}
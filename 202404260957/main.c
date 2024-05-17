#include <stdio.h>

// void twoDiArray(int parray[][5], int column, int row)
void twoDiArray(int(*parray)[5], int column, int row)
{
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < row; j++)
		{
			parray[i][j] = i * row + j;
		}
	}
};

// ����Լ�
void PrintArray(int(*parray)[5], int column, int row)
{	
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("array[%d][%d] = %d\n", i, j, parray[i][j]);
		}
	}
}


int main()
{
	int array[5][5];

	int(*parray)[5];

	// ���� 1.
	// array ������ �迭�� 0 ~ 24���� �����ϴ� �Լ��� ����� ���� �����Ͻÿ�.

	twoDiArray(array, 5, 5);

	// ���� 2.
	// array ������ �迭�� ����� ���� ����ϴ� �Լ��� ����� array �迭��
	// ����� ���� ����غ�����.
	
	PrintArray(array, 5, 5);

	return 0;
}
#include <stdio.h>


int main()
{
	int array2[5];		// ������ �迭

	int array[5][5];	// ������ �迭

	// ������ �迭 array�� �迭���� ������ Ÿ���� ��� �ɱ��?
	int(*parray)[5];

	parray = array;

	parray = parray + 1;	// parray ������ 2020����

	array[1][1] = 100;		// �迭��

	*(*(array + 1) + 1) = 100;	// �����ͽ�


	array[2][2] = 4000;		// �迭��

	*(*(array + 2) + 2) = 4000;	// �����ͽ�


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			array[i][j] = i * 5 + j;			// �迭��
			*(*(array + i) + j) = i * 5 + j;	// �����ͽ�
		}
	}

	printf("������ �迭\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("array[%d][%d] = %d\n", i, j, array[i][j]);
		}
	}

	printf("\n");
	printf("������ �迭\n");
	int* parray1 = (int*)array;	// int(*)[5] -> int* ����ȯ

	for (int i = 0; i < 25; i++)
	{
		printf("parray1[%d] = %d\n", i, parray1[i]);
	}



	return 0;
}
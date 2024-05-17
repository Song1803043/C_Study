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

// 출력함수
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

	// 문제 1.
	// array 이차원 배열에 0 ~ 24까지 저장하는 함수를 만들고 값을 저장하시오.

	twoDiArray(array, 5, 5);

	// 문제 2.
	// array 이차원 배열에 저장된 값을 출력하는 함수를 만들고 array 배열에
	// 저장된 값을 출력해보세요.
	
	PrintArray(array, 5, 5);

	return 0;
}
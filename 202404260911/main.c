#include <stdio.h>


int main()
{
	int array2[5];		// 일차원 배열

	int array[5][5];	// 이차원 배열

	// 이차원 배열 array의 배열명은 테이터 타입이 어떻게 될까요?
	int(*parray)[5];

	parray = array;

	parray = parray + 1;	// parray 변수는 2020번지

	array[1][1] = 100;		// 배열식

	*(*(array + 1) + 1) = 100;	// 포인터식


	array[2][2] = 4000;		// 배열식

	*(*(array + 2) + 2) = 4000;	// 포인터식


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			array[i][j] = i * 5 + j;			// 배열식
			*(*(array + i) + j) = i * 5 + j;	// 포인터식
		}
	}

	printf("이차원 배열\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("array[%d][%d] = %d\n", i, j, array[i][j]);
		}
	}

	printf("\n");
	printf("일차원 배열\n");
	int* parray1 = (int*)array;	// int(*)[5] -> int* 형변환

	for (int i = 0; i < 25; i++)
	{
		printf("parray1[%d] = %d\n", i, parray1[i]);
	}



	return 0;
}
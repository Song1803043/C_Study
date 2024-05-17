#include <stdio.h>
#include <stdlib.h>


// 변수의 종류
// 변수의 선언위치나 사용된 키워드에 따라서 변수의 성격이 다릅니다.

int global = 0;	// 외부변수, 전역변수

// 함수에 인자를 전달받는 변수 => 매개변수(로컬변수, 자동변수)
void func(int a, int b) 
{

}

int main()
{
	int local = 0;	// 로컬변수(지역변수), 자동변수

	static int vari = 0; // 로컬변수(지역변수), 정적변수

	// 동적변수
	// 실행중에 메모리공간이 필요할때 동적메모리 공간을 사용합니다.
	// 동적메모리공간은 OS에게 요청해서 필요한 크기의 공간을 할당받습니다.
	// 동적메모리공간은 사용한 후에 반드시 반납처리를 하셔야 합니다.
	// 동적메모리공간을 할당 받을때는 malloc, calloc, realloc 함수를 사용
	// 동적메모리공간을 반납처리할대는 free 함수를 사용합니다.

	int count = 0;
	printf("저장하실 정수의 갯수를 입력하세요: ");
	scanf_s("%d", &count);

	int* parray = (int*)malloc(sizeof(int) * count);

	for (int i = 0; i < count; i++)
	{
		parray[i] = i;
	}

	for (int i = 0; i < count; i++)
	{
		printf("parray[%d] = %d\n", i, parray[i]);
	}

	printf("\n\nint 형 저장공간을 double형 저장공간으로 변경\n");

	double* pdarray = (double*)parray; // int* -> double*

	for (int i = 0; i < count / 2; i++)
	{
		pdarray[i] = i * 3.456; // double 형 값을 저장
	}

	for (int i = 0; i < count / 2; i++)
	{
		printf("pdarray[%d] = %lf\n", i, pdarray[i]);
	}
	
	free(pdarray); // 동적 메모리 공간을 반납처리(반드시 동적메모리 공간을 반납처리 해야함);


	return 0;
}
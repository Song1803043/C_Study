#include <stdio.h>

// 데이터 타입을 알아야 변수 만들 수 있다
// 변수가 저장되어있는 주소값은 변수의 데이터 타입
// int * int형이 저장된 주소값
// 포인터


int main()
{
	int a;	// 메모리 공간에 4byte짜리 정수 저장하는 공간을 할당해줘
			// 그리고 그 공간의 이름을 a라고 하겠어.
	a = 20;	

	printf("&a = %p\n", &a);
	
	// C언어에는 메모리 공간의 주소값을 다루는 데이터 타입을 가지고 있습니다.
	// 그 데이터 타입을 포인터형이라고 합니다. (포인터는 어딘가를 가르킨다는 뜻)
	// 포인터형은 메모리 공간상에 어딘가를 가리키는 메모리 주소를 저장하는 데이터 타입입니다.
	
	int* pa;	// int* (int형 포인터) int값이 저장된 공간의 주소값
	pa = &a;	
	
	int** ppa;	// int* (int형 포인터 포인터) int값이 저장된 공간의 주소값을 저장하는 주소값
	ppa = &pa;
	// 포인터 형 변수를 만들때 사용하는 *(asterisk)는 포인터 형지정자
	// 주소값 앞에 쓰는 *(asterisk)는 포인터 연산자로 사용 
	
	int*** pppa; // int* (int형 포인터 포인터) int값이 저장된 공간의 주소값을 저장하는 주소값을 저장하는 주소값
	pppa = &ppa;


	***pppa;
	***&ppa;
	**ppa;
	**&pa;
	*pa;
	*&a;
	a;


	printf("주소값 출력\n");
	printf("&***pppa = %p\n", &***pppa);
	printf("&***&ppa = %p\n", &**&ppa);
	printf("&**ppa = %p\n", &**ppa);
	printf("&**&pa = %p\n", &**&pa);
	printf("&*pa = %p\n", &*pa);
	printf("&*&a = %p\n", &*&a);
	printf("&a = %p\n", &a);


	***pppa = 4000;

	printf("\n\n저장하고 있는 값을 출력\n");
	printf("***pppa = %d\n", ***pppa);
	printf("***&ppa = %d\n", ***&ppa);
	printf("**ppa = %d\n", **ppa);
	printf("**&pa = %d\n", **&pa);
	printf("*pa = %d\n", *pa);
	printf("*&a = %d\n", *&a);
	printf("a = %d\n", a);


	return 0;
}
//메모리 공간 상에 주소값을 저장하는 데이터 타입을 가지고 있음
//이걸 포인터형이라 함
//&a 주소연산자  a변수의 주소값을 돌려줌

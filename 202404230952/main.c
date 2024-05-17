#include <stdio.h>
#include "globaltest.h"

// 변수의 종류
// 접근범위, 존속기간 으로 변수를 구분하기도 합니다.
// 변수를 만드는 위치, 사용하는 키워드에 따라서 변수의 성격이 틀려집니다.

static int global = 0;	// 외부변수, 전역변수
						// 외부변수는 프로그램이 실행될때 만들어지고
						// 프로그램이 종료될때 없어집니다.

// 외부변수는 될 수 있으면 사용하지 말라고 합니다.(권고사항)
// 외부변수는 남용하면 오류찾기가 어렵습니다.
// 외부변수는 정의된 파일에서만 접근하도록 하는 것이 좋습니다.(static 키워드)


void PrintGlobal()
{
	printf("PrintGlobal Function global = %d\n", global);
}

int main()
{
	int a;	// 지역변수(로컬변수), 자동변수
	a = 20;

	int b = 20;

	{
		int a;	// 진역변수(로컬변수), 자동변수
		a = 200;
		
		int c = 1000;

		printf("a = %d, b = %d, c = %d\n", a, b, c);
	}

	 // c = 2000; // c 변수는 자신이 정의된 범위가 닫혔기 때문에 없어졌습니다.

	global = 200000; // 전역변수는 프로그램 어디서나 접근가능

	printf("global = %d\n", global);


	SetGlobal2(40000);
	PrintGlobal2();
	
	return 0;
}
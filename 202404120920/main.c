#include <stdio.h>

int main()
// 쉼표 연산자
// 문장을 이어서 쓸때 사용
{
	int a = 0, b = 10, c = 100;

	printf("a = %d. ", a), printf("b = %d. ", b), printf("c = %d. ", c);

	// sizeof 연산자
	// 변수명이나 데이터 타입(int, double...)등에 사용하여
	// 변수나 DataType의 byte단위의 사이즈를 구할때 사용합니다.
	// 단, 실행할 때 작동하는 연산자가 아니고 컴파일하여 실행파일을
	// 만드는 단계에서 작동하는 연산자 입니다.
	// 실행중에 변수의 사이즈를 구하는 용도로 사용하시면 안됩니다.

	// DataType
	printf("short = %d\n", sizeof(short));
	printf("unsigned int = %d\n", sizeof(unsigned int));
	printf("float = %d\n", sizeof(float));
	printf("double = %d\n", sizeof(double));


	// 변수의 사이즈
	short cc;
	unsigned int d;
	float e;
	double f;

	printf("변수 c의 byte 사이즈는: %d\n", sizeof(cc));
	printf("변수 d의 byte 사이즈는: %d\n", sizeof(d));
	printf("변수 e의 byte 사이즈는: %d\n", sizeof(e));
	printf("변수 f의 byte 사이즈는: %d\n", sizeof(f));



	return 0;
}
#include <stdio.h>

int main() {
	int a = 20;
	int b = 30;
	int ret = 0;

	ret = a + b;
	printf(" %d + %d = %d\n",a,b, ret);

	ret = a - b;
	printf(" %d - %d = %d\n", a, b, ret);

	ret = a * b;
	printf(" %d * %d = %d\n", a, b, ret);

	a = 1;
	b = 2;

	// 정수 / 정수 = 정수가 나옴
	// 실수로 결과값을 받으려면 피연산자의 한쪽을 실수로 변환해서
	// 연산을 해야합니다.

	ret = a / b;
	printf(" %d / %d = %d\n", a, b, ret);

	float fret = a / b ;
	printf(" %d / %d = %f\n", a, b, fret);

	fret = a / (float)b;
	printf(" %d / %d = %f\n", a, b, fret);

	return 0;
}
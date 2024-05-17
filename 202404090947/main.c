#include <stdio.h>

int main() {
	// 부호연산자
	int a = 20;
	printf(" a = %d\n", a);

	a = -a;
	printf(" a = %d\n", a);

	// 관계연산자
	// <, >, <=, >= , ==, !=
	int b = 20;
	int c = 30;

	int ret = b < c; // 관계연산자의 연산의 결과값의 DataType은?
					// 논리값(true / false)
					// C언어에서는 논리 타입(bool)이 없습니다.
					// C언어에서는 정수값을 가지고 논리값을 처리합니다.
					// 0은 거짓, 0이외의 값을 참으로 바아드리는 특징이 있습니다.
	printf(" b:%d  < c:%d = %d\n", b, c, ret);

	ret = b > c;
	printf(" b:%d  > c:%d = %d\n", b, c, ret);

	ret = b <= c;
	printf(" b:%d <= c:%d = %d\n", b, c, ret);

	ret = b >= c;
	printf(" b:%d >= c:%d = %d\n", b, c, ret);

	ret = b == c;
	printf(" b:%d == c:%d = %d\n", b, c, ret);

	ret = b != c;
	printf(" b:%d != c:%d = %d\n", b, c, ret);

	return 0;
}
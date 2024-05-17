#include <stdio.h>

int main()
// xor : exclusive or (베타적 or) 본래 값으로 되돌릴 때 주로 사용
{
	unsigned char a = 1;
	unsigned char b = 2;
	unsigned char c = 3;

	c = a ^ b;
	// 00000001		:a
	// 00000010		:b
	// 00000011		:a ^ b => c

	// 00000011		:a ^ b => c
	// 00000010		:c ^ b;
	// 00000001		:a

	// 00000011		:a ^ b => c
	// 00000001		:a
	// 00000010		:b


	// 문제 1.
	// xor 연산자와 a 변수와 b 변수만을 사용해서
	// a 변수의 값과 b 변수의 값을 바꾸세요...
	// 다른 변수는 사용하면 안됩니다.

	printf("before a = %d, b = %d\n", a, b);

	a = a ^ b;		// 0000001 00000010 = 00000011
	b = b ^ a;		// 0000011 00000010 = 00000001
	a = a ^ b;		// 0000011 00000001	= 00000010
	printf(" after a = %d, b = %d", a, b);



	return 0;
}
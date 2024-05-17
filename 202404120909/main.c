#include <stdio.h>

int main()
// xor : exclusive or (��Ÿ�� or) ���� ������ �ǵ��� �� �ַ� ���
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


	// ���� 1.
	// xor �����ڿ� a ������ b �������� ����ؼ�
	// a ������ ���� b ������ ���� �ٲټ���...
	// �ٸ� ������ ����ϸ� �ȵ˴ϴ�.

	printf("before a = %d, b = %d\n", a, b);

	a = a ^ b;		// 0000001 00000010 = 00000011
	b = b ^ a;		// 0000011 00000010 = 00000001
	a = a ^ b;		// 0000011 00000001	= 00000010
	printf(" after a = %d, b = %d", a, b);



	return 0;
}
#include <stdio.h>

int main()
{
	int a;
	a = 20;

	*&a = 1000;

	int* pa = &a;
	
	// pa에 저장된 값을 저장하는 변수 pb를 만들고
	// pb변수로 a변수의 값을 10000으로 변경하고 a변수의 값을 출력해보세요

	int* pb;
	pb = pa;

	*pb = 10000;
	

	printf("*pa = %d\n", *pa);
	printf("*pb = %d\n", *pb);
	printf("a = %d\n", a);


	return 0;
}
#include <stdio.h>

int main()
{
	int a;
	a = 20;

	*&a = 1000;

	int* pa = &a;
	
	// pa�� ����� ���� �����ϴ� ���� pb�� �����
	// pb������ a������ ���� 10000���� �����ϰ� a������ ���� ����غ�����

	int* pb;
	pb = pa;

	*pb = 10000;
	

	printf("*pa = %d\n", *pa);
	printf("*pb = %d\n", *pb);
	printf("a = %d\n", a);


	return 0;
}
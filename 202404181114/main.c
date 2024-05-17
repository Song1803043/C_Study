#include <stdio.h>

int main()
{
	int a = 20;
	int b = 30;

	int* pa = &a;
	int* pb = &b;

	int** ppa = &pa;	
	int** ppb = &pb;

	printf("**ppa = %d\n", **ppa);
	printf("**ppb = %d\n", **ppb);


	// 1. ���� pa�� pb�� ���� �ٲ㼭
	// **ppa�� b�� ���� **ppb�� a�� ���� ����Ű���� �غ�����.

	printf("\n\n1��\n");
	* pa = &b;
	* pb = &a;
	
	** ppa = &pa;
	** ppb = &pb;
	
	int** temp = **ppa;
	** ppa = ** ppb;
	** ppb = ** temp;


	printf("**ppa = %d\n", **ppa);
	printf("**ppb = %d\n", **ppb);


	// 2. ���� ppa�� ppb�� ���� �ٲ㼭
	// **ppa�� b�� ���� **ppb�� a�� ���� ����Ű���� �غ�����.
	printf("\n\n2��\n");

	return 0;
}
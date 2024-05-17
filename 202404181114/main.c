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


	// 1. 변수 pa와 pb의 값을 바꿔서
	// **ppa가 b의 값을 **ppb가 a의 값을 가리키도록 해보세요.

	printf("\n\n1번\n");
	* pa = &b;
	* pb = &a;
	
	** ppa = &pa;
	** ppb = &pb;
	
	int** temp = **ppa;
	** ppa = ** ppb;
	** ppb = ** temp;


	printf("**ppa = %d\n", **ppa);
	printf("**ppb = %d\n", **ppb);


	// 2. 변수 ppa와 ppb의 값을 바꿔서
	// **ppa가 b의 값을 **ppb가 a의 값을 가리키도록 해보세요.
	printf("\n\n2번\n");

	return 0;
}
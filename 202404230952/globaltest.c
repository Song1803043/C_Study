#include <stdio.h>

extern int global;	// global 이라는 변수가 외부에 있어라는 정보를 제공 

void PrintGlobal2()
{
	printf("PrintGlobal2 : global = %d\n", global);
}

void SetGlobal2(int value)
{
	global = value;
}

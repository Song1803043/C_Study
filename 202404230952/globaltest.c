#include <stdio.h>

extern int global;	// global �̶�� ������ �ܺο� �־��� ������ ���� 

void PrintGlobal2()
{
	printf("PrintGlobal2 : global = %d\n", global);
}

void SetGlobal2(int value)
{
	global = value;
}

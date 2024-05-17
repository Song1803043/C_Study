#include <stdio.h>

int main()
{
	unsigned char ch = 'A';
	if (ch == 'A')		// 이중 조건문
	{
		printf("ch의 값은 A문자 입니다.\n");
	}
	else
	{
		printf("ch의 값은 A문자가 아닙니다.\n");
	}

	// if문에 붙어있는 명령어가 한줄인 경우 {}(중괄호 블럭)을 생략 가능
	if (ch == 'B')
		printf("ch의 값은 B문자 입니다.\n");
	else
		printf("ch의 값은 B문자가 아닙니다.\n");

	int a = 20;
	int b = 30;

	if (a < b) 
	{
		printf("a: %d가 b: %d보다 작다.\n", a, b);
	}
	else
	{
		printf("a: %d가 b: %d보다 크거나 같다.\n", a, b);
	}

	if (b - 30)		// 조건식대신 정수식도 사용가능합니다.
	{
		if (b < 30)
		{
			printf("b가 30보다 작다.\n");
		}
		else
		{
			printf("b가 30보다 크거나 같다.\n");
		}
	}
	else
	{
		printf("b는 30이다.");
	}

	return 0;
}
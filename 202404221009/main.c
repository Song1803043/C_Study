#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

float div(int a, int b)
{
	return a / b;
}

int main()	// main함수는 진입점 함수, entry point
{
	int a = 20;
	int b = 30;

	int ret = 0;

	ret = add(a, b);
	printf("%d + %d = %d\n", a, b, ret);

	ret = sub(a, b);
	printf("%d - %d = %d\n", a, b, ret);

	ret = mul(a, b);
	printf("%d * %d = %d\n", a, b, ret);

	float fret = div(a, b);
	printf("%d / %d = %f\n", a, b, fret);

	return 0;
}
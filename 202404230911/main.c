#include <stdio.h>

int MakeEven(int value)
{
	if (value % 2 == 1)
	{
		value = value + 1;
	}
	return value;
}

int MakeEven2(int value)
{
	return (value % 2 == 0) ? value : value + 1;
}

int MakeEven3(int value)
{
	if (value & 1)
	{
		return value + 1;
	}
	return value;
}


int main()
{
	// 입력받은 정수값이 짝수면 입력받은 값을 리턴하고
	// 입력받은 정수값이 홀수면 짝수값을 만들어서 리턴하는 함수를 만들고
	// 만든 함수를 이용해서 값을 출력해보세요.
	int value = 0;
	
	printf("정수값을 입력하세요: ");
	scanf_s("value : %d", &value);

	int result = MakeEven(value);
	printf("%d\n", result);

	result = MakeEven2(value);
	printf("%d\n", result);

	result = MakeEven3(value);
	printf("%d\n", result);

	return 0;
}
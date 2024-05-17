#include <stdio.h>

void div2(int value1, int base);
int MAX(int num1, int num2);
int MAX1(int num1, int num2);
int MAX2(int num1, int num2);

int main() {
	int number1 = 0;
	int number2 = 0;

	printf("2개의 정수값을 입력하세요.(10 20): ");
	scanf_s("%d %d", &number1, &number2);

	// 두개의 정수값을 입력받아서 입력 받은 두개의 정수 중에 
	// 큰값을 리턴하는 함수를 만들고
	// 만든 함수를 사용해서 입력받으 두 값중 큰값을 출력해보세요.

	int max = MAX(number1, number2);
	printf("%d 와 %d중에 큰수는 %d입니다.\n", number1, number2, max);

	max = MAX1(number1, number2);
	printf("%d 와 %d중에 큰수는 %d입니다.\n", number1, number2, max);

	max = MAX2(number1, number2);
	printf("%d 와 %d중에 큰수는 %d입니다.\n", number1, number2, max);

	div2(number1, number2);


	return 0;
}

void div2(int value1, int base) {
	float divValue = 0.0f;

	if (base == 0)
	{
		return;	// return 문을 만나면 무조건 함수는 종료합니다.
				// 빈 return 문 함수를 종료할 목적으로 사용합니다. 
	}

	divValue = value1 / (float)base;

	printf("%f / %f = %f\n", value1, base, divValue);
}

// 1.
int MAX(int num1, int num2) {
	return (num1 > num2) ? num1 : num2;	// 조건 연산자
}

// 2.
int MAX1(int num1, int num2) {
	if (num1 > num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}

// 3.
int MAX2(int num1, int num2) {
	int max = 0;
	if (num1 > num2)
	{
		max = num1;
	}
	else
	{
		max = num2;
	}
	return max;
}
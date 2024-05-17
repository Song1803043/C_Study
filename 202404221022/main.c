#include <stdio.h>

// 함수명은 함수의 기능이나 역활을 나타내는 문장이나 단어로 하는 것이 좋습니다.
int GetMul_3(int min, int max)
{
	int count = 0;
	int first = 0;
	int second = 0;

	if (min > max)
	{
		first = max;
		second = min;
	}
	else
	{
		first = min;
		second = max;
	}
	for (int i = first; i <= second; i++)
	{
		if (i % 3 == 0)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	// 정수값 두개를 인자값으로 전달받고
	// 매개변수로 전달된 두개의 정수값의 범위에 3의 배수가
	// 몇개 있는지 리턴하는 함수를 만드세요.
	// 예) int count = func(10, 1000);

	int count = 0;
	int min = 10;
	int max = 100;

	printf("정수값을 입력하세요.(minimum Value): ");
	scanf_s("%d", &min);

	printf("정수값을 입력하세요.(maximum Value): ");
	scanf_s("%d", &max);

	count = GetMul_3(min, max);
	printf("%d ~ %d 사이에 3의 배수는 %d개 입니다.\n", min, max, count);

	return 0;
}
#include <stdio.h>
// 변수의 종류
// 접근범위, 존속기간

// 함수를 호출 할때 인자값을 받는 매개변수는 로컬변수, 자동변수

int add(int a, int b)
{
	int temp = 0; // 로컬 변수, 자동변수

	temp = a + b;

	return temp;
}

int SetScore(int value)
{
	static int sum = 0;	// 로컬변수, 자동변수 sum 변수는 자동변수여서 SetScore함수가 호출 될때 마다
						// 새롭게 만들어집니다.
						// 저장한 값을 유지 할 수 없습니다.

						// 자동변수 앞에 static 이라는 keyword를 붙이면 성격이 틀려집니다.
						// 접근범위적인 면에서는 로컬변수
						// 존속기간적인 면에서는 정적변수
						// 정적변수는 함수 호출이 끝나도 sum이라는 저장공간은 사라지지 않습니다.
						// 정적변수 함수가 맨처음 호출될 때 만들어지고 프로그램이 종료될때 할당 변수공간이 사라집니다.
					

	sum += value;	// 누계

	return sum;
}


int main()
{
	int a = 20;
	int b = 30;

	int ret = add(a, b);

	for (int i = 0; i < 10; i++)
	{
		SetScore(i);
	}

	ret = SetScore(0);

	printf("SetScore ret = %d\n", ret);


	return 0;
}
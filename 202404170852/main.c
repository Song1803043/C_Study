#include <stdio.h>

int main() {
	// 1. 이중 for문을 이용해서 구구단(2단 ~ 9단)을 출력해보세요.
	// 출력 형식 2 X 1 = 2,
	printf("1번문제\n");

	for (int i = 2; i < 10; i++)
	{
		printf("\n%d단 출력하기\n", i);
		for (int j = 1; j < 10; j++)
		{
			int sum = i * j;
			printf("%d X %d = %d\n", i,j,sum);
		}
	}

	// 2. 구구단의 9단을 배열을 만들고 저장하고 배열에 저장된 값을 
	// 출력해보세요.
	printf("\n2번문제\n");

	int array1[9];

	for (int i = 0; i < 9; i++)
	{
		array1[i] = (i + 1)* 9;
	}
	for (int i = 0; i < 9; i++)
	{
		printf("9 X %d = %d\n", i + 1, array1[i]);
	}



	// 3. 구구단을 2단 ~ 9단까지 배열에 저장하고 배열에 저장된 값을
	// 출력해보세요..
	printf("\n3번문제\n");

	int Gugu[72];

	for (int dan = 0; dan < 8; dan++)
	{
		for (int value = 0; value < 9; value++)
		{
			Gugu[dan * 9 +  value] = (dan+2) * (value+1);
		}
	}

	for (int dan = 0; dan < 8; dan++)
	{
		printf("\n%d단 출력하기\n", dan+2);
		for (int value = 0; value < 9; value++)
		{
			printf("%d X %d = %d\n", dan + 2, value + 1,Gugu[dan * 9 + value]);
		}
	}

	// 4. 구구단을 2단 부터 9단까지 저장하고
	// 단수를 입력받아서 배열에 저장된 단수를 출력해보세요...
	printf("\n4번문제\n");
	
	int an;

	printf("출력받을 단수를 입력하시오: ");
	scanf_s("%d", &an);

	if (an >= 2 && an <= 9)
	{
		for (int i = 0; i < 9; i++)
		{
			printf("%d X %d = %d\n", an, i + 1, Gugu[(an -2) * 9 + i]);
		}
	}
	else
	{
		printf("단수를 잘못 입력하였습니다.");
	}
	return 0;
}
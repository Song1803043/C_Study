#include <stdio.h>

int main()
{
	// 문제 1.
	// 이차원 배열을 만들고 구구단 2 ~ 9단의 값을 저장하고
	// 값을 저장한 배열의 값을 출력해보세요 2~9단까지 출력

	int arrayGugu[8][9];
	
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			arrayGugu[i][j] = i+2 * j+1;
			printf("%d x %d = %d\n", i+2, j+1, arrayGugu[i][j]);
		}
	}




	// 문제 2.
	// 단수를 입력받고
	// 배열에 저장된 값에서 해당 단수를 출력하시오
	int a;

	printf("단수를 입력하세요: ");
	scanf_s("%d", &a);

	if (10> a && a > 1)
	{
		for (int j = 0; j < 9; j++)
		{
			printf("%d x %d = %d\n", a, j+1, arrayGugu[a][j]);
		}
	}
	else
	{
		printf("단수를 잘못 입력하였습니다.");
	}


	// 문제 1,2번을 함수로 분리하세요.
	


	return 0;
}
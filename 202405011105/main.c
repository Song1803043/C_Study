#include <stdio.h>
#include <stdlib.h>

int main() {

	// 구구단 단수를 입력 받고
	// 동적메모리를 할당 받은 후
	// 해당 단수를 동적메모리에 저장하고 출력하세요...
	int dan = 0;
	int* pGugudan = NULL;

	printf("구구단 단수를 입력하세요(2~9): ");
	scanf_s("%d", &dan);
	

	if (dan < 2 || dan>9)
	{
		printf("단수를 잘못입력하셨습니다.\n");
		return;
	}
	
	pGugudan = (int*)malloc(sizeof(int) * 9);

	for (int i = 0; i < 9; i++)
	{
		pGugudan[i] = dan * (i + 1);
	}

	for (int i = 0; i < 9; i++)
	{
		printf("%d x %d = %d\n", dan, i + 1, pGugudan[i]);
	}
	
	free(pGugudan);
	



	return 0;
}
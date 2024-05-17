#include <stdio.h>

// 관계연산자의 연산의 결과값 데이터 타입은 논리값
// 논리연산자의 피연산자의 데이터 타입은 논리값


int main() {
	
	int xvalue = 0;

	printf("임의의 정수값을 입력하세요:\n");
	scanf_s("%d", &xvalue);

	int ret = (0 < xvalue) && (xvalue < 10);

	if (ret)
	{
		printf("x:%d는 0과 10사이에 있다.\n", xvalue);
	}
	else
	{
		printf("x:%d는 0과 10 사이에 없다.\n", xvalue);
	}

	
	return 0;
}
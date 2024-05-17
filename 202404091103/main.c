#include <stdio.h>

int main() {
	// 점
	int x = 0;
	int y = 0;

	// 사각형 박스
	int topLeftX = 0;
	int topLeftY = 0;

	int topRightX = 10;
	int topRightY = 10;

	printf("점 X의 값을 입력하세요: \n");
	scanf_s("%d", &x);
	printf("점 X의 값을 입력하세요: \n");
	scanf_s("%d", &y);

	// (x, y)가 사각형(0, 0) ~ (10, 10) 사이에 있는지 없는지를
	// 판단하는 로직을 만드세요.
	
	int rec = (x >= topLeftX) && (y >= 0) && (toY <= 10) && (topRightY <= 10);

	printf("X:(%d, %d)\nY:(%d, %d)\n", topLeftX, topLeftY, topRightX, topRightY);

	if (rec)
	{
		printf("사각형(0, 0) ~ (10, 10) 사이에 있습니다.\n");
	}
	else
	{
		printf("사각형(0, 0) ~ (10, 10) 사이에 없습니다.\n");
	}
	
	return 0;
}
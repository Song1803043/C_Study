#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int isLeg = 0;
	int isHand = 0;
	int isHead = 0;
	int isThink = 0;
	int is2eyes = 0;
	int isGugudan = 0;
	
	printf("다리가 있습니까? 거짓:0, 참:1\n");
	scanf_s("%d",&isLeg);
	printf("손이 있습니까?  거짓:0, 참:1\n");
	scanf_s("%d", &isHand);
	printf("머리가 있습니까? 거짓:0, 참:1\n");
	scanf_s("%d", &isHead);
	printf("생각할수 있습니까? 거짓:0, 참:1\n");
	scanf_s("%d", &isThink);
	printf("눈이 2개 있습니까? 거짓:0, 참:1\n");
	scanf_s("%d", &is2eyes);
	printf("구구단을 외울수 있습니까? 거짓:0, 참:1\n");
	scanf_s("%d", &isGugudan);

	int isHuman = isLeg && isHand && isHead && isThink && is2eyes && isGugudan;

	if (isHuman) {
		printf("인간 입니다.\n");
	}
	else if (isGugudan == 0)
	{
		printf("지능이 떨어지는 인간 입니다.\n");
	}
	else {
		printf("인간이 아닙니다.\n");
	}

	return 0;
}
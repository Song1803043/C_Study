#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int isLeg = 0;
	int isHand = 0;
	int isHead = 0;
	int isThink = 0;
	int is2eyes = 0;
	int isGugudan = 0;
	
	printf("�ٸ��� �ֽ��ϱ�? ����:0, ��:1\n");
	scanf_s("%d",&isLeg);
	printf("���� �ֽ��ϱ�?  ����:0, ��:1\n");
	scanf_s("%d", &isHand);
	printf("�Ӹ��� �ֽ��ϱ�? ����:0, ��:1\n");
	scanf_s("%d", &isHead);
	printf("�����Ҽ� �ֽ��ϱ�? ����:0, ��:1\n");
	scanf_s("%d", &isThink);
	printf("���� 2�� �ֽ��ϱ�? ����:0, ��:1\n");
	scanf_s("%d", &is2eyes);
	printf("�������� �ܿ�� �ֽ��ϱ�? ����:0, ��:1\n");
	scanf_s("%d", &isGugudan);

	int isHuman = isLeg && isHand && isHead && isThink && is2eyes && isGugudan;

	if (isHuman) {
		printf("�ΰ� �Դϴ�.\n");
	}
	else if (isGugudan == 0)
	{
		printf("������ �������� �ΰ� �Դϴ�.\n");
	}
	else {
		printf("�ΰ��� �ƴմϴ�.\n");
	}

	return 0;
}
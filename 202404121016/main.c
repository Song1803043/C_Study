#include <stdio.h>

int main()
{
	int money = 0;

	printf("�뵷 �ݾ��� �Է��ϼ��� : ");
	scanf_s("%d", &money);


	if (money <= 60000 && money > 40000)
	{
	printf("�籸��\n");
	}
	else if (money > 100000)		// ���� ���ǹ�
	{
		printf("��ȭ\n");
	}
	else if (money <= 100000 && money > 80000)
	{
		printf("������\n");
	}
	else if (money <=  80000 && money > 60000)
	{
		printf("�߱���\n");
	}
	else if (money <= 40000 && money > 20000)
	{
		printf("ī��\n");
	}
	else
	{
		printf("����\n");
	}

	return 0;
}
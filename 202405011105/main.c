#include <stdio.h>
#include <stdlib.h>

int main() {

	// ������ �ܼ��� �Է� �ް�
	// �����޸𸮸� �Ҵ� ���� ��
	// �ش� �ܼ��� �����޸𸮿� �����ϰ� ����ϼ���...
	int dan = 0;
	int* pGugudan = NULL;

	printf("������ �ܼ��� �Է��ϼ���(2~9): ");
	scanf_s("%d", &dan);
	

	if (dan < 2 || dan>9)
	{
		printf("�ܼ��� �߸��Է��ϼ̽��ϴ�.\n");
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
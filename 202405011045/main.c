#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count = 10;
	int input = 0;

	printf("�Է��Ͻ� ������ ������ �Է��ϼ���: ");
	scanf_s("%d", &count);

	char* pstr = (char*)malloc(sizeof(char) * count + 1); // ���� �޸𸮰��� �Ҵ�

	int i = 0;
	for (i = 0; i < count; i++)
	{
		printf("%d��° ���ڸ� �Է��ϼ���: ", 1 + i);
		scanf_s("%*c%c", &input);
		pstr[i] = input;
	}

	pstr[i] = '\0';

	printf("�Է��Ͻ� ���ڿ��� %s�Դϴ�.\n", pstr);

	free(pstr); // �����޸� �Ҵ� ����


	return 0;
}
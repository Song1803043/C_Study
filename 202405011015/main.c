#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count = 10;

	// malloc�� �����޸� �Ҵ� �� �޸� ������ �ʱ�ȭ ���� �ʴ´�.
	int* parray = (int*)malloc(sizeof(int) * count); // ���� �޸� �Ҵ�

	printf("\nmalloc���� �����޸� ����\n");
	// �ʱ�ȭ ���� �ʾ� ������ ���� ��µ�
	for (int i = 0; i < count; i++)
	{
		printf("parray[%d] = %d\n", i, parray[i]);
	}

	free(parray); // ���� �޸� ���� ��ȯ

	// calloc�� �����޸� �Ҵ� �� �޸� ������ �ʱ�ȭ �Ѵ�.
	parray = (int*)calloc(count, sizeof(int));

	printf("\n\ncalloc���� �����޸� ����\n");

	for (int i = 0; i < count; i++)
	{
		printf("parray[%d] = %d\n", i, parray[i]);
	}

	printf("\n\nrealloc���� �����޸� ���Ҵ�\n");

	// realloc�� ���Ҵ�� �޸��� ������ ���Ҵ��Ҷ� ����Ѵ�.
	// ���Ҵ��ϸ鼭 ������ �޸𸮿� �ִ� ���� ���Ҵ�� �޸𸮿� �����Ѵ�.
	parray = realloc(parray, sizeof(int) * count * 2); // �����޸� ���Ҵ�

	for (int i = 0; i < count * 2; i++)
	{
		printf("parray[%d] = %d\n", i, parray[i]);
	}

	free(parray); // �����޸� ��ȯ


	return 0;
}
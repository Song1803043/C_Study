#include <stdio.h>
#include <stdlib.h>


// ������ ����
// ������ ������ġ�� ���� Ű���忡 ���� ������ ������ �ٸ��ϴ�.

int global = 0;	// �ܺκ���, ��������

// �Լ��� ���ڸ� ���޹޴� ���� => �Ű�����(���ú���, �ڵ�����)
void func(int a, int b) 
{

}

int main()
{
	int local = 0;	// ���ú���(��������), �ڵ�����

	static int vari = 0; // ���ú���(��������), ��������

	// ��������
	// �����߿� �޸𸮰����� �ʿ��Ҷ� �����޸� ������ ����մϴ�.
	// �����޸𸮰����� OS���� ��û�ؼ� �ʿ��� ũ���� ������ �Ҵ�޽��ϴ�.
	// �����޸𸮰����� ����� �Ŀ� �ݵ�� �ݳ�ó���� �ϼž� �մϴ�.
	// �����޸𸮰����� �Ҵ� �������� malloc, calloc, realloc �Լ��� ���
	// �����޸𸮰����� �ݳ�ó���Ҵ�� free �Լ��� ����մϴ�.

	int count = 0;
	printf("�����Ͻ� ������ ������ �Է��ϼ���: ");
	scanf_s("%d", &count);

	int* parray = (int*)malloc(sizeof(int) * count);

	for (int i = 0; i < count; i++)
	{
		parray[i] = i;
	}

	for (int i = 0; i < count; i++)
	{
		printf("parray[%d] = %d\n", i, parray[i]);
	}

	printf("\n\nint �� ��������� double�� ����������� ����\n");

	double* pdarray = (double*)parray; // int* -> double*

	for (int i = 0; i < count / 2; i++)
	{
		pdarray[i] = i * 3.456; // double �� ���� ����
	}

	for (int i = 0; i < count / 2; i++)
	{
		printf("pdarray[%d] = %lf\n", i, pdarray[i]);
	}
	
	free(pdarray); // ���� �޸� ������ �ݳ�ó��(�ݵ�� �����޸� ������ �ݳ�ó�� �ؾ���);


	return 0;
}
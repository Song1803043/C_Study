#include <stdio.h>

// ������ �ڵ尡 �ݺ��Ǵ� ��� 
// ������ �ڵ带 �ϳ��� ��� �ϳ��� ������ ����� ����� �ֽ��ϴ�.
// �ݺ������� ���Ǵ� ������ �ڵ带 �ϳ��� �����ݴϴ�.

// �Լ�(function)

// ���뼺
// ��⼺
// ������


// ReturnType �Լ���(�Ű�����) {
//		��ɾ��;
// }

// ReturnType : ������� ��ɾ ó���ϰ� � DataType�� ������� ��ȯ�� ������ ����
//				��ȯ���� ���� ��쿡�� void��� �����Ͻø� �˴ϴ�.
// �Լ��� : �Լ��� ȣ���Ҷ� ����� �̸�.
// �Ű����� : �Լ��� ȣ���Ҷ� �����ϴ� ��(���ڰ�)�� �޴� ����

void PrintMonster5() {
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
}

void PrintMonster(int count) {
	for (int i = 0; i < count; i++)
	{
		printf("Monster\n");
	}
}


// returnType : int
// �Լ��� : add
// �Ű����� : int a, int b
 
int add(int a, int b) {
	int sum = 0;
	sum = a + b;

	return sum;	// return ���� �Լ� ������ ������� �Լ� �ܺη� �����ϴ� ��Ȱ�� �մϴ�.
}


int main()
{
	// ...
	PrintMonster5();
	
	// ...
	PrintMonster5(3);
	

	int a = 20;
	int b = 30;

	int ret = add(a, b);
	printf("%d + %d = %d\n",a,b,ret);

	return 0;
}
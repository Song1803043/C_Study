#include <stdio.h>

void div2(int value1, int base);
int MAX(int num1, int num2);
int MAX1(int num1, int num2);
int MAX2(int num1, int num2);

int main() {
	int number1 = 0;
	int number2 = 0;

	printf("2���� �������� �Է��ϼ���.(10 20): ");
	scanf_s("%d %d", &number1, &number2);

	// �ΰ��� �������� �Է¹޾Ƽ� �Է� ���� �ΰ��� ���� �߿� 
	// ū���� �����ϴ� �Լ��� �����
	// ���� �Լ��� ����ؼ� �Է¹��� �� ���� ū���� ����غ�����.

	int max = MAX(number1, number2);
	printf("%d �� %d�߿� ū���� %d�Դϴ�.\n", number1, number2, max);

	max = MAX1(number1, number2);
	printf("%d �� %d�߿� ū���� %d�Դϴ�.\n", number1, number2, max);

	max = MAX2(number1, number2);
	printf("%d �� %d�߿� ū���� %d�Դϴ�.\n", number1, number2, max);

	div2(number1, number2);


	return 0;
}

void div2(int value1, int base) {
	float divValue = 0.0f;

	if (base == 0)
	{
		return;	// return ���� ������ ������ �Լ��� �����մϴ�.
				// �� return �� �Լ��� ������ �������� ����մϴ�. 
	}

	divValue = value1 / (float)base;

	printf("%f / %f = %f\n", value1, base, divValue);
}

// 1.
int MAX(int num1, int num2) {
	return (num1 > num2) ? num1 : num2;	// ���� ������
}

// 2.
int MAX1(int num1, int num2) {
	if (num1 > num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}

// 3.
int MAX2(int num1, int num2) {
	int max = 0;
	if (num1 > num2)
	{
		max = num1;
	}
	else
	{
		max = num2;
	}
	return max;
}
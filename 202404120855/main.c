#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BitPrint(unsigned char value)
{
	unsigned char mask = 1;
	unsigned char bitValue = 0;

	for (int i = sizeof(unsigned char) * 8 - 1; i >= 0; i--)
	{
		mask = 1;
		mask <<= i;

		bitValue = value & mask;

		if (bitValue)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}

int main()
{
	unsigned char light = 0;	// 00000000
	int roomNumber = 0;			// �� ��ȣ �Է¿�
	int onOff = -1;				// light on/off �Է¿�

	unsigned char mask = 1;		// ��Ʈ�� �ڸ����� ��Ʈ���ϱ� ���� ����


	while (1)
	{
		mask = 1;
		printf("�� ��ȣ�� �Է��ϼ���(exit -1): ");
		scanf_s("%d", &roomNumber);

		if (roomNumber == -1) break;
		
		printf("%d�� ° ���� ���� On(1), ���� Off(0): ", roomNumber);
		scanf_s("%d", &onOff);

		mask <<= roomNumber;

		if (onOff == 1)	// �����ѱ� // maskON
		{
			light = light | mask;
		}
		else
		{
			mask = ~mask;
			light = light & mask;
		}


		printf("light = %d\n", light);
		BitPrint(light);
		printf("\n");
	}


	return 0;
}
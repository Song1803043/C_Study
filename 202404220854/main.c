#include <stdio.h>

int main()
{
	char str[] = { 'R','E', 'T','S' ,'N', 'O', 'M' };

	// str ���ڹ迭�� "Monster" ���ڿ��� �Ųٷ� ����Ǿ��ֽ��ϴ�.
	// str ���ڹ迭�� ���� "Monster" ������ �����غ�����.

	/*char temp, temp1, temp2, temp4, temp5, temp6;
	temp = str[6];
	temp1 = str[5];
	temp2 = str[4];
	temp3 = str[3];
	temp4 = str[2];
	temp5 = str[1];
	temp6 = str[0];

	str[0] = temp;
	str[1] = temp1;
	str[2] = temp2;
	str[3] = temp3;
	str[4] = temp4;
	str[5] = temp5;
	str[6] = temp6;

	for (int i = 0; i < 7; i++)
	{
		printf("%c", str[i]);
	}*/

	char temp = 0;
	int length = sizeof(str) / sizeof(str[0]);
	
	/*printf("������\n");
	for (int i = 0; i < length; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n\n������\n");*/
	for (int i = 0; i < length/2; i++)
	{
		temp = str[i];
		str[i] = str[length- 1- i];
		str[length - 1 - i] = temp;
	}

	for (int i = 0; i < length; i++)
	{
		printf("%c", str[i]);
	}

	

	return 0;
}
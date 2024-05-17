#include <stdio.h>

int main()
{
	char str[] = { 'R','E', 'T','S' ,'N', 'O', 'M' };

	// str 문자배열에 "Monster" 문자열이 거꾸로 저장되어있습니다.
	// str 문자배열의 값을 "Monster" 순으로 저장해보세요.

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
	
	/*printf("변경전\n");
	for (int i = 0; i < length; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n\n변경후\n");*/
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
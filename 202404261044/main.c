#include <stdio.h>

int main()
{
	int array[5][5][5];

	int(*parray)[5][5];
	
	parray = array;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				parray[i][j][k] = i * 5 * 5 + j * 5 + k;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				printf("parray[%d][%d][%d] = %d\n",i,j,k,parray[i][j][k]);
			}
		}
	}




	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct tagAnimal
{
	int type;
	char name[30];
	float weight;
	float age;
} Animal;

int main()
{
	Animal animalArray[10];

	int length = sizeof(animalArray) / sizeof(animalArray[0]);

	for (int i = 0; i < length; i++)
	{
		int select = i % 3;

		switch (select)
		{
		case 0:
			sprintf(animalArray[i].name, "��_%d",i);
			animalArray[i].type = 0;
			animalArray[i].weight = 200 + (i * 3);
			animalArray[i].age = ((i + 1) * 10) % 5 + 2;

			break;

		case 1:
			sprintf(animalArray[i].name, "����_%d", i);
			animalArray[i].type = 1;
			animalArray[i].weight = 180 + (i * 3);
			animalArray[i].age = ((i + 1) * 10) % 5 + 2;

			break;

		case 2:
			sprintf(animalArray[i].name, "��_%d", i);
			animalArray[i].type = 2;
			animalArray[i].weight = 4 + (i * 3);
			animalArray[i].age = ((i + 1) * 10) % 5 + 2;

			break;
		}
	}

	for (int i = 0; i < length; i++)
	{
		switch (animalArray[i].type)
		{
		case 0:
			printf("��:\n");
			printf("�̸�:%s\n", animalArray[i].name);
			printf("������:%f\n", animalArray[i].weight);
			printf("����:%f\n", animalArray[i].age);
			break;

		case 1:
			printf("����:\n");
			printf("�̸�:%s\n", animalArray[i].name);
			printf("������:%f\n", animalArray[i].weight);
			printf("����:%f\n", animalArray[i].age);
			break;

		case 2:
			printf("��:\n");
			printf("�̸�:%s\n", animalArray[i].name);
			printf("������:%f\n", animalArray[i].weight);
			printf("����:%f\n", animalArray[i].age);
			break;

		default :
			printf("Animal Type Error\n");
			break;
		}
		printf("\n");
	}

	return 0;
}
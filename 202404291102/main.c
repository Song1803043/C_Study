#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct tagStudent {
    char name[30];
    int grade;
    int classNum;
} Student;



Student* SearchName(Student* parray, int length, char findName[]) {
    for (int i = 0; i < length; i++) {
        if (strcmp(findName, parray[i].name) == 0) {
            return &parray[i];
        }
    }

    return NULL;   // ã�� �̸��� ���� ���
}


int SearchName2(Student* parray, int length, char findName[]) {
    for (int i = 0; i < length; i++) {
        if (strcmp(findName, parray[i].name) == 0) {
            return i;
        }
    }

    return -1;   // ã�� �̸��� ���� ���
}




int main() {
    Student stArray[] = { // ����ü �迭
       {"������", 1, 3},
       {"����", 2, 11},
       {"ȣ����", 2, 8},
       {"�ڳ���", 3, 7},
       {"ħ����", 3, 5},
       {"�Ҵ�", 1, 12}
    };

    // �̸��� �Է� �ް� ���� �迭���� �Է¹��� �̸��� �ش��ϴ�
    // ����Ÿ�� ã�� �ش� �̸��� �л��� �г�� ���� ����ϴ� ���α׷��� ����ÿ�

    char inputName[30];
    int length = sizeof(stArray) / sizeof(stArray[0]);

    while (1) {
        printf("ã�� �̸��� �Է��ϼ���(exit: exit):");
        scanf_s("%s", inputName, sizeof(inputName));

        if (strcmp(inputName, "exit") == 0) {
            printf("�˻��۾��� �����մϴ�.");
            break;
        }

        // �Է¹��� �̸��� ����Ÿ�� ã�� �ڵ� �ۼ�.

        Student* matchData = SearchName(stArray, length, inputName);

        if (matchData != NULL)
        {
            printf("�̸�: %s, �г�: %d, ��: %d\n", matchData->name, matchData->grade, matchData->classNum);
        }
        else
        {
            printf("%s ��/�� �������� �ʽ��ϴ�.\n", inputName);
        }

        int findIndex = SearchName2(stArray, length, inputName);

        if (findIndex != 1)
        {
            printf("�̸�: %s, �г�: %d, ��: %d\n", stArray[findIndex].name, stArray[findIndex].grade, stArray[findIndex].classNum);
        }
        else
        {
            printf("%s ��/�� �������� �ʽ��ϴ�.\n", inputName);
        }



    }

    
    return 0;
}
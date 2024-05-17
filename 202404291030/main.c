#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Monster";   // ���ڿ�
    char str2[] = " is World!"; // ���ڿ�
    char buff[30]; // ���ڹ迭

    // 1. ���ڿ��� ���� ������ ���� �Լ� : strlen
    printf("\nStrlen\n");
    int count = strlen(str);

    printf("str: %s�� ������ ������ %d\n", str, count);

    // 2. ���ڿ� �����Լ� : strcpy
    printf("\n\nstrcpy\n");
    strcpy(buff, str);

    printf("str: %s ���ڿ��� buff: %s�� ������", str, buff);

    // 3. ���ڿ� ���Լ� strcmp ������ 0, �ٸ��� 1 �Ǵ� -1�� ����
    printf("\n\nstrcmp\n");
    int ret = strcmp(str, buff);

    if (ret == 0) {
        printf("str: %s�� buff: %s �� ���ڿ��� ����.\n", str, buff);
    }
    else {
        printf("str: %s�� buff: %s �� ���ڿ��� �ٸ���.\n", str, buff);
    }

    ret = strcmp(str, str2);

    if (ret == 0) {
        printf("str: %s�� str2: %s �� ���ڿ��� ����.\n", str, str2);
    }
    else {
        printf("str: %s�� str2: %s �� ���ڿ��� �ٸ���.\n", str, str2);
    }

    // 4. ���ڿ� �����Լ�: strcat �� ���ڿ��� ��ħ
    printf("\n\nstrcat\n");
    printf("buff: %s�� str2: %s �� ���ڿ��� �����մϴ�.\n", buff, str2);

    strcat(buff, str2);

    printf("buff: %s�� �� ���ڿ��� ���յ�\n", buff);

    // 5. �ҹ��ڸ� �빮�ڷ� �빮�ڸ� �ҹ��ڷ� ����
    printf("\n\ntoupper, tolower\n");
    int ch = toupper('a');

    printf("�빮�ڷ� ����: %c\n", ch);

    ch = tolower('A');

    printf("�ҹ��ڷ� ����:  %c\n", ch);



    return 0;
}
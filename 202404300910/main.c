#include <stdio.h>
// ���ڿ� �Լ� ����� �ǽ�

// 1. ���ڿ��� ���� ���� �����ִ� �Լ� : strlen
// C���� 0�� ����, 0�̿� ���ڴ� ��
int strlen2(char* pstr)
{
    int count = 0;  // ���ڰ��� �����
    while (*pstr)
    {
        count++;
        pstr++;
    }
    return count;
}

// 2. ���ڿ� ���� �Լ� : strcpy
// pdest: ���ڿ� ���� ����
// psrc: ���ڿ��� �ҽ�
// ���ϰ�: ����� ���ڿ��� ���ι��� �ּҰ� 
char* strcpy2(char* pdest, char* psrc) // buff, str
{
    char* pAdress = pdest;
    while (*psrc)
    {
        *pdest = *psrc;
        pdest++;
        psrc++;
    }
    *pdest = NULL;

    return pAdress;
}


// 3. ���ڿ� �����ִ� �Լ� : strcmp
// ���ڿ��� ������ 0�� ����, �ٸ��� 1�� ����
int strcmp2(char* pstr1, char* pstr2)
{
    while (*pstr1)
    {
        if (*pstr1 != *pstr2)
        {
            return 1;
        }
        pstr1++;
        pstr2++;
    }

    if (*pstr2 == '\0')
    {
        return 0;
    }

    return 1;
}



// 4. ���ڿ� str1�� ���ڿ� str2�� �����ϴ� �Լ� : strcat
// pstr1: ���ڿ��� ������ ����
// pstr2: ������ ���ڿ�
// ���ϰ�: ���յ� ���ڿ��� ���ι��� �ּҰ�
char* strcat2(char* pstr1, char* pstr2) {
    char* pOrigin = pstr1;

    while (*pstr1) 
    {
        pstr1++;
    }

    while (*pstr2) 
    {
        *pstr1 = *pstr2;

        pstr1++;
        pstr2++;
    }

    *pstr1 = '\0';

    return pOrigin;
}

// 5. ��ҹ��� �����Լ� : toUpper, toLower
// A(65) ~ Z(90)
// a(97) ~ z(122)
int toUpper(char ch)
{   // �빮�� ����
    int after = ch;
    if (ch >= 'a' && ch <= 'z')
    {
        after = ch - 32;
    }
    return after;
}

int toLower(char ch)
{   // �ҹ��� ����
    int after2 = ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        after2 = ch + 32;
    }
    return after2;
}

int main()
{
    char str[30] = "Monster";
    char buff[30];

    // 1. ���ڿ��� ������ ���� ���� �Լ� strlen2
    int count = strlen2(str);

    printf("str: %s ���ڿ��� ������ ������: %d\n", str, count);

    // 2. ���ڿ� �����Լ� strcpy2
    char* pstr = strcpy2(buff, str);

    printf("buff: %s\n", buff);


    // 3. ���ڿ� ���Լ� strcmp2
    int isSame = 0;

    isSame = strcmp2(str, buff);   // ������ 0�� ����, �ٸ��� 1�� ����

    if (isSame)
    {
        printf("str: %s�� buff: %s �� ���ڿ��� �ٸ���.\n", str, buff);
    }
    else
    {
        printf("str: %s�� buff: %s �� ���ڿ��� ����.\n", str, buff);
    }

    // 4. ���ڿ� �����Լ� strcat2
    char str1[30] = "mon";
    char str2[] = "ster";


    pstr = strcat2(str1, str2);
    printf("str1: %s, str2: %s, pstr: %s\n", str1, str2, pstr);

    // 5. ��ҹ��� �����Լ� toUpper, toLower
    int ch = toUpper('k');

    printf("ch = %c\n", (char)ch);

    ch = toLower('L');

    printf("ch = %c\n", (char)ch);

    return 0;
}
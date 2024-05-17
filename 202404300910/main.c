#include <stdio.h>
// 문자열 함수 만들기 실습

// 1. 문자열의 문자 갯수 세어주는 함수 : strlen
// C언어는 0은 거짓, 0이외 숫자는 참
int strlen2(char* pstr)
{
    int count = 0;  // 문자갯수 저장용
    while (*pstr)
    {
        count++;
        pstr++;
    }
    return count;
}

// 2. 문자열 복사 함수 : strcpy
// pdest: 문자열 복사 공간
// psrc: 문자열의 소스
// 리턴값: 복사된 문자열의 선두번지 주소값 
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


// 3. 문자열 비교해주는 함수 : strcmp
// 문자열이 같으면 0을 리턴, 다르면 1을 리턴
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



// 4. 문자열 str1과 문자열 str2를 병합하는 함수 : strcat
// pstr1: 문자열을 병합할 공간
// pstr2: 병합할 문자열
// 리턴값: 병합된 문자열의 선두번지 주소값
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

// 5. 대소문자 변경함수 : toUpper, toLower
// A(65) ~ Z(90)
// a(97) ~ z(122)
int toUpper(char ch)
{   // 대문자 변경
    int after = ch;
    if (ch >= 'a' && ch <= 'z')
    {
        after = ch - 32;
    }
    return after;
}

int toLower(char ch)
{   // 소문자 변경
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

    // 1. 문자열의 문자의 갯수 세는 함수 strlen2
    int count = strlen2(str);

    printf("str: %s 문자열의 문자의 갯수는: %d\n", str, count);

    // 2. 문자열 복사함수 strcpy2
    char* pstr = strcpy2(buff, str);

    printf("buff: %s\n", buff);


    // 3. 문자열 비교함수 strcmp2
    int isSame = 0;

    isSame = strcmp2(str, buff);   // 같으면 0을 리턴, 다르면 1을 리턴

    if (isSame)
    {
        printf("str: %s와 buff: %s 의 문자열이 다르다.\n", str, buff);
    }
    else
    {
        printf("str: %s와 buff: %s 의 문자열이 같다.\n", str, buff);
    }

    // 4. 문자열 병합함수 strcat2
    char str1[30] = "mon";
    char str2[] = "ster";


    pstr = strcat2(str1, str2);
    printf("str1: %s, str2: %s, pstr: %s\n", str1, str2, pstr);

    // 5. 대소문자 변경함수 toUpper, toLower
    int ch = toUpper('k');

    printf("ch = %c\n", (char)ch);

    ch = toLower('L');

    printf("ch = %c\n", (char)ch);

    return 0;
}
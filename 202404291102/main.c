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

    return NULL;   // 찾는 이름이 없는 경우
}


int SearchName2(Student* parray, int length, char findName[]) {
    for (int i = 0; i < length; i++) {
        if (strcmp(findName, parray[i].name) == 0) {
            return i;
        }
    }

    return -1;   // 찾는 이름이 없는 경우
}




int main() {
    Student stArray[] = { // 구조체 배열
       {"원숭이", 1, 3},
       {"사자", 2, 11},
       {"호랑이", 2, 8},
       {"코끼리", 3, 7},
       {"침팬지", 3, 5},
       {"팬더", 1, 12}
    };

    // 이름을 입력 받고 위의 배열에서 입력받은 이름에 해당하는
    // 데이타를 찾고 해당 이름의 학생의 학년과 반을 출력하는 프로그램을 만드시오

    char inputName[30];
    int length = sizeof(stArray) / sizeof(stArray[0]);

    while (1) {
        printf("찾는 이름을 입력하세요(exit: exit):");
        scanf_s("%s", inputName, sizeof(inputName));

        if (strcmp(inputName, "exit") == 0) {
            printf("검색작업을 종료합니다.");
            break;
        }

        // 입력받은 이름의 데이타를 찾는 코드 작성.

        Student* matchData = SearchName(stArray, length, inputName);

        if (matchData != NULL)
        {
            printf("이름: %s, 학년: %d, 반: %d\n", matchData->name, matchData->grade, matchData->classNum);
        }
        else
        {
            printf("%s 은/는 존재하지 않습니다.\n", inputName);
        }

        int findIndex = SearchName2(stArray, length, inputName);

        if (findIndex != 1)
        {
            printf("이름: %s, 학년: %d, 반: %d\n", stArray[findIndex].name, stArray[findIndex].grade, stArray[findIndex].classNum);
        }
        else
        {
            printf("%s 은/는 존재하지 않습니다.\n", inputName);
        }



    }

    
    return 0;
}
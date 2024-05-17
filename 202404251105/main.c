#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    /*
    int sum = 0;

    for (int i = 1; i < argc; i++) {
       sum += atoi(argv[i]);
    }

    printf("명령행 인자에 전달받은 정수값의 합계는: %d\n", sum);
    */

    // 문제 1.
    // 명령행 인자로 이름을 전달하고 실행을 하면
    // xxx씨 안녕하세요. 를 출력하는 프로그램을 만드세요.   
    
    /*if (argc == 2) {
       printf("%s씨 안녕하세요.", argv[1]);
    }
    else {
       printf("형식을 잘못 입력하셨습니다.");
    }
    
    printf("\n");*/
   
    // 문제 2.
    // 명령행 인자로 12 + 13 이런식으로 입력하면
    // 계산의 결과값을 출력해주는 프로그램을 만드세요. (사칙연산이 가능하게 만드세요.)
    // 뺄셈, 곱셈, 나눗셈은 직접 해보세요...
    if (argc == 4) {
        int left = atoi(argv[1]);
        int right = atoi(argv[3]);
        

        switch (*argv[2]) {
        case '+':
            printf("%d + %d = %d\n", left, right, left + right);
            break;
        case '-':
            printf("%d - %d = %d\n", left, right, left - right);
            break;
        case 'x':
        case 'X':
            printf("%d x %d = %d\n", left, right, left * right);
            break;
        case '/':
            printf("%d / %d = %d\n", left, right, left / right);
            break;
        default:
            printf("연산자를 잘못 입력하셨습니다.");
            break;
        }
    }
    else {
        printf("형식을 잘못 입력하셨습니다.");
    }




    return 0;
}
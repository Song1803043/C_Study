#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    /*
    int sum = 0;

    for (int i = 1; i < argc; i++) {
       sum += atoi(argv[i]);
    }

    printf("����� ���ڿ� ���޹��� �������� �հ��: %d\n", sum);
    */

    // ���� 1.
    // ����� ���ڷ� �̸��� �����ϰ� ������ �ϸ�
    // xxx�� �ȳ��ϼ���. �� ����ϴ� ���α׷��� ���弼��.   
    
    /*if (argc == 2) {
       printf("%s�� �ȳ��ϼ���.", argv[1]);
    }
    else {
       printf("������ �߸� �Է��ϼ̽��ϴ�.");
    }
    
    printf("\n");*/
   
    // ���� 2.
    // ����� ���ڷ� 12 + 13 �̷������� �Է��ϸ�
    // ����� ������� ������ִ� ���α׷��� ���弼��. (��Ģ������ �����ϰ� ���弼��.)
    // ����, ����, �������� ���� �غ�����...
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
            printf("�����ڸ� �߸� �Է��ϼ̽��ϴ�.");
            break;
        }
    }
    else {
        printf("������ �߸� �Է��ϼ̽��ϴ�.");
    }




    return 0;
}
#include <stdio.h>
// ��������
// && �� And (�׸���)
// || �� Or (�Ǵ�, Ȥ��)
// ! �� not

int main() {
	int TRUE = -2000;
	int FALSE = 0;
	int ret = 0;

	printf(" �� And ������\n");
	// �� And �����ڴ� FASLSE Ȯ���� ���� ���� ���ʿ�
	// ��ġ�ϴ� ���� �����մϴ�.
	ret = TRUE && TRUE;
	printf(" TRUE && TRUE = %d\n", ret);
	ret = TRUE && FALSE;
	printf(" TRUE && FALSE = %d\n", ret);
	ret = FALSE && TRUE;
	printf("FALSE && TRUE = %d\n", ret);
	ret = FALSE && FALSE;
	printf("FALSE && FALSE = %d\n", ret);

	printf("\n");
	printf(" �� Or ������\n");
	// �� Or �����ڴ� TRUE Ȯ���� ���� ���� ���ʿ�
	// ��ġ�ϴ� ���� �����մϴ�.
	ret = TRUE || TRUE;
	printf(" TRUE || TRUE = %d\n", ret);
	ret = TRUE || FALSE;
	printf(" TRUE || FALSE = %d\n", ret);
	ret = FALSE || TRUE;
	printf("FALSE || TRUE = %d\n", ret);
	ret = FALSE || FALSE;
	printf("FALSE || FALSE = %d\n", ret);

	printf("\n");
	printf(" �� Not ������\n");
	ret = !TRUE;
	printf(" !TRUE = %d\n", ret);
	ret = !FALSE;
	printf("!FALSE = %d\n", ret);

	return 0;
}
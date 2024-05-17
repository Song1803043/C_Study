#include <stdio.h>
// 논리연산자
// && 논리 And (그리고)
// || 논리 Or (또는, 혹은)
// ! 논리 not

int main() {
	int TRUE = -2000;
	int FALSE = 0;
	int ret = 0;

	printf(" 논리 And 연산자\n");
	// 논리 And 연산자는 FASLSE 확률이 높은 것을 앞쪽에
	// 배치하는 것이 유리합니다.
	ret = TRUE && TRUE;
	printf(" TRUE && TRUE = %d\n", ret);
	ret = TRUE && FALSE;
	printf(" TRUE && FALSE = %d\n", ret);
	ret = FALSE && TRUE;
	printf("FALSE && TRUE = %d\n", ret);
	ret = FALSE && FALSE;
	printf("FALSE && FALSE = %d\n", ret);

	printf("\n");
	printf(" 논리 Or 연산자\n");
	// 논리 Or 연산자는 TRUE 확률이 높은 것을 앞쪽에
	// 배치하는 것이 유리합니다.
	ret = TRUE || TRUE;
	printf(" TRUE || TRUE = %d\n", ret);
	ret = TRUE || FALSE;
	printf(" TRUE || FALSE = %d\n", ret);
	ret = FALSE || TRUE;
	printf("FALSE || TRUE = %d\n", ret);
	ret = FALSE || FALSE;
	printf("FALSE || FALSE = %d\n", ret);

	printf("\n");
	printf(" 논리 Not 연산자\n");
	ret = !TRUE;
	printf(" !TRUE = %d\n", ret);
	ret = !FALSE;
	printf("!FALSE = %d\n", ret);

	return 0;
}
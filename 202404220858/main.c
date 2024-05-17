#include <stdio.h>

// 동일한 코드가 반복되는 경우 
// 동일한 코드를 하나로 묶어서 하나의 단위로 만드는 기능이 있습니다.
// 반복적으로 사용되는 유용한 코드를 하나로 묶어줍니다.

// 함수(function)

// 재사용성
// 모듈성
// 가독성


// ReturnType 함수명(매개변수) {
//		명령어들;
// }

// ReturnType : 묶어놓은 명령어를 처리하고 어떤 DataType의 결과값을 반환할 것인지 지정
//				반환갑이 업슨 경우에는 void라고 지정하시면 됩니다.
// 함수명 : 함수를 호출할때 사용할 이름.
// 매개변수 : 함수를 호출할때 전달하는 값(인자값)을 받는 변수

void PrintMonster5() {
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
}

void PrintMonster(int count) {
	for (int i = 0; i < count; i++)
	{
		printf("Monster\n");
	}
}


// returnType : int
// 함수명 : add
// 매개변수 : int a, int b
 
int add(int a, int b) {
	int sum = 0;
	sum = a + b;

	return sum;	// return 문은 함수 내부의 결과값을 함수 외부로 전달하는 역활을 합니다.
}


int main()
{
	// ...
	PrintMonster5();
	
	// ...
	PrintMonster5(3);
	

	int a = 20;
	int b = 30;

	int ret = add(a, b);
	printf("%d + %d = %d\n",a,b,ret);

	return 0;
}
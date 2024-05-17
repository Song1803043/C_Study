#include <stdio.h>

int main()
{
	// 학생관리용 프로그램
	// 학생에 관련된 데이타를 저장.
	// 이름, 나이, 거주지, 학번, 학년, 성별, 반

	// 학번, 나이, 학년, 반, 성별
	int no;
	int age;
	int grade;
	int classNum;
	unsigned char sungbyul;

	// 여러명의 학생의 데이타를 저장하려면 어떻게 해야 할까요?
	// 1. 각각의 저장공간을 만드는 방법
	int no0, no1, no2, no3;
	int age0, age1, age2, age3;
	int grade0, grade1, grade2, grade3;
	int classNum0, classNum1, classNum2, classNum3;
	unsigned char sunbyul0, sungbyul1, sungbyul2, sungbyul3;

	// 2. 배열을 이용하는 방법
	int noArray[100];
	int ageArray[100];
	int gradeArray[100];
	int classNumArray[100];
	unsigned char sunbyulArray[100];

	noArray[0] = 0;
	ageArray[0] = 17;
	gradeArray[0] = 3;
	classNumArray[0] = 10;
	sunbyulArray[0] = 0;

	// 3.
	// 서로 연관성있는 데이터를 하나로 묶어서
	// 새로운 데이터타입을 만들어 주는 기능이 있습니다.
	// 구조체라고 합니다.

	// struct 구조체명 {
	//		연관성있는 데이터들;
	// };

	// struct Student라는 구조체 데이터 타입을 만듦
	// 사용자 정의 데이터 타입이라고 합니다.
	struct Student 
	{
		int no; // 구조체 멤버
		int age; // 구조체 멤버
		int grade; // 구조체 멤버
		int classNum; // 구조체 멤버
		unsigned char sungbyul;	// 구조체 멤버
	};

	struct Student st;


	// 구조체 변수로 멤버에 접근할 때
	// .(period)연산자를 사용합니다.
	st.no = 2373003;
	st.age = 24;
	st.grade = 4;
	st.classNum = 2;
	st.sungbyul = 0;

	printf("학번 : %d\n", st.no);
	printf("나이 : %d\n", st.age);
	printf("학년 : %d\n", st.grade);
	printf("  반 : %d\n", st.classNum);
	st.sungbyul ? printf("성별 : 여자") : printf("성별 : 남자");

	return 0;
}
#include <stdio.h>

int main()
{
	// �л������� ���α׷�
	// �л��� ���õ� ����Ÿ�� ����.
	// �̸�, ����, ������, �й�, �г�, ����, ��

	// �й�, ����, �г�, ��, ����
	int no;
	int age;
	int grade;
	int classNum;
	unsigned char sungbyul;

	// �������� �л��� ����Ÿ�� �����Ϸ��� ��� �ؾ� �ұ��?
	// 1. ������ ��������� ����� ���
	int no0, no1, no2, no3;
	int age0, age1, age2, age3;
	int grade0, grade1, grade2, grade3;
	int classNum0, classNum1, classNum2, classNum3;
	unsigned char sunbyul0, sungbyul1, sungbyul2, sungbyul3;

	// 2. �迭�� �̿��ϴ� ���
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
	// ���� �������ִ� �����͸� �ϳ��� ���
	// ���ο� ������Ÿ���� ����� �ִ� ����� �ֽ��ϴ�.
	// ����ü��� �մϴ�.

	// struct ����ü�� {
	//		�������ִ� �����͵�;
	// };

	// struct Student��� ����ü ������ Ÿ���� ����
	// ����� ���� ������ Ÿ���̶�� �մϴ�.
	struct Student 
	{
		int no; // ����ü ���
		int age; // ����ü ���
		int grade; // ����ü ���
		int classNum; // ����ü ���
		unsigned char sungbyul;	// ����ü ���
	};

	struct Student st;


	// ����ü ������ ����� ������ ��
	// .(period)�����ڸ� ����մϴ�.
	st.no = 2373003;
	st.age = 24;
	st.grade = 4;
	st.classNum = 2;
	st.sungbyul = 0;

	printf("�й� : %d\n", st.no);
	printf("���� : %d\n", st.age);
	printf("�г� : %d\n", st.grade);
	printf("  �� : %d\n", st.classNum);
	st.sungbyul ? printf("���� : ����") : printf("���� : ����");

	return 0;
}
#include <stdio.h>


// 자동변수 작동

void func3(int a) {
	int temp = 100;
}

void func2(int a) {
	int temp = 20;
	func3(a);
	int temp2 = 30;
}

void func(int a) {
	int temp = 100;
	func2(a);
	int temp2 = 200;
}

int main() {
	int a = 1000;

	func(a);
	int b = 2000;
	return 0;
}
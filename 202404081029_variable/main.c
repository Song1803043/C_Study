#include <stdio.h>

int main() {
	
	int ab = 20;
	int cb = 30;
	
	printf(" ab = %d, cb = %d\n", ab, cb);

	float dd = 1.3f;
	double ee = 3.41f;

	printf(" dd = %f, ee = %lf\n", dd, ee);

	char AA = 65;
	unsigned BB = 66;

	printf(" AA = %c, BB = %c\n", AA, BB);

	short a;
	long b;
	int c;

	unsigned short d;
	unsigned long e;
	unsigned int f;

	// 실수형
	float g;
	double h;

	// 문자형
	char i;
	unsigned char j;

	a = -32768;
	printf(" a = %d\n", a);

	b = -2147483647-1;
	printf(" b = %d\n", b);

	c = -214748364-1;
	printf(" c = %d\n", c);

	d = 65535;
	printf(" d = %d\n", d);

	e = 4294967295;
	printf(" e = %lu\n", e);

	f = 4294967295;
	printf(" f = %u\n", f);

	g = -3.4e+9;
	printf(" g = %f\n", g);

	h = -1.79769e+15;
	printf(" h = %lf\n", h);

	i = 66;
	printf(" i = %c\n", i);

	j = 98;
	printf(" j = %c\n", j);

	return 0;
}
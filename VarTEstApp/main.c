/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,변수 영역 데이터 공유
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void assign1(void);
void assign2(void);
int a;
// 메인함수
int main(void)
{/*
	auto int a = 10,b=20;
	printf("교환전: %d,%d\n", a,b);
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
		printf("temp값 %d\n", temp);
	}
	printf("교환후: %d,%d\n", a, b);
	*/

	printf("a의값 %d\n", a);
	assign1();
	assign2();
	printf("a의값 %d\n", a);
	system("pause");
	return EXIT_SUCCESS;
}
void assign1(void) {
	a = 10;
}

void assign2(void) {
	int a = 0;
	a = 20;
}


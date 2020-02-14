/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void)
{
	printf("점수를 입력하세요 :\n");
	int a;
	scanf("%d", &a);
	if (a >= 90) { printf("학점 : A\n"); }
	else if(a>=80) { printf("학점 : B\n"); }
	else if (a >= 70) { printf("학점 : C\n"); }
	else if (a >= 60) { printf("학점 : D\n"); }
	else if (a < 60) { printf("학점 : F\n"); }
	system("pause");
	return EXIT_SUCCESS;
}
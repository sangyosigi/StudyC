/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 배열과 포인터
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>
void print_ary(int* pa);
// 메인함수
int main(void)
{
	/*int ary[3] = { 0 };
	int i;

	*(ary + 0) = 10 ;
	*(ary + 1) = *(ary + 0) +10 ;
	printf("세번째 요소 입력:");
	scanf("%d", (ary + 2));
	for (int i = 0; i < (sizeof(ary)/sizeof(ary[0])); i++)
	{
		printf("%5d", *(ary + i));
	}*/
	/* int ary[3] = { 10,20,30 };
	 int* pa = ary;

	 printf("배열의 값\n");
	 for (int i = 0; i < 3; i++)
	 {
		 printf("%5d", *pa);
		 pa++;
	 }

		*/
	int ary[] = { 10,20,30,40,50 };
	int ary2[] = { 10,20,30,40,50,60,70 };
	int size = 0;
	size = 5;
	print_ary(ary, size);
	size = sizeof(ary) / sizeof(ary[0]);
	print_ary(ary2, size);
	size = sizeof(ary2) / sizeof(ary2[0]);
	system("pause");
	return EXIT_SUCCESS;
}
//배열 출력함수
void print_ary(int* pa, int size) {
	int i;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", pa[i]);
	}
	printf("\n");
}
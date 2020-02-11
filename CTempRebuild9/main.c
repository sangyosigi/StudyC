/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void func(void);
// 메인함수
int main(void) 
{
  /*  printf("컴파일 날짜와 시간 : %s,%s\n", __DATE__, __TIME__);
    printf("파일명 : %s\n", __FILE__);
    printf("함수명 : %s\n", __FUNCTION__);
    printf("행번호 : %s\n", __LINE__);
	
#line 100 "macro.c"
    func();*/
    int max;
#if VER>=6
    printf("버전은 %d 입니다\n")
#endif

#if BIT==16
        max = 32767;
#else 
        max = 2147483647;
#endif
    printf("int형 최대값 %d\n", max);
    system("pause");
	return EXIT_SUCCESS;
}
void func(void){
    printf("\n");
    printf("파일명 : %s\n", __FILE__);
    printf("함수명 : %s\n", __FUNCTION__);
    printf("행번호 : %d\n", __LINE__);
}
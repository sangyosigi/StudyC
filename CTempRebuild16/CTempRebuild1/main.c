/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int n;
    
    printf("정수를 입력하세요:\n");
    scanf("%d,&n");
    
    if (90<=n<=100)
    {
        printf("A학점입니다.\n");
    }
    else if (80 <= n =< 89)
    {
        printf("B학점입니다.\n");
    }
     else if (70 <= n <= 79)
    {
        printf("C학점입니다.\n");
    }
     else if (60 <= n <= 69);
    {
        printf("D학점입니다.\n");
    }
    else
    {
        printf("F학점입니다.\n");
    }
	system("pause");
	return EXIT_SUCCESS;
}
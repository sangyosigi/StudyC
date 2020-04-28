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
    int sum=0;
    
    for (int i = 1; i <= 100; i++)
    {
        sum +=i;
    }

    printf("정수의 합은:%d", sum);
	system("pause");
	return EXIT_SUCCESS;
}
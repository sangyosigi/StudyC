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

    int a, b;
    int temp;
    
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf(" %d %d", a, b);
	
    system("pause");
	return EXIT_SUCCESS;
}
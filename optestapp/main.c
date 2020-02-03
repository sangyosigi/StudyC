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
    int a = 10,b=20;
    int res = 0;
    
    res = (a > b) ? a : b;

    

    printf("a,res=%d,%d\n",a, res);
    
    system("pause");
	return EXIT_SUCCESS;
}
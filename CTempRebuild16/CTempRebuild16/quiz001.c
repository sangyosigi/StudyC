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
    int w , h;
    int area;

    
    scanf("%d %d", &w, &h);
    
    area=(w * h) / 2;

    printf("넓이는 %d입니다.\n", area);
	system("pause");
	return EXIT_SUCCESS;
}
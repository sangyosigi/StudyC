/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수문제
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int a;
    int ans=0;
    for (int i = 1; i <34 ; i++)
    {
        a = i * 3;
        ans = ans + a;
    
    }
    printf("답: %d\n",ans);
	
   
	system("pause");
	return EXIT_SUCCESS;
}

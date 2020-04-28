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
    int a, b, result;

    printf("단을 입력하세요:\n");
    scanf("%d", &a);

    for (b = 1; b < 10; b++)
    {


        result = a * b;

        printf("%d단 : %d * %d = %d\n", a, a, b, result);
    }
    return 0;
}

  

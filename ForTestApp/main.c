/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - sangsik choi.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
   /* for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            printf("%dX%d=%d\t",i,j,i*j);
        }
        printf("\n");*/
    
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if ((i%3)==0)
        {
            continue;
        }
        sum += i;
    }
    printf("sum=%d\n", sum);

    system("pause");
	return EXIT_SUCCESS;
}
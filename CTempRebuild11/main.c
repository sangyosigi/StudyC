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
int sum(int a) {
    int sum = 0;
    do
    {
        sum += num % 10;
        num /= 10;
    } while (num > 0);
    return sum;
}
// 메인함수
int main(void)
{
    int num,a;
    scanf("%d", &num);
    printf("%d", sum(num));

    system("pause");
	return EXIT_SUCCESS;
}
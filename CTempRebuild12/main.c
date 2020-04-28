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
#include <string.h>
#include <math.h>

long int fibonacci(long int number);
long int solution(long int number);

// 메인함수
int main(void)
{
    long int number;
    scanf("%d", number);
    
	system("pause");
	return EXIT_SUCCESS;
}
long int fibonacci(long int number) {
    if (number == 0) {
        return 0;
    }
    else if (number == 1) {
        return 1;
    }
    else {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}
long int solution(long int number) {
    long int temp = fibonacci(number);
    return temp % 1234567;
}
/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>
#include "mycalc.h"
#pragma comment(lib, "MyMathLib.lib")

// �����Լ�
int main(void) 
{
    int res = int_add(10, 30);
    printf("res = %d\n", res);
    res = int_multi(10, 40);
    printf("res = %d\n", res);


	system("pause");
	return EXIT_SUCCESS;
}
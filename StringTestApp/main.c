/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void)
{
	char str[80];
	
    printf("���ڿ� �Է�:");
    gets(str);
    printf("���ڿ� ���:");
    puts(str);
    system("pause");
	return EXIT_SUCCESS;
}
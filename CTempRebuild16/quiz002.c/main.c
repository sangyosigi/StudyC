/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int sum=0;
    
    for (int i = 1; i <= 100; i++)
    {
        sum +=i;
    }

    printf("������ ����:%d", sum);
	system("pause");
	return EXIT_SUCCESS;
}
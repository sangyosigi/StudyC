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
    int a, b, result;

    printf("���� �Է��ϼ���:\n");
    scanf("%d", &a);

    for (b = 1; b < 10; b++)
    {


        result = a * b;

        printf("%d�� : %d * %d = %d\n", a, a, b, result);
    }
    return 0;
}

  

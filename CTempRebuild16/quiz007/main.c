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
    int i, j, count = 1;

    for (i = 1; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {


            if ((i % j) == 0)
                break;
        }

        if (i == j)
        {

            printf("%d\t", i);
            count++;


        }
    }

    return 0;
}

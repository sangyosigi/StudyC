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
    int n;
    
    printf("������ �Է��ϼ���:\n");
    scanf("%d,&n");
    
    if (90<=n<=100)
    {
        printf("A�����Դϴ�.\n");
    }
    else if (80 <= n =< 89)
    {
        printf("B�����Դϴ�.\n");
    }
     else if (70 <= n <= 79)
    {
        printf("C�����Դϴ�.\n");
    }
     else if (60 <= n <= 69);
    {
        printf("D�����Դϴ�.\n");
    }
    else
    {
        printf("F�����Դϴ�.\n");
    }
	system("pause");
	return EXIT_SUCCESS;
}
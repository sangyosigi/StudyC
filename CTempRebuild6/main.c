/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,�ܼ� �Ű����� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// �����Լ�
int main(int argc,char** argv) 
{
    if (argc<=1)
    {
        printf("��� ������ �ùٸ��� �ʽ��ϴ�.\n");
        exit(1);
    }
    char* intarg[2];

    for (int i = 0; i <argc; i++)
    {
        if (i == 0) { continue; }
        strcpy(intarg[i], argv[i]);
    }
    printf("ù��° ����μ� %s\n", intarg[0]);
    printf("�ι�° ����μ� %s\n", intarg[1]);
	system("pause");
	return EXIT_SUCCESS;
}
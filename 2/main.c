/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void)
{
	printf("������ �Է��ϼ��� :\n");
	int a;
	scanf("%d", &a);
	if (a >= 90) { printf("���� : A\n"); }
	else if(a>=80) { printf("���� : B\n"); }
	else if (a >= 70) { printf("���� : C\n"); }
	else if (a >= 60) { printf("���� : D\n"); }
	else if (a < 60) { printf("���� : F\n"); }
	system("pause");
	return EXIT_SUCCESS;
}
/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union student{
    int num;
    double grade;
};
enum season
{
    spring,summer,fall,winter
};

// �����Լ�
int main(void) 
{
   /* union student s1 = { 315 };
    printf("�й� : %d\n", s1.num);
    s1.grade = 4.4;
    printf("���� : %.1lf",s1.grade);
    printf("�й� : %d\n", s1.num);
	*/
    enum season ss;
    char* pc = NULL;
    ss = spring;
    switch (ss)
    {
    case spring:
        pc = "inline";
        break;
    case summer:
        pc = "swimming";
        break;
    case fall:
        pc = "trip";
        break;
    case winter:
        pc = "skiing";
        break;
    default:
        pc = "error";
        break;
    }
    printf("���� ����Ȱ��:%s\n", pc);
	system("pause");
	return EXIT_SUCCESS;
}
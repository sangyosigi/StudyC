/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer -sangsik choi.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	int id;
	char name[20];
	double grade;
};
// �����Լ�
int main(void)
{/*
	struct student s1;

	s1.num = 11;
	s1.grade = 4.5;
	printf("�й� %d\n", s1.num);
	printf("���� %.1f\n", s1.grade);*/
	/*  struct profile p1;

	  strcpy(p1.name, "�ֻ��");
	  p1.age = 28;
	  p1.height = 175.0;
		  p1.intro = (char*)malloc(80);
		  printf("�ڱ�Ұ� :");
		  gets(p1.intro);
		  printf("�̸� %s\n", p1.name);
		  printf("���� %u\n", p1.age);
		  printf("Ű %.1lf\n", p1.height);
		  printf("�ڱ�Ұ� %s\n", p1.intro);*/
		  /*struct student yuni;
		  yuni.pf.age = 28;
		  yuni.pf.height = 175.0;
		  yuni.id = 100;
		  yuni.grade = 4.5;
		  printf("���� %u\n", yuni.pf.age);
		  printf("Ű %.1lf\n", yuni.pf.height);
		  printf("���̵� %s\n", yuni.id);
		  printf("���� %.1lf\n", yuni.grade);*/
	struct student s1 = { 315, "ȫ�浿",2.4 },
		s2 = { 316,"�̼���",3.5 },
		s3 = { 318,"�������",4.4 };
	struct student max;

	max = s1;
	if (s2.grade > max.grade) { max = s2; }
	if (s3.grade > max.grade) { max = s3; }

	printf("�̸� %s\n",max.name);
	printf("���̵� %d\n",max.id);
	printf("���� %.1lf\n",max.grade);
	system("pause");
	return EXIT_SUCCESS;
}
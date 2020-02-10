/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
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
// 메인함수
int main(void)
{/*
	struct student s1;

	s1.num = 11;
	s1.grade = 4.5;
	printf("학번 %d\n", s1.num);
	printf("학점 %.1f\n", s1.grade);*/
	/*  struct profile p1;

	  strcpy(p1.name, "최상식");
	  p1.age = 28;
	  p1.height = 175.0;
		  p1.intro = (char*)malloc(80);
		  printf("자기소개 :");
		  gets(p1.intro);
		  printf("이름 %s\n", p1.name);
		  printf("나이 %u\n", p1.age);
		  printf("키 %.1lf\n", p1.height);
		  printf("자기소개 %s\n", p1.intro);*/
		  /*struct student yuni;
		  yuni.pf.age = 28;
		  yuni.pf.height = 175.0;
		  yuni.id = 100;
		  yuni.grade = 4.5;
		  printf("나이 %u\n", yuni.pf.age);
		  printf("키 %.1lf\n", yuni.pf.height);
		  printf("아이디 %s\n", yuni.id);
		  printf("학점 %.1lf\n", yuni.grade);*/
	struct student s1 = { 315, "홍길동",2.4 },
		s2 = { 316,"이순신",3.5 },
		s3 = { 318,"세종대왕",4.4 };
	struct student max;

	max = s1;
	if (s2.grade > max.grade) { max = s2; }
	if (s3.grade > max.grade) { max = s3; }

	printf("이름 %s\n",max.name);
	printf("아이디 %d\n",max.id);
	printf("학점 %.1lf\n",max.grade);
	system("pause");
	return EXIT_SUCCESS;
}
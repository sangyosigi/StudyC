/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�/ ������ ����
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void)
{
	/*int a = 0;
	double b = 0;
	char c = 65;

	printf("a�� �ּ� :%u\n",& a);
	printf("b�� �ּ� :%u\n", &b);
	printf("c�� �ּ� :%u\n", &c);*/

	//int a = 0;
	//int* pa;

	//pa = &a;
	//*pa = 10;
	//printf("a���ּ�:%u\n", &a);
	//printf("pa���ּ�:%u\n", &pa);
	//printf("*pa�ǰ�:%d\n", *pa);
	//printf("�����ͷ� a �� ���:%d\n", *pa);
	//printf("���������� a �� ���:%d\n", a);

	//scanf("%d", pa);
	//printf("%d\n", a);
	
	/*int a = 10, b = 20, total;
	double avg;
	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;
	pa = &a;
	pb = &b;
	*pt = *pa + *pb;
	*pg = *pt / 2.0;
	printf("�������� :%d %d\n", *pa, *pb);
	printf("�������� �� : %d\n", *pt);
	printf("���:%.1lf\n", *pg);*/

	//int a = 10, b = 20;
	//const int* pa = &a;
	//printf("a �� : %d\n", *pa);
	//pa = &b;
	//printf("b �� : %d\n", *pa);
	//pa = &a;
	//printf("a �� : %d\n", *pa);
	//printf("%d %d\n", a,b);
	//
	
	/*char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("ch size: %u\n", sizeof(ch));
	printf("in size: %u\n", sizeof(in));
	printf("db size: %u\n", sizeof(db));
	
	printf("pc size: %u\n", sizeof(pc));
	printf("pi size: %u\n", sizeof(pi));
	printf("pd size: %u\n", sizeof(pd));*/

	int a = 10;
	int* pa = &a;
	double* pd = pa;

	printf("a:%d\n", a);
	printf("pa:%d\n", *pa);
	printf("pd:%lf\n", *pd);

	system("pause");
	return EXIT_SUCCESS;
}
/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,����ü ����Ʈ
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
// �����Լ�
struct score {
	int kor;
	int eng;
	int math;
};
struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};
void print_list(struct address* lp);
struct list {
	int num;
	struct list* next;
};
int main(void)
{
	/*struct address list[5] =
	{
	{"ȫ�浿",23,"111-1111","�︪�� ����"},{"�̼���",35,"222-2222","���� ��õ��"},
	{"�庸��",19, "333-3333","�ϵ� û����"},{"������",15,"444-4444","�泲 õ��"},
	{"���߱�",45,"555-5555","Ȳ�ص� ����"}
	};
	print_list(list);
	int i;
	*/

	/*struct score yuni = { 99,30,15 };
	struct score* ps=&yuni;
	printf("���� %d\n", (*ps).kor);
	printf("���� %d\n", ps->eng);
	printf("���� %d\n", ps->math);*/
	
	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
	struct list* head = &a;
	a.next = &b;
	b.next = &c;
	printf("head->num;%d\n", head->next);
	printf("head->next->num: %d\n", head->next->num);
	system("pause");
	return EXIT_SUCCESS;
}
void print_list(struct address* lp) {
	for (int i = 0; i < 5; i++)
	{
printf("%10s%5d%15s%20s\n", (lp+i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
}
	}
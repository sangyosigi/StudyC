/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ����ü ���Ḯ��Ʈ �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct list {
    int num;
    struct list* next;
};

// �����Լ�
int main(void) 
{
    struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
    struct list* head = &a, * current;
    a.next = &b;
    b.next = &c;
    printf("head->num : %d\n", head->num);
    printf("head->next->num : %d\n", head->next->num);
    printf("head->next : %p\n", head->next);
    printf("a.next : %p\n", a.next);

    printf("list all: \n");
    printf("b delete\n");
    a.next = &c;
    b.next = 0;
    current = head;
    while (current != NULL) {
        printf("%5d", current->num);
        current = current->next;
    }
    printf("\n");
    system("pause");
	return EXIT_SUCCESS;
}
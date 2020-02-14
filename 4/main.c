/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct NODE {
    int num;
    struct NODE* next;
};
void insertNode(struct NODE* target, int item)
{
    struct NODE* NewNode = malloc(sizeof(struct NODE));
    NewNode->num = item;
    NewNode->next = target->next;
    target->next = NewNode;
}
void deleteNode(struct NODE* target) {
    struct NODE* removenode = target->next;
    target->next = removenode->next;
    free(removenode);
}
void printNode() {
    printf("list all: \n");
}


// 메인함수
int main(void)
{
    
    struct NODE* head = malloc(sizeof(struct NODE));
    head->next = NULL;

        printf("입력:");
        scanf("%d",&head);
    

    deleteNode(head);
    printNode();
    struct NODE* current = head->next;
    while (current != NULL) {
        printf("%5d", current->num);
        current = current->next;
    }

    current = head->next;
    while (current != NULL)
    {
        struct node* temp = current->next;
        free(current);
        current = temp;
    }

    free(head);
    printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}

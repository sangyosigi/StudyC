/*
  filename - main.c
  version - 1.0
  description - �ֿܼ��� ����� ����� ����
  --------------------------------------------------------------------------------
  first created - 2020.02.14
  writer -Sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct card {
	char name[20];
	char tel[20];
	char email[80];
}card;
void input_business_card(card* person, int num) {

	printf("�ѱ��̸� :");
	scanf("%s", person[num].name);
	printf("����ȣ :");
	scanf("%s", person[num].tel);
	printf("�̸��� :");
	scanf("%s", person[num].email);

}
void show_all_cards(card* person, int num) {

	for (int i = 1; i < num; i++)
	{
		printf("[%d] %s %s %s \n", i, person[i].name, person[i].tel, person[i].email);
	}
}
void search_business_card(card* person, int num, int b)
{
	int x = 0;
	while (1)
	{
		for (int i = 1; i < num; i++)
		{
			if (b == i)
			{
				printf("[%d] %s %s %s \n", i, person[i].name, person[i].tel, person[i].email);

				break;
			}
		}
		if (b > num)
		{
			printf("��ȣ�� �ٽ� �Է��ϼ���.\n");
			printf("��ȣ �Է�:\n");
			scanf("%d", b);
		}
		else
			break;
	}
}
void edit_business_card(card* person, int num, int b) {

	printf("[%d] %s %s %s \n", b, person[b].name, person[b].tel, person[b].email);


	if (NULL != person)

	{
		printf("������ �����մϴ�.\n");
		printf("����ȣ : ");
		scanf_s("%s", person[b].tel, 20);
		printf("�̸��� : ");
		scanf_s("%s", person[b].email, 20);
	}
	else printf("������ ������ �����ϴ�.\n");

}

// �����Լ�
int main(void)
{
	card person[50] = { 0 };
	int num = 1;
	int a = 0;
	int b;
	while (1)
	{
		if (a == 0)
		{
			puts("*****�޴�*****");
			puts("1�� �Է�");
			puts("2�� ����");
			puts("3�� ����");
			puts("4�� ��ü���");
			puts("5�� �˻�");
			puts("6�� ����");
			printf("����:");
			scanf("%d", &a);
		}
		else if (a == 1)
		{
			input_business_card(person, num);
			num++;
			a = 0;
		}
		else if (a == 2)
		{
			printf("��ȣ �Է�:\n");
			scanf("%d", &b);
			edit_business_card(person, num, b);
			a = 0;
		}
		else if (a == 4)
		{
			show_all_cards(person, num);
			a = 0;
		}
		else if (a == 5)
		{
			printf("��ȣ �Է�:\n");
			scanf("%d", &b);
			search_business_card(person, num, b);
			a = 0;
		}
		else if (a == 6)
			break;
		else {
			printf("�߸��Ȱ��Դϴ�.\n");
			a = 0;
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}


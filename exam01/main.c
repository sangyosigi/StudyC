/*
  filename - main.c
  version - 1.0
  description - 콘솔에서 입출력 기능을 구현
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

	printf("한글이름 :");
	scanf("%s", person[num].name);
	printf("폰번호 :");
	scanf("%s", person[num].tel);
	printf("이메일 :");
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
			printf("번호를 다시 입력하세요.\n");
			printf("번호 입력:\n");
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
		printf("명함을 수정합니다.\n");
		printf("폰번호 : ");
		scanf_s("%s", person[b].tel, 20);
		printf("이메일 : ");
		scanf_s("%s", person[b].email, 20);
	}
	else printf("삭제할 명함이 없습니다.\n");

}

// 메인함수
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
			puts("*****메뉴*****");
			puts("1번 입력");
			puts("2번 수정");
			puts("3번 삭제");
			puts("4번 전체출력");
			puts("5번 검색");
			puts("6번 종료");
			printf("선택:");
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
			printf("번호 입력:\n");
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
			printf("번호 입력:\n");
			scanf("%d", &b);
			search_business_card(person, num, b);
			a = 0;
		}
		else if (a == 6)
			break;
		else {
			printf("잘못된값입니다.\n");
			a = 0;
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}


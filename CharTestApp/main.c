/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 문자 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - sangsik Choi
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void)
{
	/*   char small,cap = 'H';
	   if ((cap>='A')&&(cap<='Z'))
	   {
		   small = cap + 32;
	   }
	   printf("대문자:%c\n",cap);
	   printf("소문자:%c\n",small);*/

	   /*char ch1, ch2;
	   scanf("%c %c", &ch1, &ch2);
	   printf("[%c %c]\n", ch1, ch2);*/

	   /* char ch;
		ch = getchar();
		printf("출력문자: ");
		putchar(ch);
		printf('\n');*/

	/*char ch;
	for (int i = 0; i < 3; i++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}
	putchar('\n');*/
	/*int res;
	char ch;
	while (1) {
		res = scanf("%c", &ch);
		if (res == -1) { break; }
		printf("%d ", ch);*/
	int num, grade;
	printf("학번입력:");
	scanf("%d", &num);
	getchar();
	printf("학점입력:");
	grade=getchar();

	printf("학번:%d,학점:%c\n", num, grade);
	
	system("pause");
	return EXIT_SUCCESS;
}
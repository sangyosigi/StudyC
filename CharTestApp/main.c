/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� ���� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - sangsik Choi
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void)
{
	/*   char small,cap = 'H';
	   if ((cap>='A')&&(cap<='Z'))
	   {
		   small = cap + 32;
	   }
	   printf("�빮��:%c\n",cap);
	   printf("�ҹ���:%c\n",small);*/

	   /*char ch1, ch2;
	   scanf("%c %c", &ch1, &ch2);
	   printf("[%c %c]\n", ch1, ch2);*/

	   /* char ch;
		ch = getchar();
		printf("��¹���: ");
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
	printf("�й��Է�:");
	scanf("%d", &num);
	getchar();
	printf("�����Է�:");
	grade=getchar();

	printf("�й�:%d,����:%c\n", num, grade);
	
	system("pause");
	return EXIT_SUCCESS;
}
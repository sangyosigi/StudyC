/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, �迭�� ������
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>
void print_ary(int* pa);
// �����Լ�
int main(void)
{
	/*int ary[3] = { 0 };
	int i;

	*(ary + 0) = 10 ;
	*(ary + 1) = *(ary + 0) +10 ;
	printf("����° ��� �Է�:");
	scanf("%d", (ary + 2));
	for (int i = 0; i < (sizeof(ary)/sizeof(ary[0])); i++)
	{
		printf("%5d", *(ary + i));
	}*/
	/* int ary[3] = { 10,20,30 };
	 int* pa = ary;

	 printf("�迭�� ��\n");
	 for (int i = 0; i < 3; i++)
	 {
		 printf("%5d", *pa);
		 pa++;
	 }

		*/
	int ary[] = { 10,20,30,40,50 };
	int ary2[] = { 10,20,30,40,50,60,70 };
	int size = 0;
	size = 5;
	print_ary(ary, size);
	size = sizeof(ary) / sizeof(ary[0]);
	print_ary(ary2, size);
	size = sizeof(ary2) / sizeof(ary2[0]);
	system("pause");
	return EXIT_SUCCESS;
}
//�迭 ����Լ�
void print_ary(int* pa, int size) {
	int i;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", pa[i]);
	}
	printf("\n");
}
/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,���� ���� ������ ����
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void assign1(void);
void assign2(void);
int a;
// �����Լ�
int main(void)
{/*
	auto int a = 10,b=20;
	printf("��ȯ��: %d,%d\n", a,b);
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
		printf("temp�� %d\n", temp);
	}
	printf("��ȯ��: %d,%d\n", a, b);
	*/

	printf("a�ǰ� %d\n", a);
	assign1();
	assign2();
	printf("a�ǰ� %d\n", a);
	system("pause");
	return EXIT_SUCCESS;
}
void assign1(void) {
	a = 10;
}

void assign2(void) {
	int a = 0;
	a = 20;
}


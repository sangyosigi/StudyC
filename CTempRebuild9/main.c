/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void func(void);
// �����Լ�
int main(void) 
{
  /*  printf("������ ��¥�� �ð� : %s,%s\n", __DATE__, __TIME__);
    printf("���ϸ� : %s\n", __FILE__);
    printf("�Լ��� : %s\n", __FUNCTION__);
    printf("���ȣ : %s\n", __LINE__);
	
#line 100 "macro.c"
    func();*/
    int max;
#if VER>=6
    printf("������ %d �Դϴ�\n")
#endif

#if BIT==16
        max = 32767;
#else 
        max = 2147483647;
#endif
    printf("int�� �ִ밪 %d\n", max);
    system("pause");
	return EXIT_SUCCESS;
}
void func(void){
    printf("\n");
    printf("���ϸ� : %s\n", __FILE__);
    printf("�Լ��� : %s\n", __FUNCTION__);
    printf("���ȣ : %d\n", __LINE__);
}
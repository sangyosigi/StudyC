/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�����
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int a;
    int ans=0;
    for (int i = 1; i <34 ; i++)
    {
        a = i * 3;
        ans = ans + a;
    
    }
    printf("��: %d\n",ans);
	
   
	system("pause");
	return EXIT_SUCCESS;
}

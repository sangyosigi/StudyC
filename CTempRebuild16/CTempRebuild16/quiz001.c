/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int w , h;
    int area;

    
    scanf("%d %d", &w, &h);
    
    area=(w * h) / 2;

    printf("���̴� %d�Դϴ�.\n", area);
	system("pause");
	return EXIT_SUCCESS;
}
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
        char str[100];
        int num_A = 0, num_a = 0, num = 0, sp = 0;
        scanf("%s", str);

        for (int i = 0; i < strlen(str); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') num_A++;
            else if (str[i] >= 'a' && str[i] <= 'z') num_a++;
            else if (str[i] >= '0' && str[i] <= '9') num++;
            else if ((str[i] >= '!' && str[i] <= '/') || (str[i] >= '[' && (str[i] <= '`') ||
                str[i] >= '{' && str[i] <= '~') || (str[i] >= ':' && str[i] <= '@')) sp++;
        }
        printf("�빮�� : %d\n", num_A);
        printf("�ҹ��� : %d\n", num_a);
        printf("���� : %d\n", num);
        printf("Ư������ : %d\n", sp);

        return 0;
       
}


	

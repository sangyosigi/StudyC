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
#include <string.h>
struct student_t
{
    int kor,eng,math,total;
    double avg;
};
   
// �����Լ�
int main(void) 
{
    struct student_t stu[3];
    for (int i = 0; i < 3; i++)
    {
        printf("[ student %d ] �Է�\n",i+1);
        printf("�����: ");
        scanf("%d", & stu[i].kor);
        printf("�����: ");
        scanf("%d", &stu[i].eng);
        printf("���м���: ");
        scanf("%d", &stu[i].math);

        stu[i].total = stu[i].kor + stu[i].math + stu[i].eng;
        stu[i].avg = stu[i].total / 3;
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("student[%d] ���� ,��� : %d, %.1lf\n",i+1,stu[i].total,stu[i].avg);
 
    }

	system("pause");
	return EXIT_SUCCESS;
}
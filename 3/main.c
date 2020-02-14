/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
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
   
// 메인함수
int main(void) 
{
    struct student_t stu[3];
    for (int i = 0; i < 3; i++)
    {
        printf("[ student %d ] 입력\n",i+1);
        printf("국어성적: ");
        scanf("%d", & stu[i].kor);
        printf("영어성적: ");
        scanf("%d", &stu[i].eng);
        printf("수학성적: ");
        scanf("%d", &stu[i].math);

        stu[i].total = stu[i].kor + stu[i].math + stu[i].eng;
        stu[i].avg = stu[i].total / 3;
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("student[%d] 총점 ,평균 : %d, %.1lf\n",i+1,stu[i].total,stu[i].avg);
 
    }

	system("pause");
	return EXIT_SUCCESS;
}
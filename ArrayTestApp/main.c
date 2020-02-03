/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - sangsik choi.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    /*int ary[5];

    ary[0] = 10;
    ary[1] = 20;
    ary[3] = ary[0] + ary[1];
    scanf("%d", &ary[2]);
    for (int i = 0; i < 5; i++)
    {
        printf("ary[%d]=%d\n", i, ary[i]);
    }*/
    int score[5];
    int total = 0;
    double avg;
    int count;
    count = sizeof(score) / sizeof(score[0]);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &score[i]);
    }
    for (int i = 0; i < count; i++)
    {
        total += score[i];
    }
    avg = (double) total / count;
    printf("평균은 %.1f\n", avg);
	system("pause");
	return EXIT_SUCCESS;
}
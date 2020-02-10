/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 파일 복사 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 메인함수
int main(void) 
{
   /* FILE* ifp, * ofp;
    char str[80];
    char* res;
    ifp = fopen("aa.txt", "r");
    if (ifp==NULL)
    {
        printf("파일 오픈 실패");
        return EXIT_FAILURE;
    }
    ofp = fopen("bb.txt", "w");
    if (ofp == NULL)
    {
        printf("파일 오픈 실패");
        return EXIT_FAILURE;
    }
    while (1) {
        res = fgets(str, sizeof(str), ifp);
        if (res==NULL)
        {
            break;
        }
        str[strlen(str) - 1] = '\0';
        fputs(str, ofp);
        fputs("\n", ofp);
    }
    fclose(ifp);
    fclose(ofp);*/

    //FILE* ifp, * ofp;
    //char name[20];
    //int kor, eng, math;
    //int total;
    //double avg;
    //int res;
    //ifp = fopen("aaa.txt", "r");
    //if (ifp==NULL)
    //{
    //    printf("입력 파일을 열지 못했습니다.\n");
    //    return 1;
    //}
    //ofp = fopen("bbb.txt", "w");
    //if (ofp == NULL) {
    //    printf("출력 파일을 열지 못했습니다.\n");
    //    return 1;
    //}
    //while (1) {
    //    res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
    //    if (res==EOF)
    //    {
    //        break;
    //    }
    //    total = kor + eng + math;
    //    avg = total / 3.0;
    //    fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
    //}
    //fclose(ifp);
    //fclose(ofp);
 /*   FILE* fp;
    int age;
    char name[20];
    fp = fopen("a.txt", "r");
    if (fp == NULL) { return EXIT_FAILURE; }
    fscanf(fp,"%d",&age);
    while(fgetc(fp) == '\n') {}
    fgets(name, sizeof(name), fp);
    printf("이름 : %s,나이 : %d\n", name, age);
    fclose(fp);
	system("pause");
	return EXIT_SUCCESS;*/
    FILE* afp, * bfp;
    int num = 10;
    int res;
    afp = fopen("a.txt", "wt");
    if (afp == NULL) { return EXIT_FAILURE; };
    fprintf(afp, "%d", num);
    bfp = fopen("b.txt", "rb");
    if (bfp == NULL) {
        return EXIT_FAILURE;
    };
    fread(&res, sizeof(res), 1, bfp);
    printf("%d", res);
    fclose(bfp);
    system("pause");
    return EXIT_SUCCESS;
}
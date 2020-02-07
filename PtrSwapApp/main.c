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

void swap_ptr(char** ppa, char** ppb);
void print_str(char** src, int count);
void print_ary(int(*)[4]);
void func(int(*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max_(int a, int b);
// 메인함수
int main(void) 
{
    /*int(*fp)(int, int);
    int res;
    fp = sum;
    res = fp(10, 20);
    printf("res is %d\n",res);*/
    /*char* ptr_ary[4] = { "eagle","tiger","lion","sqirrel" };
    int count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
    print_str(ptr_ary, count);*/
    /*char* pa = "success";
    char* pb = "failutre";

    printf("pa=%s,pb=%s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa=%s,pb=%s\n", pa, pb);*/
    /*int ary[5] = { 0,1,2,3,4 };
    printf("%p\n", ary);
    printf("%p\n", &ary);
    printf("%p\n", ary+1);
    printf("%p\n", &ary+1);*/
    /*int ary[3][4] = { {1,2,3,4,},{5,6,7,8},{9,10,11,12} };
    int(*pa)[4];
    pa = ary;
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 4; j++)
    {
        printf("%5d", pa[i][j]);
    }
    printf("\n");
    }*/
    //int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    //print_ary(ary);
   /* int sel;
    printf("01 두 정수의 합\n");
    printf("02 두 정수의 곱\n");
    printf("03 두 정수 중에서 큰 값 계산\n");
    printf("원하는 연산을 선택하세요 : ");
    scanf("%d", &sel);
    switch (sel)
    {
    case 1:func(sum); break;
    case 2:func(mul); break;
    case 3:func(max_); break;
    }*/
    int a = 10;
    double b = 20.4;
    void* vp;

    vp = &a;
    printf("a is %d\n", *(int*)vp);
    vp = &b;
    printf("b is %f\n", *(double*)vp);
	system("pause");
	return EXIT_SUCCESS;
}
void swap_ptr(char** ppa, char** ppb) {
    char* temp;
    temp = *ppa;
    *ppa = *ppb;
    *ppb = temp;
}
void print_str(char** src, int count){
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", src[i]);
    }
}
void print_ary(int(*pa)[4]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++)
        {
            printf("%5d",pa[i][j]);
        }
        printf("\n");
    }
}

void func(int(*fp)(int, int)) {
    int a, b;
    int res;
    printf("두 정수의 값을 입력하세요 :");
    scanf("%d%d", &a, &b);
    res = fp(a, b);
    printf("결과값은 : %d\n", res);
}
int sum(int a, int b) {
    return(a + b);
}
int mul(int a, int b) {
    return(a *b);
}
int max_(int a, int b) {
    if (a > b) return a;
    else return b;
}
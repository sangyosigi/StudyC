/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>
void auto_func(void);
void static_func(void);
int add_ten(int a);
int *sum(int a, int b);
// 메인함수
int main(void)
{
    int a = 10, b = 20;
    int *res = sum(a,b);
    printf("합=%d\n", *res);
    system("pause");
    return EXIT_SUCCESS;
}
   /* printf("일반 지역 변수(auto)를 사용한 함수...\n");
    for (int i = 0; i < 3; i++)
    {
        auto_func();
    }
    printf("정적 지역 변수(static)를 사용한 함수...\n");
    for (int i = 0; i < 3; i++)
    {
        static_func();
    }

    system("pause");
	return EXIT_SUCCESS;*/
//
//    register int i;
//    int sum = 0;
//    for (int i = 0; i <= 10000; i++)
//    {
//        sum += i;
//    }
//    printf("sum is %d\n",sum);
//    system("pause");
//    return EXIT_SUCCESS;
//}
//void auto_func(void) {
//    auto int a= 0;
//    a++;
//    printf("%d\n", a);
//}
//void static_func(void) {
//    static int a = 0;
//    a++;
//    printf("%d\n", a);
//}
int *sum(int a,int b) {
    static int res;
    res = a + b;
    return &res;
}
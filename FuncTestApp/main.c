/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>
int sum(int x, int y);
int get_num(void);
void print_char(char ch, int count);
void fruit(int count);
int factorial(int count);
// 메인함수
int main(void)
{
	int result = factorial(5);
	printf("result=%d\n", result);
	system("pause");
	return EXIT_SUCCESS;
}
//합계 함수
//int sum(int x, int y) {
//    int temp;
//    temp = x + y;
//    return temp;
//}
//int get_num(void)
//{
//    return 10;
//}

void print_char(char ch, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
	return;
}
void fruit(int count) {
	printf("apple\n");
	if (count == 3)return;
		return;
	
	fruit(count + 1);
}
int factorial(int count) {
	if (count == 1) { return 1; }
	return count * factorial(count - 1);
}
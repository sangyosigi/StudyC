/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 선택문 작업
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void)
{
	/*int a = 0, b = 0;
	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else if (a < 0)
	{
		b = 3;
	}
	else
	{
		a = -1;
	}
	printf("a=%d, b=%d\n", a,b);*/

	int a = 20, b = 10, c = 0;
	if (a > 10)
	{
		if (b >= 0)
		{
			c = 1;
		}
		else
		{
			c = -1;
		}
	}
	else
	{
		c = 0;
	}
	printf("a=%d,b=%d,c=%d\n",a, b, c);
	system("pause");
	return EXIT_SUCCESS;
}
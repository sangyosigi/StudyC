/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - sangsik Choi.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void)
{
	int rank = 0, res = 0;
	scanf("%d",&rank);
	
	switch (rank)
	{
	case 1:
		res = 300;
		break;
	case 2:
		res = 200;
		break;
	case 3:
		res = 100;
		break;
	default:
		res = 10;
		break;
	}
	printf("rank=%d,res=%d\n", rank, res);
	system("pause");
	return EXIT_SUCCESS;
}
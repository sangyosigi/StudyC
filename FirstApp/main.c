#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif //_MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main() {
	short sh = 32767;
	int in = 2147483647;
	long ln =2147483647;
	long long lln = 1234561234512345;
	unsigned int ui = 4294967295;

	printf("short �ִ밪%d\n", sh);
	printf("int �ִ밪%d\n", in);
	printf("long �ִ밪%1d\n",ln);
	printf("long long �ִ밪%11d\n", lln);
	printf("unsigned int �ִ밪 %d\n", ui);
	ui = -1;
	printf("unsigned int ���簪 %u\n", ui);
	system("pause");
		 return 0;
}     
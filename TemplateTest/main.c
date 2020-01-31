#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif //_MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Hello World!\n");
	printf("Hi second again\n");
	
	printf("%lf\n", 1e10);
	printf("%.7lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.1le\n", 0.0000314);

	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c은%s입니다.\n", '1', "first");
	system("pause");
		 return 0;
}    
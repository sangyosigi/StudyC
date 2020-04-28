#include<stdio.h>

enum E_Error { OUTOFMEMORY, OVERRANGE, HARDFULL, STACKFULL };

void report() {
	if (true) throw HARDFULL;
}
int main() {
	try
	{
		report();
		puts("작업완료");
	}
	catch (E_Error e)
	{
		switch (e)
		{
		case OUTOFMEMORY:
			puts("메모리가 부족합니다.");
			break;
		case OVERRANGE:
			puts("연산 범위를 초과했습니다.");
			break;
		case HARDFULL:
			puts("하드 디스크가 가득 찼습니다.");
			break;
		case STACKFULL:
			break;
		default:
			puts("작업을 완료했습니다.");
			break;
		}
	}
}
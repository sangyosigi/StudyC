#include<stdio.h>

enum E_Error { OUTOFMEMORY, OVERRANGE, HARDFULL, STACKFULL };

void report() {
	if (true) throw HARDFULL;
}
int main() {
	try
	{
		report();
		puts("�۾��Ϸ�");
	}
	catch (E_Error e)
	{
		switch (e)
		{
		case OUTOFMEMORY:
			puts("�޸𸮰� �����մϴ�.");
			break;
		case OVERRANGE:
			puts("���� ������ �ʰ��߽��ϴ�.");
			break;
		case HARDFULL:
			puts("�ϵ� ��ũ�� ���� á���ϴ�.");
			break;
		case STACKFULL:
			break;
		default:
			puts("�۾��� �Ϸ��߽��ϴ�.");
			break;
		}
	}
}
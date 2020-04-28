#include<stdio.h>

class Exception {
protected:
	int number;
public:
	Exception(int n) : number(n) { ; }
	virtual void printError() {
		printf("[Error]%d�� ������ ����\n", number);
	}
};
class TooBigException : public Exception {
public:
	TooBigException(int n) : Exception(n) { ; }
	virtual void PrintError() {
		printf("[Error]%d�� �ʹ� Ů�ϴ�. 100���� �۾ƾ�\n", number);
	}
};
class OddException : public TooBigException {
public:
	OddException(int n) : TooBigException(n) { }
	virtual void PrintError() {
		printf("[Error]%d�� Ȧ���Դϴ�.¦�����\n", number);
	};

	int main()
	{
		int n;

		while (true)
		{
			try
			{
				printf("���� �Է�(���� 0) : \n");
				scanf("%d,&n");
				if (n == 0) break;
				if (n < 0) throw Exception(n);
				if (n > 100) throw TooBigException(n);
				if (n % 2 != 0)throw OddException(n);
				printf("%d�� ��Ģ�� �´� ���Դϴ�\n");
			}
			catch (Exception & e)
			{
				e.printError();
			}
		}
	}
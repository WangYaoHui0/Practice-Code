#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int Fib(int n)
//{
//	//�ݹ鷽����쳲�������
//	if (n == 0)
//	{
//		return 0;
//	}
//	else if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}

int Fib(int n)
{
	//�ǵݹ鷽����쳲�������
	int i = 0;
	int j = 1;

	if (n == 0)
	{
		return i;
	}
	else if (n <= 2)
	{
		return j;
	}
	else
	{
		int tmp = 0;
		while (n - 2 >= 0)
		{
			tmp = i + j;
			i = j;
			j = tmp;
			n--;
		}
		return tmp;
	}
}

int main()
{
	int n = 0;
	printf("������Ҫ���쳲���������λ��:>");
	scanf("%d", &n);

	if (n < 0)
	{
		printf("�������\n");
	}
	else
	{
		printf("��λ������Ӧ��쳲�������Ϊ:>%d\n", Fib(n));
	}

	system("pause");
	return 0;
}
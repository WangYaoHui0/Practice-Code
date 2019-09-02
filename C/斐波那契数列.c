#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int Fib(int n)
//{
//	//递归方法求斐波那契数
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
	//非递归方法求斐波那契数
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
	printf("请输入要求的斐波那契数的位数:>");
	scanf("%d", &n);

	if (n < 0)
	{
		printf("输入错误！\n");
	}
	else
	{
		printf("该位数所对应的斐波那契数为:>%d\n", Fib(n));
	}

	system("pause");
	return 0;
}
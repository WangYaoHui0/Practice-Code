#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int Fac(int n)
{
	//递归方法求n的阶乘
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}

//int Fac(int n)
//{
//	//非递归方法求n的阶乘
//	int num = 1;
//
//	for (int i = 1; i <= n; i++)
//	{
//		num *= i;
//	}
//	return num;
//}

int main()
{
	int n = 0;
	
	printf("请输入一个数:>");
	scanf("%d", &n);

	printf("这个数的阶乘为:>%d\n", Fac(n));

	system("pause");
	return 0;
}
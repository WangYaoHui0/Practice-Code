#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	else
	{
		return (n % 10) + DigitSum(n / 10);
	}
}

int main()
{
	int n = 0;

	printf("请输入一个非负整数:>");
	scanf("%d", &n);

	printf("组成这个数的所有数字之和为:> %d\n", DigitSum(n));

	system("pause");
	return 0;
}
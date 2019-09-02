#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int average(int a, int b)
{
	int n = 0;
	n = (a + (b - a) / 2);
	return n;
}

int main()
{
	int num1 = 0;
	int num2 = 0;

	printf("请输入两个数：>");
	scanf("%d%d", &num1, &num2);
	printf("两数的平均值为：>%d\n", average(num1, num2));

	system("pause");
	return 0;
}